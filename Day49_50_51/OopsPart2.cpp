#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
        // Copy Constructor
        Teacher(Teacher &orgobj){
            cout <<"I am custom copy constructor:"<<endl;
            this->name=orgobj.name;
            this->dept=orgobj.dept;
            this->subject=orgobj.subject;
            this->salary=orgobj.salary;

        }
        // Parametrized Constructor 
        Teacher(string name,string dept,string subject,double salary){
            this->name=name;
            this->dept=dept;
            this->subject=subject;
            this->salary =salary;
        }
        void get(){
            cout << "name=" << name <<endl;
            cout << "Subject=" << subject <<endl;
            cout << "Salary=" << salary <<endl;
        }


};
class Student{
    public:
    string name;
    double* cgpaptr;
    Student(string name , double cgpa){
        this -> name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    // =========(Shallow Copy Constructor)===========
    // Student (Student &obj){
    //     this->name=obj.name;
    //     this->cgpaptr=obj.cgpaptr;
    // }
    // ========(Deep Copy Constructor)============
    Student(Student &obj){
    this->name = name;
    cgpaptr= new double;
    *cgpaptr=*obj.cgpaptr;
    }
    void getInfo(){
        cout <<" name :" << name <<endl;
        cout <<" cgpa :" << *cgpaptr <<endl;
        
    }

    // ========(Destructor)=========
    ~Student(){
        cout << " I  Delete everything :";
        delete cgpaptr;
    }
};
int main(){
    Teacher t1("Sharadha" , "Computer science" , "C++",100000);
    t1.get();
    Teacher t2(t1); // Default copy constructor -Invoke
    t2.get();
    Student s1("Rahul" ,8.9);
    s1.getInfo();

    Student s2(s1);
    *(s2.cgpaptr)=9.0;
    s1.getInfo();

    s2.name="Neha";
    s2.getInfo();

}