#include"Exporter.h"
#include"Product.h"
#include"Jobseeker.h"
#include"Order.h"
#include"Registered_Wholesaler.h"
#include"Unregistered_Wholesaler.h"
#include"Item.h"
#include"Client.h"
#include"Job.h"
#include"Store_Administrator.h"


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	Exporter *exporter1
	exporter1 = new Exporter();
	exporter1-> displayExporterDetails();
	
	Registered_Wholesaler *regWhosaler1;
	regWhosaler1 = new Registerd_Wholesaler();
	regWhosaler1->displayRegWholesalerDetails();
	
	UnRegistered_Wholesaler *UnregWhosaler1;
	UnregWhosaler1 = new UnRegisterd_Wholesaler();
	UnregWhosaler1->displayUnRegWholesalerDetails();
	
	Item *item1
	item1 = new Item();
	item1->displayItemDetails();
	
	Client *client1
	client1 = new Client();
	client1-> displayClientDetails();
	
	Job *job1
	job1 = new Job();
	job1-> displayJobDetails();
	
	Store_Administrator *stAd1;
	stAd1 = new Store_Administrator();
	stAd1-> displaystAdDetails();
	
	product *product1
	product1 = new product();
	product1-> displayProductDetails();
	
	JobSeeker *jobseeker1
	jobseeker1 = new JobSeeker();
	jobseeker1-> displayJobseekerDetails();
	
	Order *order1
	order1 = new Order();
	order1-> displayOrderdetails();
	
	delete exporter1;
	delete product1;
	delete jobseeker1;
	delete order1;
	
	return 0;
	
}
