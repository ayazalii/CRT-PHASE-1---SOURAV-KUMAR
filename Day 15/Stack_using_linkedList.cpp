#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int val){
    data=val;
    next=NULL;
}
};
class Stack{
private:
Node* top;

public:
Stack(){
    top=NULL;
}
//constructor
bool isEmpty(){
    return top==NULL;
}
//push
void push(int x){
    Node* newNode=new Node(x);
    newNode->next=top;
    top=newNode;
}
//pop
void pop(){
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
        return;
    }
    Node* temp=top;
    cout<<"Popped:"<<temp->data<<endl;
    top=top->next;
    delete temp;
}
//peek(top element)
int peek(){
    if(isEmpty()){
        cout<<"Stack is empty."<<endl;
        return -1;
    }
    return top->data;
}
//display
void display(){
    if(isEmpty()){
        cout<<"Stack is empty."<<endl;
        return;
    }
    Node* temp=top;
    cout<<"Stack: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
};
int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    cout<<"Top element: "<<s.peek()<<endl;
    s.pop();
    s.display();
    return 0;
}