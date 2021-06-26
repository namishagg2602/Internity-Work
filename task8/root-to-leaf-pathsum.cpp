// Check if any root to leaf path in a tree gives sum=S.

void checksum(Node* root,bool &flag,int sum,int S)
    {
      if(!root)
      return;
      
      if(!root->left && !root->right)
      {
          if(sum+root->data==S)
          flag=flag || true;
          
      }
      else
      {
          checksum(root->left,flag,sum+root->data,S);
          checksum(root->right,flag,sum+root->data,S);
      }
      
      return;
    }
    
    bool hasPathSum(Node *root, int S) {
    
    if(!root)
    return (S>0?false:true);
    
    bool flag;
    checksum(root,flag,0,S);
    return flag;
}