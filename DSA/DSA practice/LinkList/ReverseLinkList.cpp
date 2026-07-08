// https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

/*
/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

/*class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* currNode = head;
        Node* prevNode = nullptr;
        Node* nextNode = NULL;
        
        while(currNode!=NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
            
        }
        return prevNode;
    }
};


*/