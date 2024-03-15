void sort(Node **head)
    { vector<int>data;
      vector<int>chi;
      vector<int>final;
      int size=0;
      int i=0;
      Node* c=*head;
         while(c!=0){
             if(i%2==0) data.push_back(c->data);
         
             else{
                 chi.push_back(c->data);
             }
             i++;
             c=c->next;
         }
         for(int i=0,j=chi.size()-1;i<j;i++,j--){
             int temp=chi[i];
             chi[i]=chi[j];
             chi[j]=temp;
         }
    for(int it : data){
             final.push_back(it);
         }
         for(int i=0;i<chi.size();i++){
             final.push_back(chi[i]);
         }
         size=data.size()+chi.size();
         c=*head;
       std::sort(final.begin(), final.end());
        for(int i=0;i<size;i++){
            c->data=final[i];
            c=c->next;
        }
