#include <iostream>
using namespace std;
int main()
{
    //  In do-while loop atleast one time work statment run 
    do{
        cout << "Hello World\n";
    }
    while (5>9);
    // Print numbers from 1 to N
    int n=10;
    int i=1;
    do {
        cout << i<<"\t";
        i++;
    }
    while(i<=n);
    return 0;
}