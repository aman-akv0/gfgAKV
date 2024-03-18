vector<int> levelOrder(Node* root)
    {
      //Your code here
      queue<Node *>q;
      int level=0;
      vector<int>ans;
      q.push(root);
      while(!q.empty())
      {
          Node * e=q.front();
          q.pop();
          ans.push_back(e->data);
          if(e->left)
          {
              q.push(e->left);
          }
          if(e->right)
          {
              q.push(e->right);
          }
      }
      return ans;
    }
