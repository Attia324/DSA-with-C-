#include <iostream>
using namespace std;
int main(){
    int n=9;
    for(int sum=0 ; sum<=n ;){
    int prev_value=0;
    int next_value=1;
    sum=prev_value + next_value;
    cout << sum << " ";
    prev_value=next_value;
    next_value=sum;
    }
}