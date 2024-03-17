int countPairs(struct Node* head1, struct Node* head2, int x) {
        set<int> s;
        while(head1){s.insert(head1->data);head1=head1->next;}
        int cnt=0;
        while(head2){
            int val = head2->data;
            if(s.find(x-val)!=s.end())cnt++;
            head2=head2->next;
        }
        return cnt;
    }
 

