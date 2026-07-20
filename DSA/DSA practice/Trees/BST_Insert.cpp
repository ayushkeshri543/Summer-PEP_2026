// https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

/*
class Solution {
public:
    Node* insert(Node* root, int key) {
        if (root == NULL)
            return new Node(key);

        if (key < root->data) {
            root->left = insert(root->left, key);
        } else if (key > root->data) {
            root->right = insert(root->right, key);
        }

        
        return root;
    }
};
*/