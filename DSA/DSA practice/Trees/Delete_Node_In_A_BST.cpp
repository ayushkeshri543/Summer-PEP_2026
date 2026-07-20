// VVIP Question
// https://leetcode.com/problems/delete-node-in-a-bst/

/*
class Solution {
public:
    TreeNode* minElements(TreeNode* node){
        while(node->left !=NULL){
            node = node->left;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(key<root->val){
            root->left = deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right = deleteNode(root->right,key);
        }
        else{
            if(root->left==NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            TreeNode* temp = minElements(root->right);
            // copy this min element value in the node which we are suppose to delete
            root->val = temp->val;
            // delete the successior from BST(as we have already copied the value)
            root->right = deleteNode(root->right,temp->val);

        }
        return root;
    }
};
*/