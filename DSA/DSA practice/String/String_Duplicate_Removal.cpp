
// https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1


// class Solution {
//   public:
//     string removeDuplicates(string &s) {
//         // code here
//         vector<bool> seen(256,false);
        
//         string ans = "";
        
//         for(char i:s){
//             if(!seen[i]){
//                 ans += i;
//                 seen[i] = true;
//             }
//         }
//         return ans;
        
        
//     }
// };

// // Time:- O(n)
// // Space:-O(1)