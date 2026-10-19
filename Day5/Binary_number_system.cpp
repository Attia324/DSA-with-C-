#include <iostream>
using namespace std;
//  Convert Decimal to Binary
int DectoBinary(int decnum){
    int ans=0 , pow=1;
    while(decnum>0){
        int rem ;
        rem = decnum%2;
        decnum = decnum/2;
        ans += ( rem*pow);
        pow = pow*10;
        
    }
    return ans;

}

// Convert Binary to decimal
int BinaryToDecimal(int binaryNum){
    int ans = 0, pow=1;
    while(binaryNum!=0){
        int rem ;
        rem = binaryNum % 10;
        binaryNum = binaryNum / 10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main()
{
    //  ========(Binary Number System )===========
    cout << DectoBinary(5) << endl;
    for(int i =0 ; i<9 ; i++){
        cout << DectoBinary(i) << endl;
    }

    cout << BinaryToDecimal(110101) <<endl;
}
