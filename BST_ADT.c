/* BST_ADT.c - A program to implement a binary search into other programs
 *
 * @name:	Caleb Monti - monti@pdx.edu
 * @date:	22-November-2023
 * @version:	1.0
 *
 * @note:	This uses code and notes initially implemented by Narasimha Karumanchi
 *
 ****/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>
#include "BST_ADT.h"

// Struct for IOM_361 module data containment
typedef struct dataset{

	time_t timestamp;
	uint32_t temp;
	uint32_t humid;
} Data;

// Struct to contain Binary Tree
typedef struct dataTreeNode{
	Data* data;
	struct dataTreeNode *left;
	struct dataTreeNode *right;
	
} BST_TreeNode;

BST_TreeNode *root = NULL;

// Insert a new node into tree
BST_TreeNode* createNewNode(Data* data_in){

	// declare node and references
	BST_TreeNode *tempNode = malloc(sizeof(BST_TreeNode));
	// TODO: check for MALLOC success or exit
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
				
			}

		}




		
}


