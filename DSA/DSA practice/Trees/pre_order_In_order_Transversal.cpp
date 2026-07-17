
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Preorder Traversal
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder Traversal
void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int countNodes(Node* root){
    if(root == NULL) return 0;

    int lc = countNodes(root->left);
    int rc = countNodes(root->right);
    return lc+rc+1;
}

int countLeaf(Node* root){
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 1;
    int ll = countLeaf(root->left);
    int rl = countLeaf(root->right);
    return ll+rl;
}
int sumOfNodes(Node* root){
    if(root == NULL) return 0;

    int ls = sumOfNodes(root->left);
    int rs = sumOfNodes(root->right);

    return root->data + ls + rs;


}

int main() {
    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);

    root->right->right = new Node(60);

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);



    return 0;

          
}
