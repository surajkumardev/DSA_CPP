#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	const int B = 20;
	int N, Q;
	cin >> N >> Q;
	vector<int> A(N);
	for(int i = 0; i < N; i++) cin >> A[i];
	vector<pair<int,int> > queries(Q);
	vector<vector<int> > qwhere(N);
	for(int q = 0; q < Q; q++){
		int l, r;
		cin >> l >> r;
		l--; r--;
		queries[q] = {l, r};
		qwhere[l].push_back(q);
	}
	vector<int> ans(Q, 0);
	vector<int> idx;
	for(int l = N-1; l >= 0; l--){
		vector<int> nidx;
		{
			vector<int> basis(B);
			nidx.push_back(l);
			basis[31-__builtin_clz(A[l])] = A[l];
			for(int j : idx){
				int cur = A[j];
				for(int b = B-1; b >= 0; b--){
					if(cur & (1 << b)){
						cur ^= basis[b];
					}
				}
				if(cur){
					basis[31-__builtin_clz(cur)] = cur;
					nidx.push_back(j);
				}
			}
			idx = nidx;
		}
		for(int q : qwhere[l]){
			int r = queries[q].second;
			int a = -1;
			bool ok = true;
			vector<int> q_basis(B);
			auto process = [&](int cnt){
				// cerr << "process " << cnt << '\n';
				if(!ok) return;
				if(cnt == 0) return;
				if(a == -1){
					a = 0;
					cnt--;
				}
				if(cnt == 0) return;
				int nbits = 0;
				int val = 0;
				for(int b = B-1; b >= 0; b--){
					if(q_basis[b]){
						nbits += 1;
						val *= 2;
						if(a & (1 << b)) val += 1;
					}
				}
				int nval = val + cnt;
				if(nval >= (1 << nbits)){
					ok = false;
					return;
				}
				int cbit = nbits;
 
				int na = 0;
				for(int b = B-1; b >= 0; b--){
					if(q_basis[b]){
						cbit--;
						if(nval & (1 << cbit)){
							na ^= q_basis[b];
						}
					}
				}
				// cerr << a << " => " << na << '\n';
				a = na;
			};
			for(int i = 0; i < (int)idx.size(); i++){
				int cur = A[idx[i]];
				for(int b = B-1; b >= 0; b--){
					if(cur & (1 << b)){
						cur ^= q_basis[b];
					}
				}
				if(cur){
					int t = 31-__builtin_clz(cur);
					q_basis[t] = cur;
					for(int b = t+1; b < B; b++){
						if(q_basis[b] & (1 << t)) q_basis[b] ^= cur;
					}
				}
				// cerr << "add " << cur << '\n';
				int st = idx[i];
				int en = (i+1 == (int)idx.size() ? N : idx[i+1]);
				process(min(en, r+1) - min(st, r+1));
			}
			ans[q] = ok;
			// cerr << ok << '\n';
		}
	}
	for(int q = 0; q < Q; q++){
		cout << (ans[q] ? "YES" : "NO") << '\n';
	}
}
 
int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}