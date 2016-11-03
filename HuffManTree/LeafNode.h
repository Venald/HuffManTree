#pragma once
#include "stdafx.h"
class LeafNode
{
public:
	LeafNode();
	void set_left(LeafNode* n_left);
	void set_right(LeafNode* n_right);
	void add_symbol(char n_symbol);
	void add_symbol(std::vector<char> n_symbols);
	void set_weight(float n_weight);
	std::string print(void);
	LeafNode* get_left(void);
	LeafNode* get_right(void);
	std::vector<char> get_symbols(void);
	float get_weight(void);
private:
	std::vector<char> symbols;
	float weight;
	LeafNode* left;
	LeafNode* right;
};

