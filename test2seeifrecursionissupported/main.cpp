#include <iostream>
#include "AddTwoNumbers/AddTwoNumbersRec.h"
#include "BinaryTree/BinaryTree.h"
#include "BinaryTree/ReverseBinaryTree.h"
void reverse_binary_tree(BinaryTree* node) {
	if (node->left == NULL || node->right == NULL) {
		//exit(0);
	}

	else {
		BinaryTree* tmp = node->left;
		node->left = node->right;
		node->right = tmp;

		std::cout << "\n" << node->node << "\nleft: " << node->left->node << "\nright" << node->right->node << "\n";

		reverse_binary_tree(node->left);
		reverse_binary_tree(node->right);
	}
}

int main() {
	std::cout << "This is main.cpp for reversing a tree";
	std::cout << "\nThis will add two numbers: " << add2numbers(0, 10) << "\n";

	BinaryTree tree;
	BinaryTree left;
	BinaryTree right;
	BinaryTree leftLeft;
	BinaryTree leftRight;

	tree.left = &left;
	tree.right = &right;
	left.left = &leftLeft;
	left.right = &leftRight;

	tree.setNode(1);
	tree.insertLeft(2);
	tree.insertRight(3);

	left.insertLeft(4);
	left.insertRight(5);

	std::cout << "\n" << tree.node << "\nleft:" << tree.left->node << "\nright:" << tree.right->node << "\nleft->left:" << tree.left->left->node << "\nleft->right:" << tree.left->right->node << "\n";

	reverse_binary_tree(&tree);

	return 0;

}