#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
	private:
		int pcode;
		float price;
		float dis;
		string pname;

		public:
			void menu();
			void administrator();
			void buyer();
			void add();
			void edit();
			void res();
			void list();
			void receipt();

};

//Can I make header files and cpp files for each function and then call them here
void shopping :: menu()
{
	beginning:

	int choice;
	string email;
	string password;

	cout<<"\t\t\t\t_________________________\n";
	cout<<"\t\t\t\t                         \n";
	cout<<"\t\t\t\t Supermarket Main Menu   \n";
	cout<<"\t\t\t\t_________________________\n";
	cout<<"\t\t\t\t                         \n";
	cout<<"\t\t\t\t|   1) Administrator |\n";
	cout<<"\t\t\t\t					    |\n";
	cout<<"\t\t\t\t|   2) Buyer         |\n";
	cout<<"\t\t\t\t|                    |\n";
	cout<<"\t\t\t\t|   3) Exit          |\n";
	cin>>choice;

	switch (choice)
	{
	case 1:
		cout<<"\t\t\t Please login using your credentials  \n";
		cout<<"\t\t\t Enter Email   \n";
		cin>>email;
		cout<<"\t\t\t Password   \n";
		cin>>password;

		//I could do a function that creates new admins from already created ones and access it to check the status
		if(email == "robby@email.com" && password == "robby@123") 
		{
			administrator();
		}
		else
		{
			cout << "Invalid email/password";
		}
		break;
	
	case 2:
		buyer();
		break;
	
	case 3:
		exit(0);
		break;
	
	default:
		cout << "Please select from the given options";
		
		break;
	}
goto beginning;
}

void shopping :: administrator()
{

	beginning:

	int choice;
	cout<<"\n\n\n\t\t\t   Administrator menu";
	cout<<"\n\t\t\t|_____1) Add the product______|";
	cout<<"\n\t\t\t|                             |";
	cout<<"\n\t\t\t|_____2) Modify the product___|";
	cout<<"\n\t\t\t|                             |";
	cout<<"\n\t\t\t|_____3) Delete the product___|";
	cout<<"\n\t\t\t|                             |";
	cout<<"\n\t\t\t|_____4) Back to main menu____|";

	switch (choice)
	{
	case 1:
		add();
		break;
	
	case 2:
		edit();
		break;

	case 3:
		res();
		break;
	
	case 4:
		menu();
		break;

	default:
		cout << "Please select a valid option";
		break;
	}
	goto beginning;
}

void shopping :: buyer()
{
	int choice;
	cout <<"\t\t\t   Buyer \n";
	cout <<"\t\t\t____________              \n";
	cout <<"                  \n ";
	cout <<"\t\t\t  1) Buy Product    \n";
	cout <<"                                \n";
	cout <<"\t\t\t  2) Go back         \n";
	cout <<"\t\t\t Enter your choice : ";
	//TODO Finish the video youtube.com/watch?v=FwwN4lGG0o
}