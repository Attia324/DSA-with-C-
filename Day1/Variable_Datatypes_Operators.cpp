#include <iostream>
using namespace std;
int main()
{
    //  ===================(OutPut Values)==============
    // How  show output on screen
    cout<<"apna college"<<endl;
    cout<<"Hello World"<<endl;
    cout<<"Attia Ubaid"<<endl;
    cout<<"Attia\n"<<"Ubaid"<<endl;
    //  =================(VARIABLES)====================

    // Variables
    int Age=12;
    string FullName="Attia Ubaid is student";
    float  hieght=5.31;
    char Grade='A';
    bool issafe=true;
    double PI=3.14345432;
    // Printing Variable & size they are occupying

    // Integer Occupy  4 bytes of memory
    cout<<Age<<"  (Contain size of    :"<<sizeof(Age)<<"bytes)"<<endl;

    // Char occupy 1 byte(8 bits _ _ _ _ _ _ _ _) of memory 
    cout<<Grade<<"   (Contain size of    :"<<sizeof(Grade)<<"byte)"<<endl;

    // String  Occupy  24 bytes of memory
    cout<<FullName<<"   (Contain size of    :"<<sizeof(FullName)<<"byte)"<<endl;

    // Float occupy 4 bytes
    cout<< hieght<<"   (Contain size of    :"<<sizeof(hieght)<<"byte)"<<endl;

    // Bool occupy 1 byte(8 bits _ _ _ _ _ _ _ _) of memory  
    cout<< issafe<<"   (Contain size of    :"<<sizeof(issafe)<<"byte)"<<endl;

    // double occupy  8 bytes of memory  
    cout<< PI <<"   (Contain size of    :"<<sizeof(PI)<<"byte)"<<endl;


    //  ================(TypeCasting)======================
    // Type Casting(Converting data from one type to another)
    // Simple Conversion 
    int Class= 89;
    char Var=Class;
    cout<<Var<<endl;
    // Type Casting(  we mostly use typecasting   where we need to convert from bigger to lower)
    double Price=100.99;
    int newPrice=int(Price);
    cout<<newPrice<<endl;

    // =================(Input Values)=====================
    int userage;
    cout<< "Enter your Age:";
    cin>>userage;
    cout<<"Your Age is:  "<<userage<<endl;

    double price;
    cout<<"Please Enter price;";
    cin>>price;
    cout<<"You Entered Price ="<<price<<endl;
    //  ===============(Operators)=====================
    //  Arithmetic(+ , - , / , % , * )
    int a=5 , b=2;
    cout <<"Sum = " << a+b << endl;
    cout <<"Difference = " <<a-b << endl;
    cout <<"Product = " <<a*b <<endl;
    cout <<"Division = " <<a/b <<endl; // If both are interger then result wil always be in  integer 
    cout << "Modulus = " <<a%b <<endl;
    //  Here we use type casting 
    cout <<5 / double(2)<<endl; 

    //  Relational (= , >=, <= , == , < , > , != ) They return True or False
    cout << (5 > 3) << endl; // True -> 1
    cout << (5 < 3) << endl; // False-> 0
    cout << (3 >= 3) << endl; // True ->1
    cout << (5 == 3) << endl; // False -> 0
    cout << (5 != 3) << endl; // True -> 1

    //  Logical Operators( || , && , ! )
    cout << !(5 > 3) << endl; // False -> 0
    cout<< ( (5 > 3) || ( 3 < 2)  )<<endl; // True ->1
    cout<< ( (5 > 3) && ( 3 < 2)  )<<endl; // False ->0

    // =======( Solving Some Problems using these concepts )======
    int num1,num2, sum;
    cout << "Enter  Number 1 : "<<endl;
    cin>> num1;
    cout<< "Enter Number 2 : "<<endl;
    cin>> num2;
    sum=num1 + num2;
    cout<< "Sum ="<<sum <<endl;

    //  ===============(Unary operators)=================
    int x= 10;
    int y;
    y=++x; // First Update the value and then perform Task
    cout <<y<<endl;
    cout<<x<<endl;
    y=x++; // First Perform Task ad then update the value 
    cout<< y << endl;

    //  Assignment : (Write a program to make Calculator )

    int Num1 , Num2, Result;
    cout << "Enter First Numbers: ";
    cin >> Num1 ;
    cout << "Enter  Second  Numbers: ";
    cin >> Num2 ;
    // perform addition 
    Result = Num1 + Num2 ;
    cout << Result <<endl;
    // perform Subtraction 
    Result = Num1  - Num2;
    cout << Result <<endl;
    //  perform multiplication  
    Result = Num1 * Num2 ;
    cout << Result <<endl;
    //  perform  division 
    Result = Num1 / double(Num2) ;
    cout << Result <<endl;
    //  perform Modulus
    Result = Num1 % Num2;
    cout << Result  <<endl;


 



















    return 0;
}


