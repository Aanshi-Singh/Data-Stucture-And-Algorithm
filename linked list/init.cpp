// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
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
    void insertAtHead(node* &head, int val){
        node* n = new node(val);
        n->next = head;
        head = n;
    }
    void insertAtTail(node* &head, int val){
        
        node* n = new node(val);
        if(head == NULL){
            head= n;
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
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }cout<<endl;
    }
    bool search(node* head , int key){
        node* temp = head;
        while(temp!=NULL){
            if(temp->data  == key){
                return true;
            } temp =temp->next; 
        }
        return false;
    }

    void deleteHead(node* &head){
        node* todelete  = head;
        head = head-> next;

        delete todelete;
    }

    void deleteNode(node* &head, int delvalue){
        if(head ==NULL){
            return;
        }
        if(head->next==NULL){
            deleteHead(head);
            return;
        }
        node* temp = head;
        while(temp->next->data!= delvalue){
            temp = temp->next;
        }
        node* todelete = temp->next;
        temp->next = temp->next->next;

        delete todelete;
    }
int main(){

    node* head = NULL;
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    // insertAtHead(head, 0);
    // display(head);
    // deleteHead(head);
    deleteNode(head, 6);
    display(head);
    cout<<endl<<search(head, 6);
return 0;
}