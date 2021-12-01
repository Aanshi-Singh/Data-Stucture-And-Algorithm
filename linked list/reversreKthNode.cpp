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

node* reverseKth(node* &head, int k){
    node* prevptr = NULL;
    node* curntptr = head;
    node* nextptr;

    int count = 0;
while(curntptr!=NULL && count<k){
    nextptr = curntptr->next;
    curntptr->next = prevptr;
    prevptr = curntptr;
    curntptr = nextptr;
    count++;
}

if(nextptr!=NULL){
   head->next = reverseKth(nextptr, k);
}
return prevptr;
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

    int k = 2;
    node* newhead = reverseKth(head, 2);
    display(newhead);
    return 0;
}