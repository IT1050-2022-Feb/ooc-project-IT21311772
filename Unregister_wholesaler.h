//IT21309724
#include "wholesaler.h"

class Unregister_Wholesaler : public Wholesaler{
protected :
int seller_id;
public:
Unregister_Wholesaler();
Wholesaler(const char name[], const char addr[], int cont_no);
