// https://leetcode.com/problems/binary-tree-right-side-view/

/*class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>rV;
        if(!root) return rV;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();

            for(int i= 0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                if(i == s-1) rV.push_back(node->val);

            }
        }
        return rV;
        


    }
};*/