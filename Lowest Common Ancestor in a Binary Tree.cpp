 Node* lca(Node* root ,int a ,int b )
    {
       //Your code here 
       if(root==NULL) return NULL;
        if(root->data==a or root->data==b){
            return root;
        }
        Node *l=lca(root->left,a,b);
        Node *r=lca(root->right,a,b);
        if(l and r) return root;
        if(l) return l;
        return r;
    }
