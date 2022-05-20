//IT21309724
#include <string>
using namespace std;
class Item {
private:
  string itemName;
  float price;
public:
  Item(string item_name,float item_p);
  void setItemId(string item_id);
  void setItemName(string item_name);
  void setItemPrice(char itemName, float item_p);
  ~Item();  
};