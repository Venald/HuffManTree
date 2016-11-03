#include "HuffManTree.h"



HuffManTree::HuffManTree()
{
}

void HuffManTree::Initialize(std::string chars)
{
	std::vector<char> characters(chars.begin(), chars.end());
	std::map<char, int> charMap;
	for (int i = 0; i < characters.size(); i++)
	{
		charMap[characters[i]] += 1;
	}
	std::vector<std::pair<char, int>> temp{ begin(charMap), end(charMap) };
	//Thanks Melo
	std::sort(begin(temp), end(temp), [](std::pair<char, int>& lhs, std::pair<char, int>& rhs) {
		return lhs.second < rhs.second;
	});
	for (auto elem : temp)
	{
		LeafNode newLeaf = LeafNode();
		newLeaf.add_symbol(elem.first);
		newLeaf.set_weight(elem.second);
		first_queue.push(newLeaf);
	}

}

void HuffManTree::CreateTree(void)
{
	int n = 0;
	while (first_queue.size() > 1)
	{
		std::cout << n;
		n++;
		//Take the first 2 nodes with lowest possibility out of the queue
		LeafNode first = first_queue.front();
		first_queue.pop();
		LeafNode second = first_queue.front();
		first_queue.pop();

		LeafNode internalNode = LeafNode();
		//add up the weights for the internal parent node
		internalNode.set_weight(first.get_weight() + second.get_weight());
		internalNode.add_symbol(first.get_symbols());
		internalNode.add_symbol(second.get_symbols());
		//insert the 2 nodes as children nodes for the parent/internal node
		//check for correct left/right node
		if (first.get_weight() < second.get_weight())
		{
			internalNode.set_left(&first);
			internalNode.set_right(&second);
		}
		else {
			internalNode.set_right(&first);
			internalNode.set_left(&second);
		}
		first_queue.push(internalNode);
	}
}

void HuffManTree::TraverseTree(LeafNode node)
{
	if (&node == NULL)
	{

	}
	std::cout << "\n";
	std::cout << node.get_symbols().at(0);
	TraverseTree(*node.get_left());
	TraverseTree(*node.get_right());
}

LeafNode HuffManTree::get_first(void)
{
	return first_queue.front();
}


