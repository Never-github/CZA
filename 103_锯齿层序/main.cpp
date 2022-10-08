#include <iostream>
#include <queue>
#include <stack>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector <int>> arr;
        if(!root){
            return arr;
        }
        queue <TreeNode*> q;
        q.push(root);
        int layer = 1;
        while(!q.empty()){
            vector <int> a;
            int len = q.size();
            stack <TreeNode*> new_q;
            for(int i=0;i<len;i++){
                TreeNode * temp = q.front();
                q.pop();
                if(layer%2==0){
                    new_q.push(temp);
                }else{
                    a.emplace_back(temp->val);
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            if(layer%2==0){
                int new_l = new_q.size();
                for(int i=0;i<new_l;i++){
                    TreeNode * temp = new_q.top();
                    new_q.pop();
                    a.emplace_back(temp->val);
                }
            }
            arr.emplace_back(a);
            layer++;
        }
        return arr;
    }
};

int main() {
    TreeNode n15(15);
    TreeNode n7(7);
    TreeNode n20(20,&n15,&n7);
    TreeNode n9(9);
    TreeNode n3(3,&n9,&n20);
    Solution s;
    s.zigzagLevelOrder(&n3);
    return 0;
}