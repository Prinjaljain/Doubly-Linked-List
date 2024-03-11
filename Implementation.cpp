#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*prev;
    Node*next;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
void printList(Node*head){
    Node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;

}
int main(){
    Node*head=new Node(10);
    Node*first=new Node(20);
    Node*second=new Node(30);
    head->next=first;
    first->prev=head;
    first->next=second;
    second->prev=first;
    printList(head);
    return 0;
}