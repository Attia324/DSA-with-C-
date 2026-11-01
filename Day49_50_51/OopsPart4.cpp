#include <iostream>
#include <string>
using namespace  std;

// ===========(Multi_level Inteheritance)=========
// Parent class:
class Person{
    public:
    string  name;
    int age;

};
// Child Class:
class Student : public Person{
    public :
    int rollno;

};
// Grand Child class:
class Gradstudent : public Student{
    public:
    string  researchArea;
    void getInfo(){
        cout <<"name:" << name <<endl;
        cout <<"age:" <<age <<endl;
        cout << "Rollno:" <<rollno <<endl;
        cout <<"Research Area :" << researchArea <<endl;
    }
};
int main (){
    Gradstudent s1;
    s1.name="Irfan Malik";
    s1.researchArea="Artificial Intellegence";
    s1.age=35;
    s1.rollno=2342;
    s1.getInfo();

}