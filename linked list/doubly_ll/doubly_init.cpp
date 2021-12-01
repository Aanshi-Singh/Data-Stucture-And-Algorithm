#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"null";
}

void deletion(node* &head, int delNode){
node* temp = head;
int count = 1;
    while(temp!=NULL && count!=delNode){
        temp = temp->next;
        count++;
        }
            temp->prev->next == temp->next;
            temp->next->prev == temp->prev; 
            delete temp;
            return;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    cout<<endl;
    deletion(head, 2);
    display(head);

    return 0;
}