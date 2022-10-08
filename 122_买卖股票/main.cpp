#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector <int> profit_days;
        // for(int i=0;i<prices.size()-1;i++){
        //     profit_days.emplace_back(max(prices[i+1]-prices[i],0));
        // }
        // int sum=0;
        // for(int x: profit_days)
        //     sum += x;
        // return sum;
        vector <vector <int>> dp;
        vector <int> states(2);
        states[0] = (0);
        states[1] = (-prices[0]);
        dp.emplace_back(states);
        for(int i=1;i<prices.size();i++){
            states.clear();
            states.resize(2);
            states[0] = (max(dp[i-1][0],dp[i-1][1]+prices[i]));
            states[1] = (max(dp[i-1][1],dp[i-1][0]-prices[i]));
            dp.emplace_back(states);
        }
        cout<<max(states[0],states[1]);
        return max(states[0],states[1]);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution sol = Solution();
    vector<int> arr = {7,1,5,3,6,4};
    sol.maxProfit(arr);
    return 0;
}
