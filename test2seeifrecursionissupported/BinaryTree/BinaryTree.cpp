#include "BinaryTree.h"
/*
This returns the left node
@returns left - The left node
*/
BinaryTree* BinaryTree::getLeft() {
	return left;
}

/*
This returns the right node
@returns right - The right node
*/
BinaryTree* BinaryTree::getRight() {
	return right;
}

/*
This inserts a left node to the binary tree
@param node - Stores a Left Node to the tree
*/
void BinaryTree::insertLeft(int node) {
	left->node = node;
}

/*
This inserts a right node to the binary tree
@param node - Stores a Right Node to the tree
*/
void BinaryTree::insertRight(int node) {
	right->node = node;
}

/*
This sets a value to the root node in the binary tree
@param node - Stores the value of the root node
*/
void BinaryTree::setNode(int node) {
	BinaryTree::node = node;
}