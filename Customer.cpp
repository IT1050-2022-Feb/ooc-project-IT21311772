//IT21311772
#include <iostream>
#include <cstring>
#include customer.h
using namespace std;


class registeredCustomer:public Customer
{
    protected:
        int CID;
        
    public:
        registeredCustomer(const char Rname[], const char Raddress[], const char Remail, int Rcid);
        void displayDetails();
};

class UnregisteredCustomer:public Customer
{
    protected:
        int CID;
        
    public:
        UnregisteredCustomer(const char Uname[], const char Uaddress[], const char Uemail, int Ucid);
        void displayDetails();
};

Customer::Customer(const char CName[], const char Caddress[], const char Cemail[])
{
    strcpy(name, CName);
    strcpy(address, Caddress);
    strcpy(email, Cemail);
}

void Customer::displayDetails()
{}

registeredCustomer::registeredCustomer(const char Rname[],const char Raddress[], const char Remail, int Rcid)
{
    CID = Rcid;
}

void registeredCustomer::displayDetails()
{}
UnregisteredCustomer::UnregisteredCustomer(const char Uname[], const char Uaddress[], const char Uemail, int Ucid)
{
    CID = Ucid;
}
void UnregisteredCustomer::displayDetails()
{}

int main()
{
    Customer c1("Rishen", "Negombo", "rishen@gmail.com");
    registeredCustomer r1("Rishen","Negombo", "rishen@gmail.com", 001);
    UnregisteredCustomer u1("Lithan", "Colombo", "lithan@gmail.com", 002);
    
    cout << "Code run successfully";

    return 0;
}
