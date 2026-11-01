#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0 ; st < n  ; st++){
        for(int end=st ; end<n ; end++){
            for(int i=st ;i<=end ; i++){
                cout <<arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    //  Brute Force approch to  get Maximum subarray sum
    int maxSum =0;
    for(int st=0; st<n; st++){
        int currSum=0;
        for(int end=0 ; end<n ; end++){
            currSum+=arr[end];
            maxSum=currSum  ;      }

    }
    cout <<"Max Sum =" << maxSum <<endl ;

    // Kadane's Algorithm (optimized method )
    int currentSum=0 ,maxsum=INT32_MIN;
    for(int i=0 ; i<n ; i++){
        currentSum+=arr[i];
        maxsum=max(currentSum,maxsum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout << "Maximum Subarray sum using kadane's Algirthim :"<<maxsum <<endl;

    return 0;
}