class Solution {
  private :
    bool checkpalindrome(string str,int i,int j){
        //base case
        if(i>j){
            return true;
        }
        
        if(str[i]!=str[j]){
            return false;
        }
        else{
            checkpalindrome(str,i+1,j-1);
        }
    }
    
  public:
    bool compute(Node* head) {
        // Your code goes here
        string str ="";
        while(head!=NULL){
            str+=head->data;
            head = head->next;
        }
        int n=str.size();
        
        int i =0,j=n-1;
        while(i<=j){
            if(str[i++]!=str[j--])return 0;
        }
        return 1;
        
        bool ispalindrome = checkpalindrome(str,0,n);
        return ispalindrome;
    }
};
