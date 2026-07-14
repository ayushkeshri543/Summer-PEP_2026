// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

/*
class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if(st.empty()){
            st.push(x);
            return st;
        }
        
        int topVal = st.top();
        st.pop();
        
        st = insertAtBottom(st,x);
        st.push(topVal);
        return st;
    }
};
*/