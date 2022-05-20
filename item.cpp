//IT21309724
#include <iostream>
#include "item.h"

Item::Item(string item_id,string item_name,float item_p,string item_t){
  itemName = item_name;
  price = item_p; 
}
void Item::setItemName(string item_name){
  itemName = item_name;
}
void Item::setItem_price(float item_p){
  price = item_p;
}
void Item::viewItemInfo(){ 
}
Item::~Item(){
}