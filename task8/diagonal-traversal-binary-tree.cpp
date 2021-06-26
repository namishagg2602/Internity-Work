// Diagonal traversal of a tree


void trav(Node* t,map<int,vector<int> >& m,int d)
{
    if(!t)
    return;
    
    m[d].push_back(t->data);
    trav(t->left,m,d+1);
    trav(t->right,m,d);
    
    return;
}

vector<int> diagonal(Node *root)
{
   vector<int> res;
   map<int,vector<int> > m;
   trav(root,m,0);
   
   for(auto x:m)
   for(int i=0;i<x.second.size();i++)
   res.push_back(x.second[i]);
   
   return res;
}