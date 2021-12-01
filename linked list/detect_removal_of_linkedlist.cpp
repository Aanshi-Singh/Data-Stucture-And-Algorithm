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
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"null";
}

void makecycle(node* &head, int pos){
    node* temp = head;
    int count = 0;
    node* startnode;
    while(temp->next!=NULL){
        if(count == pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }temp->next = startnode;

}

void removecycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!= slow){
        fast= fast->next->next;
        slow = slow->next;
    }
    fast = head;

    while(fast->next!=slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;

}


bool detectcycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;


        if(fast == slow){
            return true;
        }
    }
    return false;

}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    makecycle(head, 2);
    cout<<endl<<detectcycle(head);
    removecycle(head);
    cout<<endl<<detectcycle(head);

    return 0;
}