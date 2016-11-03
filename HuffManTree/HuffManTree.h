#pragma once
#include "stdafx.h"
#include "LeafNode.h"
class HuffManTree
{
public:
	HuffManTree();
	void Initialize(std::string chars);
	void CreateTree(void);
	void TraverseTree(LeafNode node);
	LeafNode get_first(void);
private:
	std::queue<LeafNode> first_queue;
};

