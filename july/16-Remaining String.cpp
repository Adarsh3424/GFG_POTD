class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int occurs = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == ch){
                occurs++;
            }
            
            if(occurs == count){
                return s.substr(i+1);
            }
        }
        return "";
    }
};
