#include <iostream>
using  namespace std;
// Function helps to reduce redundancy (mean repetition of same line of code )
// Example 1:  Simple Function to print Hello World and  return  3
int PrintHello(){
    cout<< "Hello World\n";
    return  3;
}


//  Parametrize Function ( which take some parameter as input work on then and give output)
//  Example 2 : A function to return sum of two numbers
int Sum(int a, int b){
    return a+b;
}

// Example 3 : Minimun of two Numbers 
int CheckMiniNUM(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

// Example 4 : Calculate   sum of numbers from 1 - N
int SumofNums(int n){
    int sum=0;
    for(int i = 1 ; i<=n ; i++){
        sum+=i; 
    }
    return sum;
}

// Example  5 : Calculate Factorial of Number
int Factorial(int n){
    int fact=1;
    for(int i=n; i>1 ; i--){
        fact *= i;
    }
    return fact;

}
// Example 6 : Calculate sum of digits of number

int SumofDigit(int n){
    int lastDigit =0;
    int sum =0;
    while(n>0){
        lastDigit=n%10;
        sum+=lastDigit;
        n=n/10;
    }
    return sum;
}

// Example 7 : Calculate nCr bionomial Coffecient for n and r
int nCr(int n, int r){
    return (Factorial(n))/(Factorial(r)*Factorial(n-r));


}
// Example 8 : Write a function to check if number is prime or not
bool CheckPrime(int n){
    if(n%2 != 0){
        return true;
    }else{
        return false;
    }
}
int SumPrime(int n){
    int sum = 0;
    for(int i=0 ; i<=n ; i++){
        if(CheckPrime(i)==true){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    // Call of Print Hello Function

   int val = PrintHello();
   cout <<val <<"\n";
   cout << PrintHello() <<endl;


   //    Call of Sum function 

   cout << "sum = " << Sum(4,5)<<endl;


   //    Call to CheckMiniNum Function 
   cout << "minimum Number = " << CheckMiniNUM(5,7) << endl; 

//     Call SumOfNum Function
//   int n;
//   cout << "Please enter Number: ";
//   cin >> n;
   cout  << "Sum of Numbers= " << SumofNums(7) <<endl ;

//   Call to Factorial Function
   cout << "Factorial = " << Factorial(5) << endl;


// Call to SumofDigit
   cout << "Sum of digits of num : " << SumofDigit(67845) << endl;

// Call to nCr function 
cout <<"nCr = " <<nCr(5,3) <<endl;

// Call to  SumPrime
cout << " Sum of Prime number : " << SumPrime(5)  <<endl;
return 0;
}