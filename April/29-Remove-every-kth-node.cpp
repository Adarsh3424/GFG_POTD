class Solution {
    public:
    Node* deleteK(Node *head,int k){
      //Your code here
         if(k == 1) return NULL;
        Node* temp = head;
        int n = 1;
        while(temp && temp->next){
            if( (n+1) % k == 0){
                temp->next = temp->next->next;
                temp = temp->next;
                n += 2;
            }
            else{
                temp = temp->next;
                n++;
            }
        }
        return head;
    }
};
