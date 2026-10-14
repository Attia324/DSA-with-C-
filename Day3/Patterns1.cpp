#include <iostream>
using namespace std;
int main ()
{
    // ===============(Patterns)==================
    int n = 4;
    // Example 1: print  1 2 3 4 in 4 lines
    for(int i = 1; i<=n; i++){
        for(int j=1 ; j<=n ;j++){
            cout << j<<" ";
        }
        cout << endl;
    }
    //  Example 2 : Print * in n lines n times
    for( int  i=1 ; i<=n ; i++){
        for( int j=1 ; j<=n ;j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    // Example 3 : Print the  A B C D pattern in  4 lines

    for(int i=0 ; i<n ; i++){
        char ch = 'a';
        for(int j=0 ; j<n ; j++){
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }
    // Example 4 : Print a pattern  1 2 3 next line 4 5 6  next line  7 8 9 
    int num = 1;
    for( int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << num <<" ";
            num++;
        }
        cout << endl;
    }
    
    // Example 4 : Print a pattern  A B C next line D E F   next line G H I
    char cha='A';
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << cha << " "; 
            cha++;
        }
        cout << endl;
    }
    cout <<"Character last value :" << cha<<endl; 

    //  Example 5 : Triangle pattern  for * 
    for( int i=0 ;  i<n ; i++){
        for(int j=0 ; j<=i; j++){
            cout << "*" ;

        }
        cout << endl;
    }
    //  Example 6 : Triangle pattern  for  1 next line 2 2 next line 3 3 3 so on
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<=i; j++){
            cout << i+1<<" ";

        }
        cout << endl;

    }
    //  Example 7 : Triangle pattern  for  A  next line B B next line C C C so on
    char charac='A';
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout << charac << " ";

        }
        cout << endl;
        charac++;
    }

    // Example 8 :  Triangle Patterns row 1-> 1,row2 -> 1 2 , row3 ->1 2 3
    
    for(int i =0 ; i< n ; i++){
        int numb=1;
        for(int j=0 ; j<=i ; j++){
            cout << numb <<" ";
            numb++;
        }
        cout<<endl; 
    }
     // Example 9 : Reverse Triangle Patterns row 1-> 1,row2 -> 2 1 , row3 -> 3 2 1
     for(int i=0 ; i<n ; i++){
        for(int j=i+1; j>0; j--){
            cout <<j << " ";
        }
        cout << endl;

     }
     
    // Example 10 : Reverse Triangle Pattern (row 1->A , row 2 -> B A ,row 3-> C B A)
    for (int i=0 ; i<n ; i++){
        char charactr ='A';
        for(int j=0; j<i+1 ; j++){
            cout << char(charactr+i) <<" ";
            charactr--;
        }
        cout << endl;
    }
    //   ==============(Floyed's triangle pattern)============ 
    // Example 11 : pattern  row 1-> 1 ,row 2-> 2 3, row 3-> 4 5 6 ,row 3-> 7 8 9 10 in floyd's pattern 
    int numbr=1;
    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++)
        {
            cout << numbr<< " ";
            numbr++;
        }
        cout << endl;
    }

    // Example 12 :  Print character version of above example( Example 10 )
    char ch = 'A';
    for( int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout << ch << " ";
            ch++;


        }
        cout << endl;
    }

    

    
    
 
    return 0;

}