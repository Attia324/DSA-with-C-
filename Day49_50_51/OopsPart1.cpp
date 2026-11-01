#include <iostream>
#include <string>
using namespace std;
    // =======(Class Definition )=======
class Teacher{
    // ======(Attributes)=======
    private:
        double salary; //teacher salary
    public:
    //======(Constructer)=======
    Teacher(){
        name="Abu Bakar";
        dept="Computer Science";
    }
    string name ; //teacher name
    string dept ; //teacher department 
    string  subj; //teacher subject


            // =======(Methods / Member functions)=======
        void Changedept(string newdept){
            dept=newdept;
        }
        //setter function
        void setsalary(double s){
            salary=s;

        }
        //getter function
        double getsalary(){
            return salary;
        }
};
class Account{
    private://data Hiding 
    double balance;

    public:
    string userId;
    string accnum;
    
};
int main(){
    // Objects of Class teacher
    Teacher t1;
    Teacher t2;
    Teacher t3;
    Teacher t4;
    // Let Update values for object t1
    t1.name = "Sharadha";
    t1.subj = "C++";
    t1.dept = "Computer Science";
    t1.setsalary(100000);
    cout <<t1.name <<endl;
    cout <<t1.dept <<endl;
    cout << t1.subj <<endl;
    cout << t1.getsalary() <<endl;
    // Constructor values
    cout <<t2.name <<endl;
    cout <<t2.dept <<endl;
}