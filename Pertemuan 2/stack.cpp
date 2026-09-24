#include<iostream>
using namespace std;

struct node{
    int value;
    node *next;
};
node* head = NULL;
node* tail = NULL;

//insert first
    void insertFirst(int n){
    node *newnode = new node;
    newnode->value = n;
    newnode->next = NULL;

    if (head == NULL){
        head = newnode;
        tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

//delete first
    void deleteFirst(){
    if (head == NULL){
        cout << "List kosong." << endl;
        return;
    }

    node *temp = head;
    head = head->next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void display(){
    node* temp = head;
    cout << "isi linked list: ";
    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main(){
    system("cls");

    insertFirst(10);
    display();
    insertFirst(5);
    display();
    deleteFirst();
    display();

return 0;
}
