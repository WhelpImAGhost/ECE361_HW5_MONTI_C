/* BST_ADT.c - A program to implement a binary search into other programs
 *
 * @name:	Caleb Monti - monti@pdx.edu
 * @date:	22-November-2023
 * @version:	1.0
 *
 * @note:	This uses code and notes initially implemented by Narasimha Karumanchi
 *
 ****/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>
#include "BST_ADT.h"

/* 
 * Struct for IOM_361 module data containment
 * typedef struct dataset{

	time_t timestamp;
	uint32_t temp;
	uint32_t humid;
} Data;

 * typedef struct dataTreeNode{
	Data* data;
	struct dataTreeNode *left;
	struct dataTreeNode *right;
	
} BST_TreeNode;

*/
BST_TreeNode *root = NULL;

// Insert a new node into tree
void insertBST(Data* data_in){

	// declare node and references
	BST_TreeNode *tempNode = malloc(sizeof(BST_TreeNode));
	
	if (tempNode == NULL) {
		printf("Node creation failure. Terminating request\n");
		return;
	}

	BST_TreeNode *current;
	BST_TreeNode *parent;

	// declare parts of the node to be added
	tempNode->data = data_in;
	tempNode->left = NULL;
	tempNode->right = NULL;

	// if root is empty, set as root
	if (root == NULL)
		root = tempNode;
	else {
		current = root;
		parent = NULL;
	}

	while(1){
		
		parent = current;

		// go to left side of node
		if (data_in->timestamp < parent->data->timestamp ) {

			current = current->left;
			// insert into left
			if (current == NULL){
				parent->right = tempNode;
				return;
			}
		}


		// if not in left, go right
		else {
			current = current->right;

			// insert into right
			if ( current == NULL){
				parent->right = tempNode;
				return;
			}
		}
	}		
}

// Search the tree for a timestamp
BST_TreeNode* search (long data_in){

	BST_TreeNode *current = root;

	while( current->data->timestamp != data_in ) {
		if (current != NULL)
			printf("%ld ", current->data->timestamp);

		// move to left node
		if (current->data->timestamp > data_in){
			current = current->left;
		}

		// move to right node
		else {
			current = current->right;
		}

		if (current == NULL){
			return NULL;
		}
	}
	return current;

} 

// Traverse the Tree, pre order (root, left, right)
void preOrder(BST_TreeNode* root){
	if (root == NULL){

		return;
	}
	printf("%ld ", root->data->timestamp);
	preOrder(root->left);
	preOrder(root->right);
}

// Traverse the Tree, post order (left, right, root)
void postOrder(BST_TreeNode *root){
	if (root == NULL){

		printf("No root node found.\n");
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf("%ld ", root->data->timestamp);

	
}

