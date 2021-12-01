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
    cout<<"NULL"<<endl;
}

//merge will will merge the 2 sorted linked list and return: new head
node* merge(node* &head1, node* &head2){
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummynode = new node(-1);
    node* ptr3 = dummynode;

    while(ptr1!= NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

        while(ptr1!=NULL){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }
        while(ptr2!=NULL){
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }

    return dummynode->next;
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[4] = {2,3,5,6};
    int arr2[5] = {1,7,8,9,10};
    for(int i = 0; i<(sizeof(arr1)/sizeof(arr1[0])); i++){
        insertAtTail(head1, arr1[i]);
    }
    for(int i = 0; i<(sizeof(arr2)/sizeof(arr2[0])); i++){
        insertAtTail(head2, arr2[i]);
    }
    display(head1);

    display(head2);
    node* newhead = merge(head1, head2);
    display(newhead);


}

/*OUTPUT

2->3->5->6->NULL
1->7->8->9->10->NULL
1->2->3->5->6->7->8->9->10->NULL
*/