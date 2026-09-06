bool isPalindrome(Node *head)
{
    if(head==NULL || head-> next==NULL){
    return head;
    }
   Node* slow=head;
   Node* fast=head;
   while(fast->next!=NULL && fast->next->next!=NULL){
       slow=slow->next;
       fast=fast->next->next;
   }
   Node* prev=NULL;
   Node* curr=slow->next;
   while(curr!=NULL){
       Node* temp=curr->next;
       curr->next=prev;
       prev=curr;
       curr=temp;
   }
   Node* first=head;
   Node* second=prev;
   while(second!=NULL){
       if(first->data!=second->data){