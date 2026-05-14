#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;


    Node(int val){
        data=val;
        next=NULL;
    }
};
    void printNodes(Node* head){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp -> data <<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    //reverse fn
    Node* reverseList(Node* head){
        Node* prev=NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }    
        return prev;
    }
    
int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);


    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    cout<<"Original: ";
    printNodes(head);

    head = reverseList(head);

    cout<<"Reversed: ";
    printNodes(head);

    return 0;
}