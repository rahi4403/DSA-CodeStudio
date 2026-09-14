#include <bits/stdc++.h> 
void Solve(stack<int>& s,int x){
    if(s.empty()){ //check if stack is already empty,insert element directly
        s.push(x);
        return;
    }
    int num=s.top(); //if not empty,empty it one by one from the top,insert element at bottom
    s.pop();
    Solve(s,x);
    s.push(num); //place the elements at top again
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
Solve(myStack,x);
return myStack;
}
 