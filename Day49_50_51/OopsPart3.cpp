#include <iostream>
#include <string>
using namespace std;
// =============(Inheretance concepts)============
 
// Parent Class: Person
class Person {
    public:
    string name;
    int age;

    // Parametrized Constructor
    Person(string name , int age ){
        this -> name=name;
        this -> age=age;
        cout << "Parent Constructor\n";
    }

    // Distructor parent class
    ~Person(){
        cout<<"Parent Ditructor\n";
    }
};

// Child class Student 
class Student:public Person{
    public:
    long int rollno ;

    // Parametrized Constructor having Parent class properties
    Student(string  name , int age ,int  rollno) : Person(name ,age){
        cout <<"Child Constructor\n";
        this ->rollno=rollno;
    }

    // Getter Function 
    void getinfo(){
        cout << "name :" << name <<endl;
        cout << "Age :" << age <<endl;
        cout <<"Rollnumber :" <<rollno <<endl;
    };
    // Distructor child class
    ~Student(){
        cout <<"Child Distructor\n";
    }
};

int main(){

Student s1("Attia Ubaid",19,250409518);
s1.getinfo();


}