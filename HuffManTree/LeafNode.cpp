#include "LeafNode.h"



LeafNode::LeafNode()
{
}

void LeafNode::set_left(LeafNode * n_left)
{
	left = n_left;
}

void LeafNode::set_right(LeafNode * n_right)
{
	right = n_right;
}

void LeafNode::add_symbol(char n_symbol)
{
	symbols.push_back(n_symbol);
}

void LeafNode::add_symbol(std::vector<char> n_symbols)
{
	//symbols.erase(symbols.begin(),symbols.end());
	for (char elem : n_symbols) {
		symbols.push_back(elem);
	}
}

void LeafNode::set_weight(float n_weight)
{
	weight = n_weight;
}

std::string LeafNode::print(void)
{
	std::string print = std::string();
	print.append("Symbol: ");
	for (char elem : symbols)
	{
		print += elem;
	}
	print.append(" Weight : ");
	print.append(std::to_string(weight));
	return print;
}

LeafNode * LeafNode::get_left(void)
{
	return left;
}

LeafNode * LeafNode::get_right(void)
{
	return right;
}


std::vector<char> LeafNode::get_symbols(void)
{
	return symbols;
}

float LeafNode::get_weight(void)
{
	return weight;
}


