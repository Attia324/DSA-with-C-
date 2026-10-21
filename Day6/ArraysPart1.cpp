#include <iostream>
using namespace std;

// Function  which multiply all value of array with 2
void ChangeArr(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        arr[i]=arr[i]*2;
    }
}

//  WAF  for Linear Search in an array 
int LinearSearch(int arr[],int size,int target ){
    for(int i=0 ; i<size ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
// WAF  to swap an element of an array in original array (hint : Swap function)
void ReverseArr(int arr[],int size){
    int start = 0 , end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
// WAF to calculate sum  and product  of all numbers of a array
int SumPro(int arr[],int size){
    int sum = 0, product=1;
    for(int i=0 ;i<size ; i++){
        sum +=arr[i];
        product*=arr[i];

    }
    cout << "Sum =" << sum <<endl;
    cout << "Product =" << product <<endl;

}
// WAF to swap min and max number of an array
void SwapMinMax(int arr[],int size ){ 
    int smallest =arr[0];
    int largest=arr[0];
    int small_index = 0,large_index =0;
    for(int i=0 ; i<size ; i++){
        if(smallest>arr[i]){
            smallest=arr[i];
            small_index=i;

        }
        if(largest < arr[i]){
            largest=arr[i];
            large_index=i;
        }
    }
    swap(arr[small_index] ,arr[large_index]);
}
// WAF to print all unique values in an array 
void UniqueVal(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        int checkval=arr[i];
        int unique=0;
        for(int j=0 ; j<size ;j++){
            if(arr[i]==arr[j]){
                unique+=1;
            }
        }
        if(unique==1){
            cout << arr[i]<<" ";
        }
    }
    cout <<endl;
}
// WAF to print INTERSECTION     of  two array

void Intersection(int arr1[],int size1, int arr2[],int size2){
    for (int i=0 ; i<size1 ; i++){
        for(int j=0 ; j<size2 ; j++){
            if(arr1[i]==arr2[j]){
                cout<< arr1[i] <<" ";
            }
        }
    }
    cout <<endl;
}
int main(){
    // =======(Syntax to declare and initialized an array)======
    int weight[5]; //declaration of array
    double price[] = {100.22,98.56,45.98};  // if we know the fixed size of an array

    // =======(Calculate size of an array)============
    int sz =sizeof(weight)/sizeof(int); // to calculate size of array eg. 5

    // Example 1 : to input and output an array
    int size=5;
    int marks[size];
    // How to get input in array using  loop 
    for(int i=0 ; i<size ; i++){
        cout <<"Enter "<<i+1<<" element = ";
        cin>> marks[i];
    }
    // How to get  output mean print element of array using loop
    for(int i=0 ; i<size ; i++){
        cout << marks[i] << "\t";
    }
    cout<<endl;

    // Example 2: Find Smallest number in array

    int smallindex=0;
    int smallestNum=marks[0];
    for(int i=0 ; i<size ; i++){
        if(smallestNum > marks[i]){
            smallestNum=marks[i];
            smallindex=i;
        }
    }
    cout <<"smallest number =" << smallestNum <<" at :"<<smallindex<<endl;
    // Example 3:Find Largest number in array
    int largeindex=0;
    int largestNum = marks[0]; //can alse intitialize with smallest=INT_MIN
    for(int i=0 ; i<size ; i++){
        if(largestNum<marks[i]){
            largestNum=marks[i];
            largeindex=i;

        }
    }
    cout << "Largest Number = " << largestNum <<" at :"<<largeindex<< endl;

    // Example 4:Find smallest and largest number in array using min() and max()
    int smallest =INT32_MAX;
    int largest=INT32_MIN;
    for(int i=0 ; i<size ; i++){
        smallest=min(marks[i],smallest);
        largest=max(marks[i],largest);
    }
    cout << "Smallest = " <<smallest << endl;
    cout << "Largest = " <<largest << endl;


    // Change elements of an array 
    int arr_sz=3;
    int arr1[arr_sz]={1,2,3};
    ChangeArr(arr1,arr_sz);
    for(int i=0 ; i<arr_sz ; i++){
        cout << arr1[i] <<"  ";
    }
    cout <<endl;

    //  ========(Linear Search Algorithim)===========
int arr[]={4,2,7,8,1,2,5};
int arr_size=sizeof(arr)/sizeof(arr[0]);
int target = 8;
int flag=0;
for(int i=0 ; i<arr_size ; i++){
    if(arr[i]==target){
        flag=1;
        cout << "Your value is at index : "<< i<<endl;
        break;
    }
}
if(flag==0){
    cout << "Value did not found :" << -1 <<endl;
}
// Calling linear search algorithim function 
cout <<"Index = "<<LinearSearch(arr,arr_size,target) << endl;

int arr2[] = {4,2,7,8,1,5};
int sizearr = sizeof(arr2)/sizeof(arr2[0]);
ReverseArr(arr2 ,sizearr);
cout <<"After reversing an array \n";
for(int i=0 ; i<sizearr ; i++){
    cout << arr2[i] << "  " ;
}
cout <<endl;

SumPro(arr2,sizearr);
int batch[4]={3,4,1,0};
SwapMinMax(batch , 4 );
for(int i=0 ; i<4 ;  i++){
    cout << batch[i] <<"  " ;
}
cout <<endl;

int length[6]={4,5,2,5,8,4};
UniqueVal(length,6);

int Arr1[]={2,3,5,8,5};
int Arr2[]={4,3,5,6};
Intersection(Arr1,5,Arr2,4);
}