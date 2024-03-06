class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int>ans;
             int m=pattern.length();
             int n=text.length();
            for(int i=0;i<=n-m+1;i++){ 
            //cout<<text.substr(i,m);
                string s1=text.substr(i,m);
                if(s1==pattern){   //cout<<s1;
                    ans.push_back(i+1);
        
                }
           
            }
                return ans;
        }
     
};
