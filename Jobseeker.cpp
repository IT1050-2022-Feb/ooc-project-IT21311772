//IT21309410
#include<iostream>
#include<cstring>
#include"Jobseeker.h"
using namespace std;

JobSeeker :: JobSeeker()
{
}

JobSeeker :: JobSeeker(int jId, const char Type[])
{
	j_id = jId;
	strcpy(jType,Type);
	
}
void JobSeeker :: setJobDetails()
{
}
	

void JobSeeker :: displayJobseekerDetails()
{
	
}

JobSeeker ::~JobSeeker()
{
	cout<< "Destruct" <<endl;
}

	
	//cout<<"JobSeeker ID:" <<j_id<< endl;
	//cout<<"Job Type:"<<jType<< endl;
	
	//j_id = jId;
	//strcpy(jType,Type);


/*int main()
{
	JobSeeker j1,j2;
	
	j1.setJobDetails(239,"assistant");
	j2.setJobDetails(254,"Security");
	
	j1.displayDetails();
	j2.displayDetails();
	
	return 0;
}
*/
