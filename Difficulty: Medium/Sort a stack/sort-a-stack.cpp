class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int> v;
        while(st.size() != 0) {
            v.push_back(st.top());
            st.pop();
        }
        
        sort(v.begin(), v.end());
        
        for(int i=0;i<v.size();i++) {
            st.push(v[i]);
        }
    }
};
