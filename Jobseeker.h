//IT21309410
#include<cstring>
class JobSeeker{
	
	protected:
		int j_id;
		char jType[20];
		
	public:
		JobSeeker();
		JobSeeker(int jId, const char Type[]);
		void setJobDetails();
		void displayJobseekerDetails();
		~JobSeeker();
		
};
