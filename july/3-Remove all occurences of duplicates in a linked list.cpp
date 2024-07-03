class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        if(!head || !head->next) return head;
        unordered_map<int,int> mp;
        
        struct Node* dummy=head;
        while(dummy!=NULL){
            mp[dummy->data]++;
            dummy=dummy->next;
        }
        
        struct Node* newhead=new Node(-1);
        struct Node* temp=newhead;
        while(head!=NULL){
            if(mp[head->data]==1) {
                // struct Node* temp=new Node(it.first);
                newhead->next=head;
                newhead=head;
            }
            head=head->next;
        }
        newhead->next=NULL;
        return temp->next;
    }
};
