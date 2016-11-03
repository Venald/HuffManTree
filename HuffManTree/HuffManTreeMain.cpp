// HuffManTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HuffManTree.h"
#include <iostream>

int main()
{
	HuffManTree tree = HuffManTree();
	tree.Initialize("asdasdasdasd asd qwe asd bv dfr er sd ");
	tree.CreateTree();
	tree.TraverseTree(tree.get_first());
	int a;
	std::cin >> a;
	return 0;
}




