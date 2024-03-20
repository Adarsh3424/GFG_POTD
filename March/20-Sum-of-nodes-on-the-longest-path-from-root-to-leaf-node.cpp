class Solution
{
public:
    
     pair<int,int> solve(Node* root,int sum,int level){
        if(!root){
            return {level,sum};
        }
        sum+=root->data;
        pair<int,int> left = solve(root->left,sum,level+1);
        pair<int,int> right = solve(root->right,sum,level+1);
        if(left.first>right.first){
            return left;
        }
        if(left.first<right.first){
            return right;
        }
        return left.second>right.second ? left : right;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int sum = 0;
        int level = 0;
        pair<int,int> ans = solve(root,sum,level+1);
        return ans.second;
    }
};
