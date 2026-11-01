#include <iostream>
using namespace std;
// Function  to change a using pointer 
int ChanegA(int* a){
    *a=20;
}
// Functionn to change  a uing Alias 
int changeA(int &b){
    b=30;
}
int main(){
    //  =====(pointers Definition)========

    int a=10;
    int*ptr=&a;
    cout << &a <<endl;
    cout << ptr <<endl;
    
    int** ptr2=&ptr;  // Poitner to pointer (pointer store an adres of another pointer )
    cout << &ptr <<endl;
    cout << ptr2 <<endl;

    // =====(De_reference operator)========
    // de reference means that we want to get value  by giving address
    cout << *ptr <<endl;// print the value at that address
    cout << *ptr2 <<endl;
    cout << **ptr2<<endl;

    // =====(Pass by refrence using pointers)======
    int var = 10;
    ChanegA(&var);
    cout <<"Value of a after fnx: " << var <<endl;

    // =====(Pass by reference using alias)========
    int Abc=15;
    changeA(Abc);
    cout << "Value after fnx :" <<Abc <<endl;

    // ======(Array Pointers)======== (contant throughout the program)
    int arr[]={1,2,4,5,6};
    cout << "Array Pointer :"<<arr << endl;
    cout << "Array Pointer Value: "<<*arr << endl;

    // ======(Null Pointer)=======
    int* Nptr;// Get random value of adrress
    cout << Nptr <<endl;

    int* nptr=NULL; // There no address stored
    cout <<nptr <<endl;

    // ======(Pointer Arithmentic)=====
    int x=10;
    int* p=&x;
    //  ======(increament p++)========
    cout <<"Before increament :" << p << endl;
    p++;
    cout << "After Increament :" << p <<endl; 
    cout <<endl;
    //  ========(Decreament p++)========
    cout <<"Before decreament :" << p << endl;
    p--;
    cout << "After decreament :" << p <<endl; 

    // =========(Addition Subraction)=========
    cout << "Add:" <<(p+2)<<endl;
    cout << "Subtract:" <<(p-5) <<endl;

    // (Subtract pointer from pointer)
    int* q1;
    int* q2=(q1+2);
    cout << q1 <<endl;
    cout << q2 <<endl;
    cout <<"How many integer we can store between q1 ans q2 is :" << (q2-q1) <<endl;

    // (Compare < ,<= ,> ,>= ,==,!=)
    cout <<(q1 > q2) << endl;
    cout <<(q1 < q2) << endl;
    cout <<(q1 >= q2) << endl;
    cout <<(q1 <= q2) << endl;
    cout <<(q1 == q2) << endl;
    cout <<(q1 != q2) << endl;

}