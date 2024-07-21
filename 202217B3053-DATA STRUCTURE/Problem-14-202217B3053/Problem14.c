#include <stdio.h> 

// Define the maximum node index
int max_node = 15; 

// Array representation of the tree
char tree[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'}; 

// Function to get the index of the right child of a node
int get_right_child(int index) { 
    if (tree[index] != '\0' && ((2 * index) + 1) <= max_node) 
        return (2 * index) + 1; 
    return -1; 
} 

// Function to get the index of the left child of a node
int get_left_child(int index) { 
    if (tree[index] != '\0' && (2 * index) <= max_node) 
        return 2 * index; 
    return -1; 
} 

// Preorder traversal (Root - Left - Right)
void preorder(int index) { 
    if (index > 0 && tree[index] != '\0') { 
        printf(" %c ", tree[index]); 
        preorder(get_left_child(index)); 
        preorder(get_right_child(index)); 
    } 
} 

// Postorder traversal (Left - Right - Root)
void postorder(int index) { 
    if (index > 0 && tree[index] != '\0') { 
        postorder(get_left_child(index)); 
        postorder(get_right_child(index)); 
        printf(" %c ", tree[index]); 
    } 
} 

// Inorder traversal (Left - Root - Right)
void inorder(int index) { 
    if (index > 0 && tree[index] != '\0') { 
        inorder(get_left_child(index)); 
        printf(" %c ", tree[index]); 
        inorder(get_right_child(index)); 
    } 
} 

// Main function to demonstrate tree traversals
int main() { 
    printf("Preorder:\n"); 
    preorder(1); 
    printf("\nPostorder:\n"); 
    postorder(1); 
    printf("\nInorder:\n"); 
    inorder(1); 
    printf("\n"); 
    return 0; 
} 
