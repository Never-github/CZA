#include <iostream>
#include "vector"
#include <queue>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector <vector <int>> vec;
        if(!root){
            return vec;
        }
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector <int> row;
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode *e = q.front();
                row.emplace_back(e->val);
                q.pop();

                if(e->left){
                    q.push(e->left);
                }
                if(e->right){
                    q.push(e->right);
                }
            }
            vec.push_back(row);
            for(int j : row){
                cout << j << " ";
            }
            cout << endl;
        }
        return vec;
    }
};
int main() {
    TreeNode n15(15);
    TreeNode n7(7);
    TreeNode n20(20,&n15,&n7);
    TreeNode n9(9);
    TreeNode n3(3,&n9,&n20);
    Solution s;
    s.levelOrder(&n3);
    return 0;
}
