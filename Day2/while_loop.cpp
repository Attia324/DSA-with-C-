#include <iostream>
using namespace std;
int main()
{
    //  =============(While lopp Practise)==============

    // Example 1 : Print number from 1 - n
    int N , count = 1;
    cout << "Please Enter the Number : ";
    cin >> N;
    while(count <= N){
        cout << count << "\t";
        count = count + 1; // count +=1; OR count++  
    }
    cout << endl;


    // Example 2 : Sum number from 1 to N
    int i = 0 , sum = 0;
    while(i <= N )
    {
        sum += i;
        i++;
    }
    cout<< "Sum = " << sum << endl;

    // Example 3 : Sum  Odd Numbers from  1 to N
    int j = 0 , oddSum=0;
    while (j <= N){
        if(j % 2 != 0){
            oddSum+=j;
        }
        j++;

    }
    cout <<"Sum of Odd numbers : " << oddSum <<endl;
    return 0;
}
