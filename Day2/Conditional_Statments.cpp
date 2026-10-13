#include <iostream>
using namespace std;
int main()
{
    // ===========(if - else statment)==========

    // Exampel 1: Check if number is +ive or -ive
    int n = -9;
    if ( n >= 0){
        cout << "Positive\n";
    }else{
        cout << "Negative\n";
    }
  

    //  Example 2: Check  if person is eligible for vote or not
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    if (age >=18 ){
        cout << "You can Vote\n";
    } else {
        cout << "You cannot Vote\n";
    }

    // Example 3: Check if Number is Even or Odd
    int num ;
    cout << "Enter the  number: ";
    cin >> num;
    if ( num % 2 == 0){
        cout << "Number is Even \n";
    }else {
        cout << "Number is Odd \n";
    }

    //  ==============(if -elseif- else statment )===============

    // Example 1: Write a program for grading  student marks 
    float StdMarks , TotalMarks , Percentage;

    cout << "Enter Total Marks: ";
    cin >> TotalMarks;
    cout << "Enter Student Marks: ";
    cin >> StdMarks;
    Percentage=(StdMarks/TotalMarks)*100;
    if (Percentage >= 90){
        cout << "A\n";

    }else if(Percentage >= 80){
        cout << "B\n";

    }else if(Percentage >= 70){
        cout << "C\n";

    }else{
        cout << "D\n" ;

    }

    // Example: 2 Find Character lowercase or uppercase
    char  character ;
    cout << "Enter a character: ";
    cin >> character;
    if (character >='A' && character <= 'Z') // OR if(character >=65 && character <= 90) implicit type conversion  
    {
        cout << "character is  in Uppercase \n";

    }else if (character >='a' && character <='z') // OR if(character >=97 && character <= 122)
    {
        cout << "character is in lowercase \n" ; 

    }else{
        cout <<"You enter  other character ! \n";

    }

    //  ===========(Ternary Statments)===================
    //  we usually don't use ternary statments  but where we have very simple logic 
    //  Example 1:
    int number = 45;

    cout << (number >= 0 ? "Positive" : "Negative") << endl;


    


    return 0;

}