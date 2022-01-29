#include "Receipt.h"
#include<iostream>
#include<vector>
//#include"product.h"
using namespace std;
Receipt::Receipt(void)
{
	total_price = 0;
	id = 0;
}
void Receipt::confirm_and_display (vector<product>& cart)
{

	cout << "Your receipt :" << endl;
	for (int i = 0; i < cart.size(); i++)
	{
		
		cout << "product " << i + 1 << "  Id : " << cart[i].id << endl;
		cout << "product " << i + 1 << "  Name : " << cart[i].name << endl;
		cout << "product " << i + 1 << "  Price : " << cart[i].price << endl;
		cout << "product " << i + 1 << "  Category num : " << cart[i].cat_num << endl;
		cout << "product " << i + 1 << "  quantity : " << cart[i].quantity << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		total_price += (cart[i].price*cart[i].quantity);
	}
	cout << "Total price = " << total_price << endl;
	total_price += shipment_cost;
	cout << "Total price with shipment cost = " << total_price << endl;
	cout << "----------------------------------------------------------------------------------------------" << endl;
}

