#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Return  Pair in sorted array with target sum
// =============(Brute force Approach)===============
vector<int> PairSum(vector<int> nums, int target){
    int n = nums.size();
    vector<int> ans;
    for(int i=0 ; i<n; i++){
        for(int j=i+1 ; j<n ; j++){
            if((nums[i] + nums[j])==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
}
// Return  Pair in sorted array with target sum
// =============(Best Approach(Two-Pointer Approach))===============
vector <int> PairSumBA(vector<int> nums ,int target){
    vector <int> ans ;
    int size= nums.size();
    int i=0 , j=size-1;
    while(i<j){
        if((nums[i]+nums[j])<target){
            i++;
        }
        else if((nums[i]+nums[j])>target){
            j--;

        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

}

// Majority element :Given an array of size n, return the majority element when MJ>n/2
// ==========(Brute force approach)=========
int MajortyElements(vector<int>&nums){
    int n = nums.size();
    for(int val : nums){
        int freq=0;
        for(int ele : nums){
            freq++;
        }
        if(freq >n/2){
            return val;
        }
    }

}
// Majority element :Given an array of size n, return the majority element when MJ>n/2
// ==========(Optimized approach)=========
int  MajorityElementsOA(vector<int> nums){
    // Sort vector
    sort(nums.begin(),nums.end());
    // count Frequency
    int n = nums.size();
    cout << "size of vector " <<n<<endl;
    int freq=1, ans=nums[0];
    
    for(int i=1 ; i<n ; i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            ans=nums[i];
            freq=1;
        }
        if(freq>n/2){
            return ans;
        }
    }
    return -1;
}
// Majority element :Given an array of size n, return the majority element when MJ>n/2
// ==========(Moree's algorithim Approach)=========
int MajorityEle(vector<int> nums){
    int freq=0 , ans=0 ;
    for(int i=0 ; i<nums.size() ; i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    return ans;
    }

}

int main(){
    vector <int> nums = {2,3,4,6,3,11,15};
    int target =19;
    vector <int> ans=PairSum(nums ,target);
    cout <<ans[0] <<" ,  "<< ans[1]<<endl;
    vector <int> ans1=PairSumBA(nums ,target);
    cout <<ans1[0] <<" ,  "<< ans1[1] <<endl;
    vector <int> vec={2,2,3,2,4,4,2,1,2,2,1,1};
    cout <<"Majority element = "<<MajorityEle(vec)<<endl;//Brute force approach

}
