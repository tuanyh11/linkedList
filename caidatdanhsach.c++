#include<iostream>
#include<string.h>

using namespace std;

class Node {
    public:
        char name[30], clasS[20];
        int age;
        Node *next;
        Node() {
            strcpy(name, "");
            strcpy(clasS, "");
            age = 0;
            next = NULL;
        };
        void input() {
            fflush(stdin);
            cout<<"Name:";
            gets(name);
            fflush(stdin);
            cout<<"clasS: ";
            gets(clasS);
            fflush(stdin);
            cout<<"age: ";
            cin>>age;
        }

        void Xuat() {
            cout<<"name: "<<name<<"\n";
            cout<<"clasS: "<<clasS<<"\n";
            cout<<"age: "<<age<<"\n";
        }
};
void addNodeIntoHead(Node **list) {
    Node* newNode = new Node();
    newNode->input();
    newNode->next = *list;
    *list = newNode; 
}

void addNodeIntoList(Node **list) {
    Node* p = *list;

    if(p == NULL) {
        addNodeIntoHead(list);
    } else {
        Node *newNode = new Node();
        while(p->next != NULL) {
            p = p->next;
            cout<<1;
        }
        newNode->input();
        p->next = newNode;
    }
}

void show(Node *head) {
    while(head != NULL) {
        cout<<head->age;
        head = head->next;
    }
}

int main () {
    Node *list = new Node();
    list = NULL;
    for (int i = 0; i < 3; i++)
    {
        addNodeIntoList(&list);
    }
    show(list);
    return 0;
}