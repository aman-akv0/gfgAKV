Node *sortedInsert(Node* head, int data)
    {
       Node*nnode=new Node(data);
       nnode->next=nnode;
       if(!head) return nnode;
       Node *cur=head,*prev=head;
        //setting the previous pointer to last node as last node points head 
       do{
           prev=cur;
           cur=prev->next;
       }while(cur!=head);
       
       int flag=0;
       //if cur approaches head for second time that means list traversed once and data is greater than all the elements  therefore loop will be exited
       while(cur->data<=data  and  flag<2){
           prev=cur;
           cur=cur->next;
           if(cur==head) flag++;
       }
       
          
        nnode->next=cur;
        prev->next=nnode;
        
        //if data was inserted in the begining then head needs to be updated
        if(head->data > data)
            head=nnode;
            
       return head;
    }
