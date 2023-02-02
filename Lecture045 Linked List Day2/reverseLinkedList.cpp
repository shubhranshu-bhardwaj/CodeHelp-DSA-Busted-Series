//iterative function to reverse linked list
Node* reverseLL(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* cur=head;
    Node* forward=NULL;
    while(cur!=NULL){
        forward=cur->next;
        cur->next=prev;
        prev=cur;
        cur=prev;
    }
    return prev;
}
