class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>reverse;
        while(!st.empty())
        {
            reverse.push(st.top());
            st.pop();
        }
        reverse.push(x);
        while(!reverse.empty())
        {
            st.push(reverse.top());
            reverse.pop();
        }
        
        return st;
    }
};
