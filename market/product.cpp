#include "product.h"
#include<vector>
static int product_id = 0;
product::product(string name, float price, int cat_num, string name_cat, int seller_id,int av_quantity)
{
	this->id = product_id;
	this->name= name;
	this->price = price;
	this->cat_num = cat_num;
	this->name_cat = name_cat;
	this->seller_id = seller_id;
	this->availible_quantity = av_quantity;
	product_id++;
}
int product::Product_details()
{
	cout <<  "Click(1) To Choose From  Cars : " << endl << "Click(2) To Choose From Clothes : " << endl << "Click(3) To Choose From MakeUp : " << endl;
	while (true)
	{
		cin >> cat_num;
		if (cat_num == 1 || cat_num == 2 || cat_num == 3)
		{
			break;
		}
		else
			cout << "Not available , Try again\n";
	}
	cout << "ENTER THE PRODUCT NAME :";
	cin >> name;
	cout << "ENTER THE PRODUCT PRICE :";
	cin>> price;
	cout << "ENTER THE CATEGORY :";
	cin >> name_cat;
	cout << "ENTER THE Quantity :";
	cin >> availible_quantity;
	return cat_num;
}
