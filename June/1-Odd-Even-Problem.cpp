class Solution {
  public:
    string oddEven(string s) {
        // code here
        vector <int> hash(26);
        for(auto i:s) hash[i-'a']++;
      
        int c = 0;
        for(int i=0;i<26;i++) {
            if(hash[i]>0) {
                int k = i+1;
                int m = hash[i];
                if(k%2 == m%2) c++;
            }
        }
        if(c&1) return "ODD";
        return "EVEN";
    }
};
