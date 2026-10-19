#include <cmath>
#include <iostream>
using namespace std;

// Function to reverse the number
int reversenum(int num){
    int rem ,revnum=0;
    while(num != 0){
        rem=num%10;
        num=num/10;
        revnum=(10*revnum)+rem;

    }
    return revnum;
}
// WAF to find if a number is power of 2 without using any loop 
    bool IfPowerOf2(int n){
        if(n&(n-1)==0){
            return true;

        }else{
            return false;
        }
    }
int main(){
    int a = 6 , b = 10;
    // Bitwise & ,| and ^(XOR)
    cout << (a & b) <<endl;
    cout << (a | b) <<endl;
    cout << (a ^ b) <<endl;
    //  Bitwise >> (Left Shift operation ) general form of ans = x*2^y
    int x = 10 ; // Number to shift
    int y = 1; // How much places to shift
    cout <<"Left Shift: " << (x << y) << endl;
    //  Bitwise << (Right Shift operation ) general form of ans = x/2^y
    cout << "Right Shift: " << (x >> y) << endl;

    int num  = 125;
    cout << "Before Reversing :Number = "<<num<<endl;
    cout << "Reverse Numbers = " <<reversenum(num)<<endl;
    int n=32;
    cout << "Number is power of two?true/fasle:\t" << IfPowerOf2(n) << endl;

 


}