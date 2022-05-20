//IT21311772
#include<cstring>
class Payment
{
    protected:
        char paytype[20];
        float amount;
        float discount;
        
    public:
        Payment(const char Ppaytype[], pamount, pdiscount);
        virtual void displayDetails();
};