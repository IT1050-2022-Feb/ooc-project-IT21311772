//IT21309410
#include<iostream>
#include<cstring>
#include"Product.h"
using namespace std;


product::product()
{
	
}

product::product(int pID, const char ptype[],int qty, float amnt)
{
	strcpy(product_type,ptype);
	product_ID = pID;
	quantity=qty;
	pPrice = amnt;
}

void product::setproducts()
{
	
}

void product::displayProductDetails()
{
	
}

product ::~product()
{
	cout<< "Destruct" <<endl;
}

//void product :: setproducts(int pID, const char ptype[], float amnt)
//{
//	strcpy(product_type,ptype);
	//product_ID = pID;
	//pPrice = amnt;
	
//}
//void product :: displayProductDetails()
//{
	//	cout<< "ProductID=" << product_ID << endl;
	//	cout<< "Product Type=" <<product_type<< endl;
	//	cout<< "ProductPrice=" << pPrice << endl;
//}


/*int main()
{
   product p1,p2;
   
    p1.setproducts(5632,"Men's wear",10000);
    p2.setproducts(5432,"Kid's wear",5000);
    
    p1.displayProductDetails();
    p2.displayProductDetails();
    
    return 0;
    
}*/
