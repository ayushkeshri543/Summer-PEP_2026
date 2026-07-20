// https://www.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1

/*
class Solution {
public:
    void inorder(Node* root, vector<int>& arr) {
        if (root == NULL)
            return;

        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }

    bool findTarget(Node *root, int target) {
        vector<int> arr;

        inorder(root, arr);

        int i = 0;
        int j = arr.size() - 1;

        while (i < j) {
            int sum = arr[i] + arr[j];

            if (sum == target)
                return true;
            else if (sum < target)
                i++;
            else
                j--;
        }

        return false;
    }
};
*/