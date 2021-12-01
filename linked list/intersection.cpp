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

void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    pos--;
    while(pos){
        temp1 = temp1->next;
        pos--;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
   
    
}

int intersection(node* &head1, node* &head2){
    node* prt1;
    node* prt2;

    int l1 = lengthOfLL(head1);
    int l2 = lengthOfLL(head2);
    int diff = 0;
    diff = l1-l2;
    if(diff%-1==0){
        prt1 = head2;
        prt2 = head1;
    }
    else{
        prt2 = head2;
        prt1 = head1;
    }
    while(diff){
        if(prt1==NULL)
            return -1;
        prt1 = prt1->next;
        diff--;
    }
    while(prt1!=NULL&& prt2!=NULL){
        if(prt1 == prt2){
            return prt1->data;
        }
        prt1 = prt1->next;
        prt2 = prt2->next;
    }
}


int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 7);
    insertAtTail(head2, 8);
    display(head1);
    intersect(head1, head2, 3);
    display(head2);
    cout<<intersection(head1, head2);
    return 0;
}