#include <iostream>
#include <vector>
#include <map>

using namespace std;


//class Solution {
//public int[] twoSum(int[] nums, int target) {
//        Map<int, int> hashtable = new HashMap<int, int>();
//        for (int i = 0; i < nums.length; ++i) {
//            if (hashtable.containsKey(target - nums[i])) {
//                return new int[]{hashtable.get(target - nums[i]), i};
//            }
//            hashtable.put(nums[i], i);
//        }
//        return new int[0];
//    }
//}


//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector <int> out;
//        int f;
//        int s;
//        if(nums.size()==0){
//            return out;
//        }
//        vector <int> ori_arr = nums;
//        sort(nums.begin(),nums.end());
//        int i = 0;
//        int j = nums.size() - 1;
//        nums.push_back(100);
//        while(i<=j){
//            int temp = nums[i] + nums[j];
//            if(temp>target){
//                j--;
//            }else if(temp<target){
//                i++;
//            }else if(temp==target){
//                f = nums[i];
//                s = nums[j];
//                cout << f << s << endl;
//                break;
//            }
//
//        }
//        for(int k=0;k<ori_arr.size();k++){
//            if(ori_arr[k] == f){
//                out.emplace_back(k);
//            }
//            if(ori_arr[k] == s){
//                out.emplace_back(k);
//            }
//        }
//        return out;
//    }
//};
int main() {
    Solution s;
    vector <int> a = {2,7,11,15};
    s.twoSum(a,9);
    cout << "Hello, World!" << endl;
    return 0;
}
