///Coding Army -> Lecture on ------------------------------------------STACK---------------------------------------------
//Stack operations-> 
// 1. Push
// 2. Pop
// 3. Top 
// 4. Size
// 5. empty


// sfsfsdf

#include<iostream>
using namespace std;
class Stackk{
    public: 
    int* arr; //dynamic array 
    int size;
    int top;
    Stackk(int s){
        size=s;
        top=-1;
        arr=new int[s]; //create  a dynamic array using the new keyword 
    }

    void push(int value){
        //overflow condition 
        if(top==size-1){
            cout<<"Stackk is overflow cannot insert"<<endl;
            return; //need to return here 
        }
        top++;
        // sdfdsfdsfdsfdsf
        arr[top]=value;
    }







// sdfsdfdsfdsfdsfds
// s
// df
// S_IFDIR
// _DN_SAVE_OPERANDS_FLUSH_RESULTSds
// f
// ds
// f




    void pop(){
        if(top==-1){
            cout<<"Underflow condition cannot pop from the Stack"<<endl;
            return ;
        }
        cout<<arr[top]<<" Poped from the Stack: "<<endl;
        top--;
    }
    void peek(){
        //first check whether the stack is empty or not 
        if(top==-1){ //arr[top] and top are two different things
            cout<<"stack is empty"<<endl;
            return ;
        }
        cout<<arr[top]<<" is the current peek element in the Stack"<<endl;
    }
    //isempty
    void isempty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"satck is not empty"<<endl;
        }
    }
    //is size
    void isSize(){
        cout<<"Current size: "<<top+1<<endl;
    }

    //delete the stack 
    ~Stackk(){
        delete[] arr; 
    }
};


int main(){
    Stackk obj(2);
    obj.push(-1);
    obj.peek();
    obj.isempty();









    // /skljfljdsklfjklsf
    return 0;
}   