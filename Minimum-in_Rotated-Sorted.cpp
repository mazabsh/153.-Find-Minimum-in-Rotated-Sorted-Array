#include<iostream> 
#include<vector> 
using namespace std; 

class Solution{
public: 
      int minSearch(vector<int>& nums){
        int left =0; int right = nums.size()-1; 
        while(left<right){
          int mid = left + (right-left)/2; 
          if(nums[right]<nums[mid]) left = mid+1; 
          else right = mid; 
        }
        return nums[left]; 
      }
};
int main(){
  vector<int> nums = {3,4,5,1,2}; 
  Solution sol; 
  cout <<boolalpha<< sol.minSearch(nums) << endl; 
  return 0; 
}
