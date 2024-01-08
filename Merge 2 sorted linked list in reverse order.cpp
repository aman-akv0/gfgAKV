class Solution
{
    public:
    struct Node* twoLists(Node* first, Node* second){
        if(first->next==NULL){
            first->next = second;
            return first;
        }
        Node* curr1=first;
        Node* next1=first->next;
        Node* curr2=second;
        Node* next2=second->next;
        while(next1 != NULL && curr2 !=NULL){
            if(curr1->data<=curr2->data && curr2->data<=next1->data ){
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;
                curr1=curr2;
                curr2=next2;
            }else{
                curr1=next1;
                next1=next1->next;
                if(next1==NULL){
                    curr1->next= curr2;
                    return first;
                }
            }
        }return first;
        
    }
    struct Node* reverse (Node* root){
        if(root==NULL || root->next==NULL){
            return root;
        }
        Node *prev=NULL;
        Node *curr=root;
        Node *forward = NULL;
        while(curr != NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }return prev;
    }
    
    struct Node* mergeResult(Node* node1,Node* node2)
    {
        // your code goes here
        if(node1 == NULL){
            return reverse(node2);
        }
        if(node2 == NULL){
            return reverse(node1);
        }
        if(node1->data <= node2->data){
            Node * res = twoLists(node1,node2);
            return reverse(res);
        }else{
            Node * res = twoLists(node2,node1);
            return reverse(res);
        }
    }  
};
