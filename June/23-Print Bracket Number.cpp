class Solution {
  public:

    vector<int> bracketNumbers(string str) {
         std::vector<int> v;
        std::stack<int> s;
        int count = 0;
        
        for (char c : str) {
            if (c == '(') {
                ++count;
                s.push(count);
                v.push_back(count);
            } else if (c == ')') {
                v.push_back(s.top());
                s.pop();
            }
        }
        return v;
    }  
};
