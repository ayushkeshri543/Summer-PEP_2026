// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

/*
class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        // 11 12 13 14 15 16 17 18 19 20
        stack<int>st;
        int halfSize = q.size()/2;
        
        // push the first half elements in stack
        // queue : 16 17 18 19 20 || stack:15 14 13 12 11
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
        }
        // enque back the stack elements
        // queue : 16 17 18 19 20 15 14 13 12 11
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        // Dequeue the first half elements of queue and enque then back
        // queue: 15 14 13 12 11 16 17 18 19 20
        for(int i=0;i<halfSize;i++){
            q.push(q.front());
            q.pop();
        }
        // again push the first half elements in stack
        // deque: 16 17 18 19 20 || stack: 11 12 13 14 15
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
        }
        // interleave the elements of queue and stack
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
        
        
    }
};
*/