//IT21311772
#include<cstring>
class Customer
{
    protected:
        char name[20];
        char address[20];
        char email[30];
        
    public:
        Customer(const char CName[], const char Caddress[], const char Cemail[]);
        virtual void displayDetails();
};