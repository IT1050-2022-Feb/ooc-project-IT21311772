////IT21306136
#include<iostream>
#include<cstring>
#include"Order.h"
#include"product.h"
using namespace std;

Order::Order()
{}
Order::Order(int ordId,int qty,const char type[])
{
	orderId=ordId;
	quantity=qty;
	strcpy(orderType,type);
}
void Order :: displayOrderdetails()
{}
int Order :: getOrder()
{}
Order ::~Order()
{
	cout<< "Destruct" <<endl;
}

/*int main()
 {
 	Order O1,O2,O3;
 	
 	O1.setOrder(10001,500,"Credit");
 	O2.setOrder(12002,1000,"Cash On Delivery");
 	O3.setOrder(18900,2500,"Credit");
 	
 	O1.displaydetails();
 	
 	cout<<"Order:"<< O1.getOrder()  <<endl;
 	cout<<"Your Order has confirmed"<<endl <<endl;
 	
 	O2.displaydetails();
 	
 	cout<<"Order:"<< O2.getOrder() <<endl;
 	cout<<"Your Order has confirmed"<<endl <<endl;
 	
 	O3.displaydetails();
 	
 	cout<<"Order:"<< O3.getOrder()  <<endl;
 	cout<<"Your Order has confirmed"<<endl <<endl;
 	
 	return 0;
 	
 }
 */
