#include <iostream>
#include <vector>
using namespace std;
// WAF to  get Single number from an array when others are double 
int SingleNumber(vector <int>&nums){
    int ans=0;
    for(int val :nums){
        ans= ans ^ val;
    }
    return ans;
}
    // WAF for Linear Search 
    int LinearSearch(vector <int> nums,int searchNum){
        int flag = 0;
        for(int val : nums){
            if(val==searchNum){
                flag=1;
                return true;
            }
        }
        if (flag==0){
            return false;
        }
        
    }

    // WAF to Reverse a  Vector 
    void ReverseVector(vector <int> &nums){
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            swap(nums[start],nums[end]);
            start ++;
            end--;
        }
    }


int main(){
    // =========(Vector Declaration )==========
    vector <int> vec; //size=0,capacity=0
    // vector <int> vec = {3,4,2}; //size=3 and capacity=3
    // vector <int> vec(3,0);
    cout << "size= " << vec.size() << endl;
    cout << "capacity= " <<vec.capacity() << endl;


    // ==========(for each loop)===========
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;


    //  ==========(Vector Functions)==============
    // push_back(a) add element  at the end of vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout << vec.size()<<endl;
    cout <<vec.capacity() <<endl;
    //  pop_back(a) delete element  at the end of vector
    vec.pop_back();
    vec.pop_back();
    cout << vec.size()<<endl;
    cout <<vec.capacity() <<endl;
    //  front() get element from the  first 
    cout << vec.front() << endl;
    // back() get element from the  last
    cout << vec.back() << endl;
    // at(index) get element at particular  index
    cout << vec.at(1) << endl;
    vector <int> nums={1,5,1,2,4,2,4};

    // Calling SingleNumber  function
    cout <<" Single Number = " <<SingleNumber(nums) <<endl;
    cout << LinearSearch(nums,9)<<endl;
    ReverseVector(nums);
    for(int val : nums){
        cout <<val << " ";
    }
    cout <<endl;



    

    return 0;

}
