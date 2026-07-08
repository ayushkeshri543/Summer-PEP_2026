#include<iostream>
using namespace std;

class Node{
    
    void insertAtPosition(Node* &head, int pos, int val){
        Node* node = new Node(val);
        if(pos==1){
            node->next = head;
            head = node;
            return;
        }

        Node* temp = head;
        for(int i=1;i<pos-1 && temp != NULL;i++){
            temp = temp->next;

            node->next = temp->next;
            temp->next = node; 
        }
    }
}