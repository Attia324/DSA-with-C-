#include <iostream>
using namespace std;
int main()
{
    //  ==============(For Loop Practise)============
    int N;
    cout << "Please Enter the number ";
    cin >> N;
    // Example 1 : Print numbers from 1 - N

    cout << "Numbers from 1 to "<<N<<":\n";
    for ( int i = 1; i <= N; i++)
    {
        cout << i <<"\t";
    }
    cout << endl;

    // Example 2 : Write a program to print  Odd numbers
    cout << "Odd numbers between 1 to "<<N<<":\n";
    for (int i=1 ; i<=N; i=i+2 )
    {
        if(i%2!=0){
            cout << i <<"\t";
        }
    }
    cout << endl;

    //  Example 3: Sum of number from  1 - N with break keyword at where n = 5
    int sum = 0;
    for(int i=1 ; i<=N ; i++)
    {
        sum += i;
        if(i == 5){
            break;
        }
    }
    cout << "Sum = " << sum << endl;


    //  Example 4 : Sum of all Odd numbers from  1 - N
    int oddSum=0 ;
    for (int i = 1 ; i<=N; i=i+2 )
    {
        if(i%2!=0)
        {
            oddSum +=i;
        }

    }
    cout <<"Sum of Odd Numbers is: "<<oddSum<<endl;

    // Example 5 : Sum all even numbers from 1 to N
    int evenSum = 0;
    for( int i=0; i<=N; i++)
    {
        if(i % 2 == 0){
            evenSum+=i;

        }
        
    }
    cout <<"Sum of even  numbers: "<< evenSum << endl;

    // Example 6 :Check if a number is Prime or Not 
    bool isprime=true;
    for(int i =2; i < N; i++){
        if( N%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout << "Prime Number \n ";
    }
    else{
        cout << "Not Prime \n ";
    }

    // Example 7 : Sum of all numbers from 1 - N  which are divisible by 3
    int Sum=0;
    for(int i = 0 ; i <= N ; i++)
    if (i%3 == 0){
        Sum+=i;
    }
    cout << "Sum of all number divible by 3 is : " << Sum<<endl ;

    // Example 8 : Print Factorial of number N
    int Factorial = 1;
    for(int i = N; i>0; i--)
    {
        Factorial*=i;
    }
    cout << "Factorial = "<< Factorial << endl;
    return 0;
}