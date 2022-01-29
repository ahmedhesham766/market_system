#pragma once
#include<vector>
#include"product.h"
class Receipt
{
public:
	int id;
	int customer_id;
	long float total_price;
	long float shipment_cost = 50.0 ;
	Receipt(void);
	void confirm_and_display(vector<product>& cart);
};

