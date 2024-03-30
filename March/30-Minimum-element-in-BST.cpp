class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        Node* temp = root;
            while(temp && temp->left){
                temp=temp->left;
            }
            return temp->data;
    }
};
