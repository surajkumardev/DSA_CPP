Day 4: LinkedList (Tortoise & Hare Algorithm)


Question_1
Middle of a LinkedList [TortoiseHare Method]
class Solution {
    public:
    ListNode* middleNode(ListNode* head) {
            ListNode* slow=head; 
            ListNode* fast=head; 
            while(fast && fast->next){
                slow=slow->next; 
                fast= fast->next->next; 
    
            }
            return slow; ...when the fast is at the end the slow will be at the middle of the linked list 
    }
};


Question_2 
Detect a loop/cycle in LL
class Solution {
    public:
    bool hasCycle(ListNode *head) {
            ListNode* slow=head; 
            ListNode* fast=head; 
            while(fast && fast->next){
                slow=slow->next; 
                fast=fast->next; 
                if(slow==fast){
                    return true;
                }
            }
            return false; 
    }
};

Question_3
142. Linked List Cycle II
class Solution {
    public:
    ListNode *detectCycle(ListNode *head) {
            ListNode* slow=head; 
            ListNode* fast=head; 
            while(fast && fast->next){
                fast=fast->next->next; 
                slow=slow->next; 
                if(slow==fast){
                    ListNode* start=head;
                    while(start!=slow){
                        slow=slow->next; 
                        start=start->next;
                    }
                    return start; 
                }
            }
            return nullptr; 
    }
};
//how to removethe cycle form the linked list 


Question_4
Length of Loop in LL
class Solution {
    public:
    int lengthOfCycle(ListNode *head) {
            ListNode* slow=head; 
            ListNode* fast=head; 
            while(fast && fast->next){
                fast=fast->next->next; 
                slow=slow->next; 
                if(slow==fast){ //if there is a loop 
                    int count=1;
                    ListNode* temp=slow->next; 
                    while(temp!=slow){
                        count++;
                        temp=temp->next; 
                    }
                    return count; 
                }
            }
            return -1; 
    }
};
class Solution {
    public:
        int findLength(ListNode* slow, ListNode* fast){
            int count=1; 
            fast=fast->next; 
            while(slow!=fast){
                count++;
                fast=fast->next; 
            }
            return count ;
        }

        int lengthOfCycle(ListNode* head) {
            if (!head) return 0;
    
            ListNode* slow = head;
            ListNode* fast = head;
    
            while (fast && fast->next) {
                slow = slow->next;
                fast = fast->next->next;
    
                if (slow == fast) {
                    return findLength(slow, fast);      
                }
            }
            return 0; 
        }
};
///code 
int findLength(ListNode* slow, ListNode* fast) {
    int count = 1;
    fast = fast->next; {//Move the fast to next and increase counter by 1 }
    while (slow != fast) {
        count++;
        fast = fast->next;
    }
    return count;
}    
Question_5
Delete the Middle Node of the Linked List
Approach -> 
/*
    Move to the next before the middle node 
    then move 
    node.next=node.next.next; 
    delete temp; 

*/
NAIVE APPROACH -> O(n) and O(1)
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        /* Jist-> find the n and then 
            Before the mid-1 Do 
            tp.next=tp.next.next
            free(middle)
        */

        ///base case
        if(head==nullptr || head->next==nullptr)
                return nullptr; 

        //count Size
        int n=0;
        ListNode* temp=head; 
        while(temp){
            n++;
            temp=temp->next; 
        }
        int mid=n/2;


        //code Logic
        ListNode* tp=head; 
        for(int i=1;i<mid;i++){
            tp=tp->next;
        }
        ListNode* delNode=tp->next; 
        tp->next=tp->next->next;
        delete delNode;

        return head;

    }
};

Optimized Appraoch remove the element from the middle of the linked list 
//using the Tortoise and hare algorithm 
//just skip the one pass for the slow pointer 
//then 
//Node* temp=slow.next; 
// slow.next=slow.next.next 
// delete temp;

class Solution {
    public:
        ListNode* deleteMiddle(ListNode* head) {
            //base case 
            if(head ==NULL || head->next ==NULL){
                return nullptr; 
    
            }
            //logic 
                /*
                Jist-> what is the jist -> 
                skip the first move for the slow one 
                and then just chagen for the slow good to go 
            */
            ListNode* slow=head; 
            ListNode* fast=head; 
            fast=fast->next->next; //skip slow for one pass
            while( fast && fast->next ){ //odd even case
                slow=slow->next; 
                fast=fast->next->next;
            }
            //now i have slow before mid 
            ListNode* deleteNode=slow->next;
            slow->next=slow->next->next; 
            delete deleteNode; 
            return head; 
        }
    };