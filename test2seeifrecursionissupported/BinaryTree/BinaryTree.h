#pragma once

class BinaryTree {
public:
	int node;
	BinaryTree* left{};
	BinaryTree* right{};
	BinaryTree() {
		this->node = 0;
	}

	BinaryTree* getLeft();
	BinaryTree* getRight();
	void insertLeft(int node);
	void insertRight(int node);
	void setNode(int node);

};