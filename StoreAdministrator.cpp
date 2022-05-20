#include<iostream>
#include<cstring>
using namespace std;

class Sadmin {
protected:
    char adminName[20];
    char Email[15];
public:
    Sadmin();
    void setregisterSadmin(const char aname[20],const char aemail[15]);
    void displayadminDetails();
};
void Sadmin::setregisterSadmin(const char aname[20],const char aemail[15])
{
    strcpy_s(adminName, aname);
    strcpy_s(Email,aemail);
}

void Sadmin::displayadminDetails()
{
    cout << "-----------------------" << endl;
    cout << "Sadmin Name=" << adminName << endl;
    cout << "Sadmin Email=" << Email << endl;
    cout << "-----------------------" << endl;
}
int main() {
};