class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_set<int> uset;
        int count = 0;
        struct Node *ptr = head2;
        while(ptr!=NULL){
            uset.insert(ptr->data);
            ptr = ptr->next;
        }
        ptr = head1;
        while(ptr!=NULL){
            if(uset.find(x-ptr->data)!=uset.end()) count++;
            ptr = ptr->next;
        }
        return count;
    }
};
