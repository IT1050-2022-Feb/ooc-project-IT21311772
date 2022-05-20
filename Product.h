//IT21309410
class product{
	
	protected:
		int product_ID;
		char product_type[20];
		int quantity;
		float pPrice;
		
	public:
		product();
		product(int pID, const char ptype[], int qty, float amnt);
		void setproducts();
		void displayProductDetails();
		~product();
};
