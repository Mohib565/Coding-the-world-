#include <iostream>

using namespace std;

// Node class ka definition
class node {
public:
    int val;
    node* next;
};

// Function jo ek naya node banata hai
node* create_node(node* current, int val) {
    node* n;
    n = new node;
    n->val = val;
    n->next = NULL;
    current->next = n;
    return n;
}

// Function jo linked list ko print karta hai
void output_list(node* head) {
    node* current = head;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    node* head;
    head = new node;
    head->val = 2;
    head->next = NULL;

    node* current;
    current = head;

    current = create_node(current, 5);

    output_list(head);

    return 0;
}


    