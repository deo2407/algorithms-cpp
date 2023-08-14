#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

struct LinkedList {
    Node* head;
    int size;
    
    LinkedList(Node* head=NULL) {
        this->head = head;
        this->size = 1;
        if (this->head == NULL)
            this->size = 0;
    }

    void Append(int data) {
        Node* node = new Node(data);
        Node* curr = this->head;

        while (curr->next != NULL)
            curr = curr->next;
        curr->next = node;
        this->size++;
    }

    void Print() {
        Node* curr = this->head;
        int i = 1;
        
        if (curr == NULL)
            cout << "[NULL]" << endl;

        while (curr != NULL) {
            if (curr == this->head)
                cout << "[ Head : " << curr->data << " ]";
            else if (curr->next == NULL)
                cout << " -> [ Tail : " << curr->data << " ]" << endl;
            else
                cout << " -> [ Node " << i << " : " << curr->data << " ]";
            i++;
            curr = curr->next;
        }
    }

    void Reverse() {
        struct Node *curr, *temp, *prev;
        curr = this->head;
        prev = NULL;

        while (curr != NULL) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        this->head = prev;
    }
};

int main() {
    Node* A = new Node(3);
    LinkedList* list = new LinkedList(A);
    list->Append(51);
    list->Append(71);
    list->Append(91);
    list->Append(44);
    list->Reverse();
    list->Print();
}