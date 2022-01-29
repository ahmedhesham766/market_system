#include "Seller.h"
#include "product.h"
#include<vector>
//static int id_seller = 0;
Seller::Seller(string name, string email, string password,int id)
{
	this->name = name;
	this->email = email;
	this->password = password;
	this->id = id;
	//id_seller++;
}
void Seller::generate(vector<product> &cars, vector<product>& clothes,vector<product>& makeup)
{
    product p1("JEEB",500000.0,1,"CARS",100,10);
	product p2("TESLA",200000.0,1, "CARS",100,10);
	product p3("BMW",300000.0,1, "CARS",100,10);
	product p4("MERCEDES", 700000.0, 1,"CARS", 100,10);
	product p5("HONDA", 900000.0, 1,"CARS", 100,10);
	cars.push_back(p1);
	cars.push_back(p2);
	cars.push_back(p3);
	cars.push_back(p4);
	cars.push_back(p5);
	product p6( "SHIRT DRESSES", 50000.0,  2, "ClOTHES", 100,10);
	product p7( "SHOSES", 1000.0, 2, "ClOTHES", 100,10);
	product p8( "JACKETS", 3000.0, 2, "ClOTHES", 100,10);
	product p9("JACKETS", 3000.0, 2, "ClOTHES", 100,10);
	product p10("SUITS", 3000.0, 2, "ClOTHES", 100,10);
	clothes.push_back(p6);
	clothes.push_back(p7);
	clothes.push_back(p8);
	clothes.push_back(p9);
	clothes.push_back(p10);
	product p11( "LOOSEPOWDER", 500.0, 3, "MAKEUP", 100,10);
	product p12( "CONCEALER", 450.0, 3, "MAKEUP", 100,10);
	product p13( "EYESHADOW PALETTE", 3000.0, 3, "MAKEUP", 100,10);
	product p14("PRIMER", 300.0, 3, "MAKEUP", 100,10);
	product p15("FOUNDATION", 600.0, 3, "MAKEUP", 100,10);
	makeup.push_back(p11);
	makeup.push_back(p12);
	makeup.push_back(p13);
	makeup.push_back(p14);
	makeup.push_back(p15);
}
void display_cars(vector<product>& cars)
{
	cout << "Available Product:" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < cars.size(); i++)
	{
		
		cout << "product " << i + 1 << "  Id : " << cars[i].id << endl;
		cout << "product " << i + 1 << "  Name : " << cars[i].name << endl;
		cout << "product " << i + 1 << "  Price : " << cars[i].price << endl;
		cout << "product " << i + 1 << "  Category Name : " << cars[i].name_cat << endl;
		cout << "product " << i + 1 << "  Category Number : " << cars[i].cat_num << endl;
		cout << "product " << i + 1 << "  Availible_quantity : " << cars[i].availible_quantity << endl;
		cout << "-------------------------------------------------------------------------------" << endl;

		}

}
void display_clothes(vector<product>clothes)
{
	cout << "Available Product:" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < clothes.size(); i++)
	{
	
		cout << "product " << i + 1 << "  Id : " << clothes[i].id << endl;
		cout << "product " << i + 1 << "  Name : " << clothes[i].name << endl;
		cout << "product " << i + 1 << "  Price : " << clothes[i].price << endl;
		cout << "product " << i + 1 << "  Category Name : " << clothes[i].name_cat << endl;
		cout << "product " << i + 1 << "  Category Number : " << clothes[i].cat_num << endl;
		cout << "product " << i + 1 << "  Availible_quantity : " << clothes[i].availible_quantity << endl;
		cout << "--------------------------------------------------------------------------------" << endl;

	}
}
void display_makeup(vector<product>& makeup)
{
	cout << "Available Product:" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < makeup.size(); i++)
	{
		cout << "product " << i + 1 << "  Id : " << makeup[i].id << endl;
		cout << "product " << i + 1 << "  Name : " << makeup[i].name << endl;
		cout << "product " << i + 1 << "  Price : " << makeup[i].price << endl;
		cout << "product " << i + 1 << "  Category Name : " << makeup[i].name_cat << endl;
		cout << "product " << i + 1 << "  Category Number : " << makeup[i].cat_num << endl;
		cout << "product " << i + 1 << "  Availible_quantity : " << makeup[i].availible_quantity << endl;
		cout << "--------------------------------------------------------------------------------" << endl;

	}
}
void Seller::addproduct(vector<product>& cars, vector<product>& clothes, vector<product>& makeup)
{
	product p("name", 15.5, 1,"name", this->id,20); //comment
	int num;
	num = p.Product_details();
	switch (num)
	{
	case 1:
	{
		cars.push_back(p);
		//cout << " THE PRODUCT IN YOUR CART" << endl;
		cout << "------------------------------------------------------------------------------------" << endl;
		display_cars(cars);
		break;
	}
	case 2:
	{

		clothes.push_back(p);
		//cout << " THE PRODUCT IN YOUR CART" << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		display_clothes(clothes);
	}
		break;
	case 3:
	{
		makeup.push_back(p);
		//cout << " THE PRODUCT IN YOUR CART" << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		display_makeup(makeup);
		break;
	}
	default:
		cout << "Unavailable Choice \n";
		break;
	}
}
void Seller::modify(vector<product>& cars, vector<product>& clothes, vector<product>& makeup)
{
	int catnum, id1,av_quant ;
	string name;
	float price;
	//cout << this->id;
	cout << "Click(1) TO Modify in Cars:" << endl << "Click(2) TO Modify in Clothes:" << endl << "Click(3) TO Modify in MakeUp:" << endl;
	cin >> catnum;
	switch (catnum)
	{
	case 1:
	{
		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].seller_id==this->id)
			{
				cout << "product " << i + 1 << "  Id : " << cars[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << cars[i].name << endl;
				cout << "product " << i + 1 << "  Price : " << cars[i].price << endl;
				cout << "product " << i + 1 << "  Category Number : " << cars[i].cat_num << endl;
				cout << "product " << i + 1 << "  Availible_quantity : " << cars[i].availible_quantity << endl;
			}
		}
		cout << "ENTER ID OF PRODUCT YOU WANT TO MODIFY HIM\n";
		cin >> id1;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "ENTER NEW DETAILS\n";
		cout << "ENTER NEW NAME :"; cin >> name;
		cout << "ENTER NEW PRICE :"; cin >> price;
		cout << "ENTER NEW AVAILIBLE QUANTITY :"; cin >> av_quant;
		cout << "--------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < cars.size(); i++)
		{
			if (id1  == cars[i].id)
			{
				cars[i].name = name;
				cars[i].price = price;
				cars[i].cat_num = catnum;
				cars[i].availible_quantity = av_quant;
			}
		}
		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].seller_id == this->id)
			{
				cout << "THE NEW PRODUCT:" << endl;
				cout << "product " << i + 1 << "  Id : " << cars[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << cars[i].name << endl;
				cout << "product " << i + 1 << "  Price : " << cars[i].price << endl;
				cout << "product " << i + 1 << "  Category Number : " << cars[i].cat_num << endl;
				cout << "product " << i + 1 << "  Availible_quantity : " << cars[i].availible_quantity << endl;
			}
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < clothes.size(); i++)
		{
			if (clothes[i].seller_id == this->id)
			{
				cout << "product " << i + 1 << "  Id : " << clothes[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << clothes[i].name << endl;
				cout << "product " << i + 1 << "  Price : " << clothes[i].price<< endl;
				cout << "product " << i + 1 << "  Category Number : " << clothes[i].cat_num << endl;
				cout << "product " << i + 1 << "  Availible_quantity : " << clothes[i].availible_quantity << endl;
			}
		}
		cout << "ENTER ID OF PRODUCT YOU WANT TO MODIFY HIM\n";
		cin >> id1;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "ENTER NEW DETAILS\n";
		cout << "ENTER NEW NAME :"; cin >> name;
		cout << "ENTER NEW PRICE :"; cin >> price;
		cout << "ENTER NEW AVAILIBLE QUANTITY :"; cin >> av_quant;
		cout << "--------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < clothes.size(); i++)
		{
			if (id1 == clothes[i].id)
			{
				clothes[i].id = id;
				clothes[i].name = name;
				clothes[i].price = price;
				clothes[i].cat_num = catnum;
				clothes[i].availible_quantity = av_quant;
			}
		}

		for (int i = 0; i < clothes.size(); i++)
		{
			if (clothes[i].seller_id == this->id)
			{
				cout << "THE NEW PRODUCT:" << endl;
				cout << "product " << i + 1 << "  Id : " << clothes[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << clothes[i].name << endl;
				cout << "product " << i + 1 << "  Price : " << clothes[i].price << endl;
				cout << "product " << i + 1 << "  Category Number : " << clothes[i].cat_num << endl;
				cout << "product " << i + 1 << "  Availible_quantity : " << clothes[i].availible_quantity << endl;
			}
		}
		break;
	}

	
	case 3:
	{
		for (int i = 0; i < makeup.size(); i++)
		{
			if (makeup[i].seller_id== this->id)
			{
				cout << "product " << i + 1 << "  Id : " << makeup[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << makeup[i].name << endl;
				cout << "product " << i + 1 << "  price : " << makeup[i].price << endl;
				cout << "product " << i + 1 << "  Category Number : " << makeup[i].cat_num << endl;
				cout << "product " << i + 1 << "  Availible_quantity : " << makeup[i].availible_quantity << endl;
			}
		}
		cout << "ENTER ID OF PRODUCT YOU WANT TO MODIFY HIM\n";
		cin >> id1;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "ENTER NEW DETAILS\n";
		cout << "ENTER NEW NAME :"; cin >> name;
		cout << "ENTER NEW PRICE :"; cin >> price;
		cout << "ENTER NEW AVAILIBLE QUANTITY :"; cin >> av_quant;
		cout << "--------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < makeup.size(); i++)
		{
			if (id1 == makeup[i].id)
			{
				makeup[i].id = id;
				makeup[i].name = name;
				makeup[i].price = price;
				makeup[i].cat_num = catnum;
				makeup[i].availible_quantity = av_quant;
			}
		}

		for (int i = 0; i < makeup.size(); i++)
		{
			if (makeup[i].seller_id == this->id)
			{
				cout << "product " << i + 1 << "  Id : " << makeup[i].id << endl;
				cout << "product " << i + 1 << "  Name : " << makeup[i].name << endl;
				cout << "product " << i + 1 << "  Price : " << makeup[i].price << endl;
				cout << "product " << i + 1 << "  Category Number : " << makeup[i].cat_num << endl;
				cout << "product " << i + 1 << "  Availible_quantity : " << makeup[i].availible_quantity << endl;
			}
		}
		break;
	}
	default:
		cout << "UNavailable Choice , Try Again\n";
		break;
	}
}
void Seller::remove(vector<product>& cars, vector<product>& clothes, vector<product>& makeup)
{
	int n,id;
	cout << "Click(1) To Remove From Cars:" << endl << "Click(2) To Remove From Clothes:" << endl << "Click(3) To Remove From MakeUp:" << endl;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			for (int i = 0; i < cars.size(); i++)
			{
				if (cars[i].seller_id == this->id)
				{
					cout << "product " << i + 1 << "  Id : " << cars[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << cars[i].name << endl;
					cout << "product " << i + 1 << "  Price : " << cars[i].price << endl;
					cout << "product " << i + 1 << "  Category Name : " << cars[i].name_cat << endl;
					cout << "product " << i + 1 << "  Category Number : " << cars[i].cat_num << endl;
					cout << "product " << i + 1 << "  Availible_quantity : " << cars[i].availible_quantity << endl;
				}
			}
			cout << "ENTER ID OF PRODUCT YOU WANT TO Remove HIM\n";
			cin >> id;
			for (int i = 0; i < cars.size(); i++)
			{
				if (id == cars[i].id)
					cars.erase(cars.begin()+i);
			}
	        for (int i = 0; i < cars.size(); i++)
			{
				if (cars[i].seller_id == this->id)
				{
					cout << "product " << i + 1 << "  Id : " << cars[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << cars[i].name << endl;
					cout << "product " << i + 1 << "  price : " << cars[i].price << endl;
					cout << "product " << i + 1 << "  Category Name : " << cars[i].name_cat << endl;
					cout << "product " << i + 1 << "  Category Number : " << cars[i].cat_num << endl;
					cout << "product " << i + 1 << "  Availible_quantity : " << cars[i].availible_quantity << endl;
				}
			}
			break;
		}
		case 2:
		{
			for (int i = 0; i < clothes.size(); i++)
			{
				if (clothes[i].seller_id == this->id)
				{
					cout << "product " << i + 1 << "  Id : " << clothes[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << clothes[i].name << endl;
					cout << "product " << i + 1 << "  Price : " << clothes[i].price << endl;
					cout << "product " << i + 1 << "  Category Name : " << clothes[i].name_cat << endl;
					cout << "product " << i + 1 << "  Category Number : " << clothes[i].cat_num << endl;
					cout << "product " << i + 1 << "  Availible_quantity : " << clothes[i].availible_quantity << endl;
				}
			}
			cout << "ENTER ID OF PRODUCT YOU WANT TO Remove HIM\n";
			cin >> id;
			for (int i = 0; i < clothes.size(); i++)
			{
				if (id == clothes[i].id)
					clothes.erase(clothes.begin() + i);
			}
			for (int i = 0; i < clothes.size(); i++)
			{
				if (clothes[i].seller_id == this->id)
				{
					cout << "product " << i + 1 << "  Id : " << clothes[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << clothes[i].name << endl;
					cout << "product " << i + 1 << " price : " << clothes[i].price << endl;
					cout << "product " << i + 1 << "  Category Name : " << clothes[i].name_cat << endl;
					cout << "product " << i + 1 << " Category Number: " << clothes[i].cat_num << endl;
					cout << "product " << i + 1 << "  Availible_quantity : " << clothes[i].availible_quantity << endl;
				}
			}
			break;
		}	
		case 3:
		{
			for (int i = 0; i < makeup.size(); i++)
			{
				if (makeup[i].seller_id == this->id)
				{
					cout << "product " << i + 1 << "  Id : " << makeup[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << makeup[i].name << endl;
					cout << "product " << i + 1 << "  Price : " << makeup[i].price << endl;
					cout << "product " << i + 1 << "  Category Name : " << makeup[i].name_cat << endl;
					cout << "product " << i + 1 << "  Category Number : " << makeup[i].cat_num << endl;
					cout << "product " << i + 1 << "  Availible_quantity : " << makeup[i].availible_quantity << endl;
				}
			}
			cout << "ENTER ID OF PRODUCT YOU WANT TO REMOVE HIM\n";
			cin >> id;
			for (int i = 0; i < makeup.size(); i++)
			{
				if (id == makeup[i].id)
					makeup.erase(makeup.begin() + i);
			}
			for (int i = 0; i < makeup.size(); i++)
			{
				if (makeup[i].seller_id == this->id)
				{
					
					cout << "product " << i + 1 << "  Id : " << makeup[i].id << endl;
					cout << "product " << i + 1 << "  Name : " << makeup[i].name << endl;
					cout << "product " << i + 1 << "  Price : " << makeup[i].price << endl;
					cout << "product " << i + 1 << "  Category Name : " << makeup[i].name_cat << endl;
					cout << "product " << i + 1 << "  Category Number : " << makeup[i].cat_num << endl;
					cout << "product " << i + 1 << "  Availible_quantity : " << makeup[i].availible_quantity << endl;
				}
				
			}
			cout << "Done ,Check Your Products Now !" << endl;
			
			break;
		}
		default:
			cout << "Unavailable Choise , Try Again\n";
			break;
	}
}




