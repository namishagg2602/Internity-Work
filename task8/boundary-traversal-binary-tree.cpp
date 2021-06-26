// boundary traversal of a binary tree


void lefttrav(Node* t,vector<int> &res)
    {
        if(!t)
        return;
        
        res.push_back(t->data);
        if(t->left)
        lefttrav(t->left,res);
        else
        lefttrav(t->right,res);
        
        return;
    }
    
    void righttrav(Node* t,vector<int> &res)
    {
        if(!t)
        return;
        
        
        if(t->right)
        righttrav(t->right,res);
        else
        righttrav(t->left,res);
        
        res.push_back(t->data);
        return;
    }
    
    void leaftrav(Node* t,vector<int> &res)
    {
        if(!t)
        return;
        
        leaftrav(t->left,res);
        if(!t->left && !t->right)
        res.push_back(t->data);
        leaftrav(t->right,res);
        
        return;
    }
    
    vector <int> printBoundary(Node *root)
    {
        vector<int> res;
        if(!root)
        return res;
        
        res.push_back(root->data);
       
        lefttrav(root->left,res);
        if(root->left)
        res.pop_back();
        
        leaftrav(root,res);
        if(root->right)
        res.pop_back();
        
        righttrav(root->right,res);
        
        return res;
    }