#pragma once
#include "product.h"
#include"Seller.h"
#include<vector>
#include<string>
#include"Receipt.h"
class Customer
{

public:
	int id;
	string name;
	string email;
	string phone_number;
	string address;
	string password;
	vector<product> cart;
	Receipt r;
public:
	 Customer( string name, string password, string email, string phone_number, string address);
	 void Search(vector<product>& cars, vector<product>& clothes, vector<product>& makeup);
	void browse(vector<product>& cars, vector<product>& clothes, vector<product>& makeup);
	void addtocart(product p);
	void remove_from_cart(vector<product>& cars, vector<product>& clothes, vector<product>& makeup);

};



