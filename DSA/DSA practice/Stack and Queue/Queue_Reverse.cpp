// https://www.geeksforgeeks.org/problems/queue-reversal/1

/*
// class Solution {
//   public:
//     void reverseQueue(queue<int> &q) {
//         // code here
//         stack<int>st;
        
//         while(!q.empty()){
//             st.push(q.front());
//             q.pop();
//         }
        
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }
//     }
// };


// Recurssive method:-
class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        if(q.empty()) return;
        
        int front  = q.front();
        q.pop();
        
        reverseQueue(q);
        
        q.push(front);
    }    
};
*/