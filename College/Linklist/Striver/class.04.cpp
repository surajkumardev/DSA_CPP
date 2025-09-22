//Questions ->>>>>Don't think of moon follow the plan //
Day 3: LinkedList (Medium)



//Question_1. Reverse a linked list -> LeetCode=> 206
Naive Approach the time complexity is 0(2n) and space is O(n)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> st; 
        ListNode* temp=head; 
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        //now back 
        ListNode* tp=head;
        while(tp){
            tp->val=st.top();
            st.pop();
            tp=tp->next;
        }
        return head; 
    }
};
Better appraoch to solve the problem ->O(n) and O(1) space complexity 
class Solution{
    public: 
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL; //piche
        ListNode* curr=head; //temp 

        while(curr){
            ListNode* nextNode=curr->next; 
            curr->next=prev; 
            prev=curr; 
            curr=nextNode; 

        }
        return prev; 
    }  
};


///Question_2. Add Two Number LeetCode-> 2 
LEETCODE 
class Solution {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead=new ListNode(-1);
        ListNode* curr=dummyHead; ///return dummyhead->next; 
    
    
        ListNode* temp1=l1; 
        ListNode* temp2=l2; 
        int carry=0; 
        while(temp1!=NULL || temp2!=NULL){
            int sum=carry; 
            if(temp1){
                    sum=sum+temp1->val; 
                }
                if(temp2){
                    sum=sum+temp2->val; 
                }
                //Node create 
                ListNode* newNode=new ListNode(sum%10);
                carry=sum/10; 
                //carrry=10/10->1 
    
                curr->next=newNode;
                curr=curr->next; 
    
                if(temp1){
                    temp1=temp1->next;
                }
                if(temp2){
                    temp2=temp2->next; 
                }
            }
            if(carry){
                ListNode* newNode=new ListNode(carry);
                curr->next=newNode; 
            }
            return dummyHead->next; 
    }
};