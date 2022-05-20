//IT21306136
#include<iostream>
#include<cstring>
#include"Exporter.h"
using namespace std;

Exporter:: Exporter()
{}
Exporter:: Exporter(int eId, const char Name[], float amnt)
{
	e_id = eId;
	strcpy(eName,Name);
	amount =amnt;
}
void Exporter::setExporterDetails()
{}
void Exporter::displayExporterDetails()
{}
float Exporter:: getDiscount()
{}
Exporter ::~Exporter()
{
	cout<< "Destruct" <<endl;
}	
int main()
{
	Exporter e1,e2;
	
	e1.setExporterDetails(001,"Kamal",10000);
	e2.setExporterDetails(002,"Amal",1200);
	e1.displayDetails(); 
	cout<<"BillAmount:" <<e1.getDiscount() << endl << endl;
	e2.displayDetails();
    cout<<"BillAmount:" <<e2.getDiscount() << endl << endl;
     
    return 0;
	
}



