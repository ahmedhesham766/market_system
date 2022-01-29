#pragma once
#include<iostream>
#include <string>
#include<vector>
#include"product.h"
using namespace std;
class Seller
{
public:
	int id;
	string name;
	string email;
	string password;

public:
	Seller(string name,string email,string password,int id);
	void generate(vector<product> &cars, vector<product> & clothes, vector<product> & makeup);
	void addproduct(vector<product>& cars, vector<product>& clothes, vector<product>& makeup);
	void modify(vector<product>& cars, vector<product>& clothes, vector<product>& makeup);
	void remove(vector<product>& cars, vector<product>& clothes, vector<product>& makeup);
	
};



