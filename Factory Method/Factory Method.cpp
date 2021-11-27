#include "Product.h"
#include "Creator.h"
void menu()
{
	cout << "1 - Create first product\n";
	cout << "2 - Create second product\n";
	cout << "0 - Exit\n";
	cout << "\nInput your choice:";
}
int main()
{
	Product* product;
	Creator* creator;
	int choice;
	menu();
	cin >> choice;

	switch (choice)
	{
	case 1:
		creator = new Creator1;
		product = creator->createProduct();
		cout<<product->doStuff();
		break;
	case 2:
		creator = new Creator2;
		product = creator->createProduct();
		cout<<product->doStuff();
		break;
	case 0: 
		cout << "Bye!\n";
		break;
	default:
		cout << "Incorrect operation, Bye!\n";
		break;
	}
	return 0;
}