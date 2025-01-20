class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
           if(head1==nullptr){
            return 0;
        }
        vector<int> result;
        Node* current=head1;
        while(current!=nullptr){
            result.push_back(current->data);
            current=current->next;
        }
        if(head1==nullptr){
            return 0;
        }
        Node* current1=head2;
        while(current1!=nullptr){
            result.push_back(current1->data);
            current1=current1->next;
        }
        sort(result.begin(),result.end());
        Node* sortedHead=new Node(result[0]);
        Node* mover=sortedHead;
        for(int i=1;i<result.size();i++){
            Node* temp=new Node(result[i]);
            mover->next=temp;
            mover=mover->next;
        }
        mover->next=nullptr;
        return sortedHead;
    }
};
