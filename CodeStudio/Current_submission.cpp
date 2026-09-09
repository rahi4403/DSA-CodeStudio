    // Base cases must come first
    if(first == NULL)
        return second;
 
    if(second == NULL)
        return first;
 
    // Make sure first starts with the smaller value
    if(first->data > second->data)
    {
        return sortTwoLists(second, first);
    }
 
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2->next;
if(next1 == NULL)
    while(next1 != NULL && curr2 != NULL)
    {
{
    curr1->next = curr2;
    return first;
}