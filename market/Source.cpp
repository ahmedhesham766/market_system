#include <iostream>
#include<string>
#include <vector>
#include "Seller.h"
#include "Customer.h"
using namespace std;
string password2, username2;
int choose1, choose,select_seller_index,select_customer_index, sel_or_cust;
void create_account_seller( vector<Seller>&s )
{ 
	string name;
	string email;
	string password;
	int id;
	cout << "\t\t\t\t\t\Now , Create Your Own Account\t\t\t\t\t\t\t" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Enter Your New E-mail" << endl;
	cin >> email;
	cout << " Enter your username" << endl;
	cin >> name;
	cout << " Enter your id" << endl;
	cin >> id;
	cout << "Enter password (The password should be more than 8 charaters)"<<endl;
	while (true)
	{
		cin >> password;
		if (password.size() < 8)
		{
			cout << "Invalid Password ,Enter Your Password again"<<endl;
		}
		else
			break;
	}
	Seller ss(name,email,password ,id);
		s.push_back(ss);
}
void create_account_customer( vector<Customer>&c )
{
	string name;
	string email;
	string phone_number;
	string password;
	string address;

	cout << "\t\t\t\t\tNow , Create Your Own Account\t\t\t\t\t\t\t"<< endl;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Enter Your New E-mail"<<endl;
	cin >> email;
	cout << "Enter your username : ";
	cin >> name;
	cout << "Enter password (The password should be more than 8 charaters)" << endl;
	while (true)
	{
		cin >> password;
		if (password.size()< 8)
		{
			cout << "Invalid Password ,Enter Your Password again:" << endl;;
		}
		else
			break;
	}	
	cout << "Enter your address : "<<endl;
	cin >> address;
	cout << "Enter your Phone number(Numbers Only):"<<endl;
	cin >> phone_number;
	Customer cc(name,password,email,phone_number,address);
	c.push_back(cc);
}
int sign_in_seller(vector<Seller>& s)
{
	bool check = false;
	string user;
	string password;
	int index_seller;
	while (true)
	{
		check = false;
		cout << "                                           Now,You Are About To Sign In                                                 ";
		cout << "------------------------------------------------------------------------------------------------------------------------" ;
		cout << "Enter your user_name ,Please" << endl;
		cin >> user;
		cout << "Enter your Password ,Please " << endl;
		cin >> password;
		for (int i = 0; i < s.size(); i++)
		{
			if (user == s[i].name && password == s[i].password)
			{
				cout << "-----------------------------------------------------------------------------------------------------------------------";
				cout << "                                           ## Asuccessful process ##                                                              ";
				cout << "                         ## Now , You Are Entered To Your Account ##                                             ";
				cout << "                                          ##  Welcome " << s[i].name << "! ##" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------";
					index_seller = i;
			
				check = true;
				break;
			}
		}
		if (check == false)
		{
			cout << "Invaild Information ,Please Try Again" << endl;
		}
		if (check)
		{
			break;
		}
	}
	return index_seller;
}
int sign_in_customer (vector<Customer>&c)
{
	bool check = false;
	string user;
	string password;
	int index_customer;
	while (true)
	{
		check = false;
		cout << "                                           Now,You Are About To Sign In                                                " ;
		cout << " ------------------------------------------------------------------------------------------------------------------------" ;
		cout << "Enter your user_name ,Please" << endl;
		cin >> user;
		cout << "Enter your Password ,Please " << endl;
		cin >> password;
		for (int i = 0; i<c.size(); i++)
		{
			if (user == c[i].name && password == c[i].password)
			{
				cout << "-----------------------------------------------------------------------------------------------------------------------";
				cout << "                                           ## Asuccessful process ##                                                              ";
				cout << "                         ## Now , You Are Entered To Your Account ##                                             ";
				cout << "                                          ##  Welcome " << c[i].name << "! ##" << endl;
				cout <<"------------------------------------------------------------------------------------------------------------------------";
				index_customer = i;
				check = true;
				break;
			}
		}
		if (check == false)
		{
			cout << "Invaild Information ,Please Try Again" << endl;
		}
		if (check)
		{
			break;
		}
	}
	return index_customer;
}
int  user()
{
	cout << "\t\t\t\t\tYour Market in Your Home                                                        ";
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Click (1) To Choose Seller" << endl << "Click (2) To Choose Customer" << endl;
	cin >> choose1;
	while (true)
	{
		if (choose1 == 1)
		{
			cout << "                                      Welcome To Your OnLine Market From Your Home                                      ";
			cout << "------------------------------------------------------------------------------------------------------------------------";
			cout << "##  Now , You Signed as a Seller  ##" << endl;
			break;
		}
		else if (choose1 == 2)
		{
			cout << "                                      Welcome To Your OnLine Market From Your Home                                      ";
			cout << "-------------------------------------------------------------------------------------------------------------------------";

			cout << "##  Now , You Signed as a Customer  ## " << endl;
			break;
		}
		else
		{
			cout << "Unexpected Choise" << endl;
			cout << "Unknown Application!! , Please Try Again To Continue Your Process" << endl;
			 choose1 = user();
			break;
		}
	}  
	sel_or_cust = choose1;
	return choose1;
}
int siging( vector<Seller>&s, vector<Customer>&c)
{
	cout << "Click (1) To Sign in To Your Account " << endl <<"Click (2) To Sign Up  To Your New Account" << endl;
	while (true)
	{
		cin >> choose;
		if (choose == 1 && choose1 == 1)
		{
			select_seller_index =sign_in_seller(s);
			break;
		}
		else if (choose == 1 && choose1 == 2)
		{
			select_customer_index=sign_in_customer(c);
			break;
		}
		else if (choose == 2 && choose1 == 1)
		{
			create_account_seller(s);
			select_seller_index=sign_in_seller(s);
			break;
		}
		else if (choose == 2 && choose1 == 2)
		{
			create_account_customer(c);
			select_customer_index =sign_in_customer(c);
			break;
		}
		else
		{
			cout << "Unexpected Choise" << endl;
			cout << "Unknown Application!!, Please Try Again" << endl;
			choose = siging(s ,c);
			break;
		}
	}
	return choose;
}
int menu_seller()
{
	cout << "Click (1) To Add Product" << endl << "Click (2) To Remove " << endl << "Click (3) to Modify Product" << endl << "Click (4) To log out" << endl;
	int service;
	cin >> service;
	return service;
}
int menu_customer()
{
	cout << "Click (1) Add Products To Cart" << endl << "Click (2) Remove Products From cart" << endl<<  "Click (3) Confirm And Display Receipt "<<endl<<"Click (4) Search For Product By Name" << endl<< "Click (5) To log out" << endl;
	int service;
	cin >> service;
	return service;
}
int main()
{
	vector<product> cars;
	vector<product> clothes;
	vector<product> makeup;
	vector<Seller>s;
	vector<Customer>c;
	Customer c1("eman", "712712e", "eman", "01000000000", "khanka");
	Customer c2("esraa", "216216e", "e2", "01000000000", "khanka");
	Customer  c3("Osama", "142142o", "e3", "01000000000", "khanka");
	Seller s1("eman", "eman.@market", "55555", 122);
	Seller s2("Mohamed","m.@market", "66666", 123);
	Seller s3("Ahmed", "e.@market", "77777", 124);
	s.push_back(s1);
	s.push_back(s2);
	s.push_back(s3);
	c.push_back(c1);
	c.push_back(c2);
	c.push_back(c3);
	int services=0 , ser2=0;
	int back;
	s[select_seller_index].generate(cars, clothes, makeup);
		do {
			user();
			siging(s, c);
		  if (sel_or_cust == 1) {
				do
				{
					services = menu_seller();
					switch (services)
					{
					case 1:
					{
						cout << "Now, You About To Add Product" << endl;
						s[select_seller_index].addproduct(cars, clothes, makeup);
						break;
					}
					case 2:
						cout << "Now, You About To Remove Product" << endl;
						s[select_seller_index].remove(cars, clothes, makeup);
						break;
					case 3:
						cout << "Now, You About To Modify Product" << endl;
						s[select_seller_index].modify(cars, clothes, makeup);
						break;
					case 4:cout << "Now, You About To Exit " << endl;
						break;
					default:
						cout << "Unknown Application" << endl;
						break;
					}
					if (services != 4)
					{
						cout << "Do You Want to back to Main Menu? " << endl;
						cout << "Click (1) To back To Menu" << endl << "Click (2) To Exit" << endl;
						cin >> back;
					}
					else
						break;
				} while (back == 1);
		  }
		  else {
			  do
			  {
				  ser2 = menu_customer();
				  switch (ser2)
				  {
				  case 1: {
					  cout << "Now, You About To Add To cart" << endl;
					  c[select_customer_index].browse(cars, clothes, makeup);
					 // cout << "cust index" << select_customer_index << endl;
					  break;
				  }
				  case 2:
				  {cout << "Now,You About To Remove From Cart" << endl;
				  c[select_customer_index].remove_from_cart(cars, clothes, makeup);
				  break;
				  }
				  case 3:
				  {cout << "Now, You About To Display Receipt" << endl;
				  c[select_customer_index].r.confirm_and_display(c[select_customer_index].cart);
				  break;
				  }
				  case 4: cout << "Now,You About To Search For Product" << endl;
					  c[select_customer_index].Search(cars,clothes,makeup);
					  break;
					  
				  case 5:cout << "Now,You About To Exit" << endl;
					  break;
				  default:
					  cout << "Unknown Application" << endl;
					  break;
				  }
				  if (ser2 != 5)
				  {
					  cout << "Do You Want to back to Main Menu? " << endl;
					  cout << "Click (1) To back To Menu" << endl << "Click (2) To Exit" << endl;
					  cin >> back;
				  }
				  else
					  break;
			  } while (back == 1);
		  }
		} while (services == 4 || ser2 == 5 || back ==2);
	
	}