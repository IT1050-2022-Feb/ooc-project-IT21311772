//IT21309724
#include <iostream>
#include "wholesaler.h"
#include <cstring>
using namespace std;

Wholesaler()::Wholesaler(){ 
}

Wholesaler()::Wholesaler(const char name[], const char addr[], int cont_no){
  strcpy(w_name,name);
  strcpy(address,addr);
  contact_no=cont_no;
}
void Wholesaler::displayDetails(){
}

//float Wholesaler::getDiscount(){
 // return Discount;
//}


