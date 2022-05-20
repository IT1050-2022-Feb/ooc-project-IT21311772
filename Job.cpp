#include<iostream>
#include<cstring>
using namespace std;

class Job {
protected:
    char jobName[20];
public:
    Job();
    void setsearchJob(const char jname[20]);
    void displayjobDetails();
};
void Job::setsearchJob(const char jname[20])
{
    strcpy_s(jobName,jname);
}
void Job::displayjobDetails()
{
    cout << "-----------------------" << endl;
    cout << "Job Name=" << jobName << endl;
    cout << "-----------------------" << endl;
}
int main() {
};