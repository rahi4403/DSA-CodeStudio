int getLength(Node *head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node *findMiddle(Node *head) {
int l=getLength(head);
int ans=l/2;
Node* temp=head;
int c=0;
while(c<ans){
    temp=temp->next;
    c++;
}
return temp;
}
 
 