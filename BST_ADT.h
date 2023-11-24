/* BST_ADT.h - helper function for BST_ADT.c program, using Doxygen-style comments
 *
 * @author:	Caleb Monti - monti@pdx.edu
 * @date:	22-November-2023
 * @version:	1.0
 *
 * @Note:	The functions defined in BST_ADT.c and BST_ADT.h were initially defined by Narasimha Karumanchi, but have been modified to fit the needs of this program.
 ****/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// define the dataset struct for IOM_361 module containment
typedef struct dataset {

	time_t timestamp;
	uint32_t temp;
	uint32_t humid;
} Data;

// Define BST node struct
typedef struct dataTreeNode{
	Data* data;
	struct dataTreeNode *left;
	struct dataTreeNode *right;
}BST_TreeNode;

// TODO: add a return function within insertBST for error checking.
/**
 * insertBST() - inserts a new data node into the sorted BST
 *
 * Declares, defines, and places a new node within the Binary Search Tree
 * with data set by the input. The input must be a struct that contains a
 * timestamp, as this value is used to place the node within the tree. Does
 * not return a value
 *
 * @param	data_in: a pointer to the incoming data struct, of type Data
 *
 *
 ****/
void insertBST(Data* data_in);



/**
 * search() - Searches the BST for a specified timestamp value
 *
 * Searches the Binary Search Tree for a timestamp value specified by the input. Once
 * found, the function then returns the pointer to the found value, or returns a NULL
 * value if there were no found associations.
 *
 * @param	data_in: a type long value timestamp to compare with the BST values
 *
 * @return	pointer to the BST node with matching data, or NULL if no match.
 ****/
BST_TreeNode* search (long data_in);

// TODO: add function prototype for preOrder and postOrder

/**
 * preOrder() - Traverses the BST, pre order (root, left, right)
 *
 * Traverses the Binary Search Tree in pre-order style, printing the root, then traversing
 * to the left node and repeating, until the very left node is reached, returning to the
 * right side, until all nodes have been printed. Printed output will be a sorted list
 * of all elements in the BST
 *
 * @param	root: a pointer to the root node of the BST
 *
 ****/
void preOrder(BST_TreeNode* root);


/**
 * postOrder() - Traverses the BST, post order (left, right, root)
 *
 * Traverses the Binary Search Tree in post-order style, traversing to the very left node, 
 * then to the right node on the same level, then to the root node of that level, and
 * repeating until all nodes have been printed, with the main root being last. The result
 * will be a sorted list of all elements within the BST
 *
 *
 * @param	root: a pointer to the root node of the BST
 *
 ****/
void postOrder(BST_TreeNode* root);

