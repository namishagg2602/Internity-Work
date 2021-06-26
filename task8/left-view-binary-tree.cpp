// left view of a binary tree



void leveltrav(Node* root,int l,vector<int> &res)
{
    if(!root)
    return;
    
    if(res.size()<=l)
    res.push_back(root->data);
    
    leveltrav(root->left,l+1,res);
    leveltrav(root->right,l+1,res);
}

vector<int> leftView(Node *root)
{
   vector<int> res;
   leveltrav(root,0,res);
   
   return res;
}