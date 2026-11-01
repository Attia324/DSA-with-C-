#include <iostream>
#include <string>
using namespace std;
// ===========(Multiple Inheritance)============
class Student {
    public:
    string name;
    int rollno;
};
class Teacher  {
    public:
    string subject;
    double salary;
    

};
class TA :public Student , public Teacher{
    public:
        void getInfo(){
            cout <<"name:" << name <<endl;
            cout << "Rollno:" <<rollno <<endl;
            cout << "Subject:" <<subject <<endl;
            cout << "Salary:" << salary <<endl;

    }


};
int main(){
    TA t1;
    t1.name="Samij";
    t1.rollno=23;
    t1.subject="CS";
    t1.salary=10000;
    t1.getInfo();

}