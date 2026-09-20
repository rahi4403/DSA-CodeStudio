#include<stack>
class SpecialStack {
    stack<int> s;
    int mini;
    public:
    void push(int data) {
if(s.empty()){
    s.push(data);
    mini=data;
}
else{
    if(data<mini){
        s.push(2*data-mini);
        mini=data;
    }
    else{
        s.push(data);
    }
}    
}
    int pop() {
if(s.empty()){
    return -1;
}