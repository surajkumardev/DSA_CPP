//gcd or HCF of two number 
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
     if(a==0){
            return b;
        }
        return a; 
}
//wrong
// int eculid(int a, int b){/
//     if(a==0){
//         return b; 

//     }
//     eculid(b, a%b);
// }

//euclid algorithm using recursion 

int gcdRec(int a, int b){
    if(b==0) return a; 


    return gcdRec(b, a%b);
}