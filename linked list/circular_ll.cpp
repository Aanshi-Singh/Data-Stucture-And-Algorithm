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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insert(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp!=head);
    cout<<"NULL"<<endl;
}



int main(){
    node* head = NULL;
    int arr[4] = {2,3,5,6};
    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        insert(head, arr[i]);
    }
    // insertAtHead(head, 4);
    display(head);


}

/*OUTPUT

2->3->5->6->NULL
1->7->8->9->10->NULL
1->2->3->5->6->7->8->9->10->NULL
*/