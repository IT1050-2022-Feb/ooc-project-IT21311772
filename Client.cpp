#include<iostream>
#include<cstring>
using namespace std;

class Client{
protected:
    char clientName[20];
    char Address[30];
    char Email[15];
    char shipingInfo[40];
public:
   Client();
    void setregisterClient(const char cname[20], const char address[30], const char email[15], const char shipinginfo[40]);
    void displayclientDetails();
};
void Client::setregisterClient(const char cname[20], const char address[30], const char email[15], const char shipinginfo[40])
{
    strcpy_s(clientName, cname);
    strcpy_s(Address,address);
    strcpy_s(Email,email);
    strcpy_s(shipingInfo,shipinginfo);
}
void Client::displayclientDetails()
{
    cout << "-----------------------" << endl;
    cout << "Client Name=" << clientName << endl;
    cout << "Client Address=" << Address << endl;
    cout << "Client Email=" << Email << endl;
    cout << "Client ShipingInfo=" << shipingInfo << endl;
    cout << "-----------------------" << endl;
}
int main() {
    return 0;
}
