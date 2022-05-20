//IT21306136
#include<cstring>
class Exporter{
	
	protected:
		int e_id;
		char eName[20];
		float amount;
		
	public:
		Exporter();
		Exporter(int eId, const char Name[], float amnt);
		void setExporterDetails();
		void displayExporterDetails();
		float getDiscount();
		~Exporter();
};
