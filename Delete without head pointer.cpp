void deleteNode(Node *del_node)
    {
       // Your code here
       if(del_node==NULL || del_node->next==NULL) return;
       Node* temp=del_node;
       temp->data=temp->next->data;
       Node* deleteNode=temp->next;
       Node* nextNode=NULL;
       if(temp->next!=NULL){
           nextNode=temp->next->next;
       }
       temp->next=nextNode;
       delete deleteNode;
    }
