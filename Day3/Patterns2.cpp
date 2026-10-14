#include <iostream>
using namespace std;
int main(){    

    // ==============(Inverted Trangle Patterns)===============
    int n=4;
    // Example 1 : Inverted Triangle pattern  row1-> 1  1  1  1,row2-> 2  2  2 ,row3-> 3   3 ,row4-> 4
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            cout <<" ";
        }
        for(int j=n ; j>i ; j--){
            cout << i+1;
        }
        cout << endl;
    }

    // Example 2 : Character version of above example (Example 1)
    char cha='A';
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i; j++){
            cout << " ";

        }
        for(int j=0; j<n-i ; j++){
            cout << cha;
        }
        cout << endl;
        cha++;
    }
    
    // Example 3 : Pyramid shape 
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=1; j<=i+1 ; j++){
            cout << j;
        }
        for(int j=i ; j>0 ; j--){
            cout << j;
        }
        cout<<endl;
    }

    // Example of Hollow Diamond
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i-1; j++){
            cout<<" ";
        }
    cout<<"*";
    if(i!=0){
       for(int j=0 ; j<(2*i-1) ;j++){
        cout << " ";
       }
       cout << "*";
    }
    cout << endl;
    }
    for(int i=0 ; i<(n-1) ;i++){
        for(int j=0 ; j<i+1 ; j++){
            cout << " ";

        }
        cout << "*";
        if(i!=(n-2)){
            for(int j=0; j<(2*(n-i)-5) ;j++){
                cout << " ";
            }
            cout<<"*";
        }
        cout << endl;

    }

    // Butterfly patterns
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout << "*";

        }
  
        for(int j =0 ; j<(n-i-1) ; j++){
            cout <<" ";
        }
        for(int j =0 ; j<(n-i-1) ; j++){
            cout <<" ";
        }
        for(int j=0 ; j<=i ; j++){
            cout << "*";

        }
        cout << endl;
    }
    for(int i=0 ; i<(n-1) ; i++){
        for(int j=0 ; j<(n-i-1) ; j++){
            cout << "*";
        }
        for(int j=0 ; j<i+1; j++){
            cout << " ";
        }
        for(int j=0 ; j<i+1; j++){
            cout << " ";
        }
        for(int j=0 ; j<(n-i-1) ; j++){
            cout << "*";
        }
    cout <<endl;

        
    }
    return 0;

}