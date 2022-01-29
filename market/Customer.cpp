#include "Customer.h"
#include<iostream>
using namespace std;
#include<vector>
static int id_customer = 0;
Customer::Customer(string name, string password, string email, string phone_number, string address)
{
	this->id = id_customer;
	this->name = name;
	this->address = address;
	this->email = email;
	this->password = password;
	this->phone_number = phone_number;
	id_customer++;
}
void Customer::Search(vector<product>& cars, vector<product>& clothes, vector<product>& makeup)
{
	int num;
	bool check = false;
	while (true)
	{
		string name;
		check = false;
		cout << "Enter Name Of Product You Search For It  " << endl;;
		cin >> name;
		/*f (std::find(cars.begin(), cars.end(), name) != cars.end())
			cout << "yes";
		else
		{
			cout << "no";
		}*/
		for (int i = 0; i < cars.size(); i++)
		{
			if (name == cars[i].name)
			{
				cout <<  "YOU GOT IT " << endl;
				cout <<  "-Name : " << cars[i].name << endl;
				cout <<  "-Id : " << cars[i].id << endl;
				cout <<  "-price : " << cars[i].price << endl;
				cout <<  "-Category Name : " << cars[i].name_cat << endl;
				//cout <<  "-Category Number : " << cars[i].cat_num << endl;
				check = true;
				break;

			}

		}
		if (check == false)
		{
			cout << "Not Available Product In Market " << endl;
		}
		if (check)
		{
			break;
		}


	}
}
void Customer::addtocart(product p) {
	cart.push_back(p);

}
void Customer::remove_from_cart(vector<product>& cars, vector<product>& clothes, vector<product>& makeup)
{
	while (true) {

		if (cart.empty()==true)
		{
			cout << "YOUR CART IS EMPTY ! ,CHECK OUT YOUR CART" << endl;
			cout << "----------------------------------------------------------------------------------------------" << endl;
			break;
		}
		else {
			int id_r;
			cout << "ENTER ID OF PRODUCT YOU WANT TO REMOVE HIM\n";
			for (int i = 0; i < cart.size(); i++)
			{

				cout << "product " << i + 1 << "  Id : " << cart[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << cart[i].name << endl;
				cout << "product " << i + 1 << " price : " << cart[i].price << endl;
				cout << "product " << i + 1 << " quantity : " << cart[i].quantity << endl;
				cout << "product " << i + 1 << "  Category Number : " << cart[i].cat_num << endl;
			}
			cin >> id_r;
			for (int i = 0; i < cart.size(); i++)
			{
				
				if (cart[i].id == id_r)
				{
					for (int k = 0; k < cars.size(); k++)
					{
						if (cars[k].id == id_r && cart[i].cat_num == 1)
							cars[k].availible_quantity += cart[i].quantity;
					}
					for (int k = 0; k < cars.size(); k++)
					{
						if (clothes[k].id == id_r && cart[i].cat_num == 2)
							clothes[k].availible_quantity += cart[i].quantity;
					}
					for (int k = 0; k < cars.size(); k++)
					{
						if (makeup[k].id == id_r && cart[i].cat_num == 3)
							makeup[k].availible_quantity += cart[i].quantity;
					}
					cart.erase(cart.begin() + i);
				}
			}
			
			if (cart.size() == 0)
			{
				cout << "YOUR CART IS EMPTY ! ,CHECK OUT YOUR CART" << endl;
				break;
			}
			else
			{
				cout << "DONE , YOUR CART NOW IS : " << endl;
				cout << "----------------------------------------------------------------------------------------------" << endl;
				for (int i = 0; i < cart.size(); i++)
				{
					cout << "product " << i + 1 << "  Id : " << cart[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << cart[i].name << endl;
					cout << "product " << i + 1 << "  Price : " << cart[i].price << endl;
					cout << "product " << i + 1 << "  quantity : " << cart[i].quantity << endl;
					cout << "product " << i + 1 << "  Category number : " << cart[i].cat_num << endl;
				}
			}
			break;
		}
	}
}
void Customer::browse(vector<product>& cars, vector<product>& clothes, vector<product>& makeup) {
				int ch, ch_cart, yesOrno = 0,q;
				do {
					cout << "Click(1) To Browse  Cars:" << endl << "Click(2) To Browse Clothes:" << endl << "Click(3) To Browse MakeUp:" << endl;
					while (true)
					{
						cin >> ch;
						if (ch == 1 || ch == 2 || ch == 3)
						{
							break;
						}
						else
							cout << "Unavailable Choice , Try again\n";
					}
					switch (ch)
					{
					case 1:
					{
						cout << "CHOOSE PRODUCT TO ADD IT TO CART"<<endl;
						for (int i = 0; i < cars.size(); i++)
						{
							cout << "PRODUCT " << i + 1 << "  Name : " << cars[i].name << endl;
							cout << "PRODUCT " << i + 1 << "  Id : " << cars[i].id << endl;
							cout << "PRODUCT " << i + 1 << "  Price : " << cars[i].price << endl;
							cout << "PRODUCT " << i + 1 << "  Category number : " << cars[i].cat_num << endl;
							cout << "PRODUCT " << i + 1 << "  Availible quantity : " << cars[i].availible_quantity << endl;
							cout << "----------------------------------------------------------------------------------------------" << endl;
						}
						cin >> ch_cart;

						cout << "Quantity ? " << endl;
						cin >> q;
						cars[ch_cart - 1].availible_quantity -= q;
						cars[ch_cart - 1].quantity = q;
						addtocart(cars[ch_cart - 1]);
						cout << "DONE , YOUR CART NOW IS : " << endl;
						for (int i = 0; i < cart.size(); i++)
						{
							
							cout << "Product " << i + 1 << "  Name : " << cart[i].name << endl;
							cout << "Product " << i + 1 << "  Id : " << cart[i].id << endl;
							cout << "Product " << i + 1 << "  Price : " << cart[i].price << endl;
							cout << "product " << i + 1 << "  quantity : " << cart[i].quantity << endl;
							cout << "Product " << i + 1 << "  Category number : " << cart[i].cat_num << endl;
							cout << "----------------------------------------------------------------------------------------------" << endl;
						}
						break;
					}
					case 2:
					{
						cout << "CHOOSE PRODUCT TO ADD IT TO CART"<<endl;
						for (int i = 0; i < clothes.size(); i++)
						{
							cout << "Product " << i + 1 << "  Name : " << clothes[i].name << endl;
							cout << "Product " << i + 1 << "  Id : " << clothes[i].id << endl;
							cout << "Product " << i + 1 << "  Price : " << clothes[i].price << endl;
							cout << "Product " << i + 1 << "  Category number : " << clothes[i].cat_num << endl;
							cout << "Product " << i + 1 << "  Availible quantity : " << clothes[i].availible_quantity << endl;
							cout << "----------------------------------------------------------------------------------------------" << endl;
						}
						cin >> ch_cart;

						cout << "Quantity ? " << endl;
						cin >> q;
						clothes[ch_cart - 1].availible_quantity -= q;
						clothes[ch_cart - 1].quantity = q;
						addtocart(clothes[ch_cart - 1]);
						cout << "DONE , YOUR CART NOW IS : " << endl;
						for (int i = 0; i < cart.size(); i++)
						{
						
							cout << "Product " << i + 1 << "  Name : " << cart[i].name << endl;
							cout << "Product " << i + 1 << "  Id : " << cart[i].id << endl;
							cout << "Product " << i + 1 << "  Price : " << cart[i].price << endl;
							cout << "product " << i + 1 << "  quantity : " << cart[i].quantity << endl;
							cout << "Product " << i + 1 << "  Category number : " << cart[i].cat_num << endl;
							cout << "----------------------------------------------------------------------------------------------" << endl;

						}
						break;
					}
					case 3:
					{
						cout << "CHOOSE PRODUCT TO ADD IT TO CART"<<endl;
						for (int i = 0; i < makeup.size(); i++)
						{

							cout << "Product " << i + 1 << "  Name : " << makeup[i].name << endl;
							cout << "Product " << i + 1 << "  Id : " << makeup[i].id << endl;
							cout << "Product " << i + 1 << "  Price : " << makeup[i].price << endl;
							cout << "Product " << i + 1 << "  Category number : " << makeup[i].cat_num << endl;
							cout << "Product " << i + 1 << "  Availible quantity : " << makeup[i].availible_quantity << endl;
							cout << "----------------------------------------------------------------------------------------------" << endl;
						}
						cin >> ch_cart;

						cout << "Quantity ? " << endl;
						cin >> q;
						makeup[ch_cart - 1].availible_quantity -= q;
						makeup[ch_cart - 1].quantity = q;
						addtocart(makeup[ch_cart - 1]);
						cout << "DONE , YOUR CART NOW IS : " << endl;
						cout << "----------------------------------------------------------------------------------------------" << endl;
						for (int i = 0; i < cart.size(); i++)
						{
							cart[i].quantity = q;
							cout << "product " << i + 1 << "  Name : " << cart[i].name << endl;
							cout << "product " << i + 1 << "  Id : " << cart[i].id << endl;
							cout << "product " << i + 1 << "  Price : " << cart[i].price << endl;
							cout << "product " << i + 1 << "  quantity : " << cart[i].quantity << endl;
							cout << "product " << i + 1 << "  Category number : " << cart[i].cat_num << endl;
							cout << "----------------------------------------------------------------------------------------------" << endl;

						}
						break;
					}
					default:
					{
						cout << "Unavailable Choice , Try again" << endl;
						cin >> yesOrno;
						break;
					}

		         }
	} while (yesOrno == 1);
}


