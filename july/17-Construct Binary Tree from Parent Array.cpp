class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        int n=parent.size();
        Node *root;
        vector<Node*> nodes(n);
        for(int i=0;i<n;i++){
            //if current element node is not created
            if(!nodes[i])
                nodes[i]=new Node(i);
            //if current element is the root
            if(parent[i]==-1){
                root=nodes[i];
                continue;
            }
            //if parent element node is not created
            if(!nodes[parent[i]])
                nodes[parent[i]]=new Node(parent[i]);
            
            Node *par=nodes[parent[i]];
            if(par->left) par->right=nodes[i];
            else par->left=nodes[i];
        }
        return root;
    }
};
