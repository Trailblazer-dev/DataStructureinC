#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the doubly linked list
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

// Function to add a new node to the end of the list
void addList(struct node *head, int data)
{
    // Create a new node
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, make the new node the first node
    if (head->next == NULL)
    {
        head->next = newNode;
        newNode->prev = head;
    }
    else
    {
        // Traverse to the end of the list
        struct node *temp = head->next;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // Add the new node at the end
        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("Added node with data: %d\n", data);
}

// Function to display the list and its length
void displayList(struct node *head)
{
    struct node *temp = head->next; // Skip the dummy head node
    int count = 0;

    if (temp == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    printf("Elements in the list:\n");
    while (temp != NULL)
    {
        count++;
        printf("Data at position %d: %d\n", count, temp->data);
        temp = temp->next;
    }
    printf("Total number of elements: %d\n", count);
}

// Function to free the entire list
void freeList(struct node *head)
{
    struct node *temp = head->next; // Skip the dummy head node
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    head->next = NULL; // Reset the list to empty
    printf("List memory freed.\n");
}

int main()
{
    // Create a dummy head node
    struct node *head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    head->prev = NULL;
    head->next = NULL;
    head->data = 0; // Dummy data for the head node

    // Add nodes to the list
    addList(head, 21);
    addList(head, 42);
    addList(head, 63);

    // Display the list
    displayList(head);

    // Free the memory used by the list
    freeList(head);
    free(head); // Free the dummy head node
    return 0;
}
