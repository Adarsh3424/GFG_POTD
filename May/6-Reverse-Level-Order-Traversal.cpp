vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> result;
    queue<Node*> q;
    q.push(root);
    result.push_back(root->data); // to insert root at begining
    while(!q.empty()){
        Node* temp=q.front();
        q.pop(); // it pops from the beginning of queue
        if(temp->right){
            result.push_back(temp->right->data);
            q.push(temp->right);
        }
        if(temp->left){
            result.push_back(temp->left->data);
            q.push(temp->left);
        }
    }
    reverse(result.begin(),result.end());
    return result;     //TC: O(n) SC: O(n)
}
