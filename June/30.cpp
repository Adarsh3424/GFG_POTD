class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(x==1){
            head->next->prev=NULL;
            return head->next;
        }
        Node* curr=head;
        for(int i=1;i<x;i++){
            curr=curr->next;
        }
        curr->prev->next=curr->next;
        if(curr->next!=NULL) curr->next->prev=curr->prev;
        return head;
    }
};