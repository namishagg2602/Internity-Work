// Binary tree to Doubly linked list

void inor(Node* t,vector<Node*> &res)
    {
        if(!t)
        return;
        
        inor(t->left,res);
        res.push_back(t);
        inor(t->right,res);
        
        return;
    }
    
    Node * bToDLL(Node *root)
    {
        if(!root)
        return root;
        
        vector<Node*> res;
        inor(root,res);
        
        Node* h;
        h=res[0];
        res[0]->left=nullptr;
        
        for(int i=1;i<res.size();i++)
        {
            res[i]->left=res[i-1];
            res[i-1]->right=res[i];
        }
        
        res[res.size()-1]->right=nullptr;
        return h;
    }