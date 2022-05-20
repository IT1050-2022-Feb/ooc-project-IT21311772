//IT21311772
#include <iostream>
#include <cstring>
using namespace std;

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

Payment::payment(const char Ppaytype[], pamount, pdiscount)
{
    strcpy(name, Ppaytype);
    amount = Ppaytype;
    discount = pdiscount;
}

void Payment::displayDetails()
{}

int main()
{
    Payment p1 ("COD", 2000.00, 150.00);

    cout << "Code run successfully";
    return 0;
}