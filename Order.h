//IT21306136
class Order{
	
	protected:
		int orderId;
		int quantity;
		char orderType[20];
		
	public:
		Order();
		Order(int ordId, int qty,const char type[]);
		void setOrder();
		void displayOrderdetails();
		int getOrder();
		~Order();
};

