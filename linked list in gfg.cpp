// C++ program to show inserting a node
// at front of given Linked List
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int, inserts
// a new node on the front of the list.
void insertAtFront(Node** head_ref, int new_data)
{

    // 1. allocate node
    Node* new_node = new Node();

    // 2. put in the data
    new_node->data = new_data;

    // 3. Make next of new node as head
    new_node->next = (*head_ref);

    // 4. move the head to point
    // to the new node
    (*head_ref) = new_node;
}
 void printMiddle(class Node *head){
        struct Node *slow_ptr = head;
        struct Node *fast_ptr = head;

        if (head!=NULL)
        {
            while (fast_ptr != NULL && fast_ptr->next != NULL)
            {
                fast_ptr = fast_ptr->next->next;
                slow_ptr = slow_ptr->next;
            }
            cout << "The middle element is [" << slow_ptr->data << "]" << endl;
        }
    }


// Function to insert element in LL
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// This function prints contents of
// linked list starting from head
void printList(Node* node)
{
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
    cout << "\n";
}

// Driver code
int main()
{
    // Start with the empty list
    Node* head = NULL;

    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    // push(&head, 67);

    cout << "Created Linked list is: ";
    printList(head);

    // Insert 1 at the beginning.
   // insertAtFront(&head, 1);

   // cout << "After inserting 1 at front: ";
    //printList(head);

    printMiddle(head);

    return 0;
}
