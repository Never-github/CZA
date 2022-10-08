#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector <int>> arr;
        if(nums.size()==0){
            return arr;
        }
        sort(nums.begin(), nums.end());
        int length = nums.size();
        for(int i=0;i<length-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int k = length-1;
                int target = -nums[i];
                for(int j=i+1;j<length-1;j++){
                    if(nums[j]!=nums[j-1] || j == i+1){
                        while(k>=j+1 && nums[j]+nums[k]>target){
                            k--;
                        }
                        if(k==j){
                            break;
                        }
                        if(nums[j]+nums[k]==target){
                            vector <int> a = {nums[i],nums[j],nums[k]};
                            arr.emplace_back(a);
                        }
                    }
                }
            }
        }

        return arr;
    }
};

int main() {
    unordered_set <int> s;

    return 0;
}
