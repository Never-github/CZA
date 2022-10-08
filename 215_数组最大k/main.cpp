#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int c;
    int find_one_pos(vector<int>& nums, int left, int right){
        int temp = nums[left];
        int i = left;
        int j = right;
        while(i<j){
            while(temp<=nums[j] && i<j){
                j--;
            }
            nums[i] = nums[j];
            while(temp>=nums[i] && i<j){
                i++;
            }
            nums[j] = nums[i];
        }
        nums[i] = temp;
        return i;
    }
    int quick_sort_recursive(vector<int>& nums,int left, int right, int k){

        int pos = find_one_pos(nums,left,right);
        if(pos>k) return quick_sort_recursive(nums,left,pos-1,k);
        if(pos<k) return quick_sort_recursive(nums,pos+1,right,k);
        if(pos==k) return pos;

    }
    void findKthLargest(vector<int>& nums, int k) {

        int res = quick_sort_recursive(nums,0,nums.size()-1, nums.size()-k);
        cout << nums[res] << endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution sol = Solution();
    vector<int> nums = {3,2,1,5,6,4};
    sol.findKthLargest(nums,2);
    for(int x: nums){
        cout << x;
    }
    return 0;
}
