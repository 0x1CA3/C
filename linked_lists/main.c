#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next_node;
};

int main(void) {
    struct node *first_node = (struct node *)malloc(sizeof(struct node));
    struct node *second_node = (struct node *)malloc(sizeof(struct node));
    struct node *third_node = (struct node *)malloc(sizeof(struct node));
    
    first_node->data = 1;
    first_node->next_node = second_node;
    
    second_node->data = 2;
    second_node->next_node = third_node;
    
    third_node->data = 3;
    third_node->next_node = NULL;
    
    printf("First Node Data -> %d\n", first_node->data);
    printf("Second Node Data -> %d\n", second_node->data);
    printf("Third Node Data -> %d\n", third_node->data);

    EXIT_SUCCESS;
}