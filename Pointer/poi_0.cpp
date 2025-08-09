#include<iostream>
using namespace std;
//Jist => 
// 1. what is pointer 
// A pointer is a variable that stores the memory address of another variable.
// 2. what is two pointer_safety
// 2. Pointer Safety in C++
// Pointers are powerful, but misuse can lead to segmentation faults, undefined behavior, or memory leaks.
// Here are the main safety rules:
// A. Always initialize pointers
// B. Never dereference a nullptr
// C. Avoid dangling pointers
// D. Manage dynamically allocated memory


// 3. what is ampersand
// 4. pass by value 
// 5. pass by referece 
// 6. array pionter 
void PointerConcept(int* ptr){
    *ptr=12340;
}

int main(){
    int n=10;
    int* ptr=&n;
    cout<<n<<""<<ptr;
    cout<<"Value"<<n<<"ADDRESS "<<&n;
    cout<<"POINTER VALUE"<<*ptr<<" ";
    cout<<endl;
    cout<<ptr<<"" ;
    int* p;
    {
        int x = 10;
        p = &x;  // p points to x
    } // x goes out of scope here
    int number=10;
    int *ptsr=&number;
    PointerConcept(ptsr);
    cout<<"The value is changed to: "<<number<<endl;
    //Pointer to pointer approcah 
    int x=10;
    int* pp=&x;
    int** ppp=&pp;
    cout<<x<<endl;
    cout<<*pp<<endl;
    cout<<**ppp<<endl;
    
    return 0;
}