#include <stdlib.h>
#include <stdio.h>
struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
typedef struct node node_t;
void printlist(node_t *head)
{
    node_t *temporary = head;
    while (temporary != NULL)
    {
        printf("%d -> ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}
// function to create new nodes
node_t *create_new_node(int value)
{                                            // returns a pointer
    node_t *result = malloc(sizeof(node_t)); // allocating a new node using malloc
    result->value = value;                   // setting the value for the new node
    result->next = NULL;                     // initialising/setting the next pointer to NULL
    result->prev = NULL;                     // initialising/setting the previous pointer to NULL
    return result;                           // returning the pointer to the new node
}
/*function to add a node by pointing a pointer to a pointer (used when the head
is not necessarily pointing to the first node upfront)*/
node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = node_to_insert;
    }
    *head = node_to_insert;
    node_to_insert->prev = NULL;
    return node_to_insert;
}
void insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
    newnode->next = node_to_insert_after->next;
    if (newnode->next != NULL)
    {
        newnode->next->prev = node_to_insert_after;
    }
    newnode->prev = node_to_insert_after;
    node_to_insert_after->next = newnode;
}
void remove_node(node_t **head, node_t *node_to_remove)
{
    // if the node we want to remove is the head
    if (*head == node_to_remove)
    {
        *head = node_to_remove->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
    }
    else
    {
        /*incase the node we want to delete is not the head, we first find the
        previous node in the list*/
        node_to_remove->prev->next = node_to_remove->next;
        if (node_to_remove->next != NULL)
        {
            node_to_remove->next->prev = node_to_remove->prev;
        }
    }
    node_to_remove->next = NULL;
    node_to_remove->prev = NULL;
    free(node_to_remove); // Free the memory of the removed node.
    return;
}
node_t *find_node(node_t *head, int value)
{
    node_t *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == value)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}
int main()
{
    node_t *head = NULL;
    node_t *tmp;
    for (int i = 0; i < 25; i++)
    {
        tmp = create_new_node(i);
        insert_at_head(&head, tmp);
    }
    // find the node with value 13
    tmp = find_node(head, 13);
    if (tmp != NULL)
    {
        printf("found node with value %d\n", tmp->value);
    }
    else
    {
        printf("Node with value 13 not found\n");
        return 1; // Exit early if node not found
    }
    // Insert a new node with value 75 after the found node
    insert_after_node(tmp, create_new_node(75));
    // Print the list after insertion
    printlist(head);
    // Remove the node with value 13
    remove_node(&head, tmp);
    // Remove the head node
    remove_node(&head, head);
     // Print the list after removal
        printlist(head);
    return 0;
}