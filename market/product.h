#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class product
{
public :
	int id;
	string name;
	long float price;
	int seller_id;
	int cat_num;
	string name_cat;
	int quantity ;
	int availible_quantity;
	product(string name, float price, int cat_num, string name_cat, int seller_id , int availible_quantity);
	int Product_details();
	//~product(void);
};

