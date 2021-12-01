#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
    };

void insertAtTail(node* &head, int val){

    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!= NULL){
        temp= temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }cout<<"null"<<endl;
}

int lengthOfLL(node* head){
    node* temp = head;
    int length = 0;
    while(temp!=NULL){

        length++;
        temp = temp->next;}
        return length;
}
node* kappend(node* &head, int k){
    node* temp = head;
    node* newtail;
    node* newhead;
    int count = 1;
    int length = lengthOfLL(head);
    while(temp->next!=NULL){

        if(count == length - k){
            newtail = temp;

        }
        if(count == length-k+1){
            newhead = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = head;
    newtail->next = NULL;

    return newhead;



}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    node* newhead = kappend(head, 3);
    display(newhead);
    return 0;
}