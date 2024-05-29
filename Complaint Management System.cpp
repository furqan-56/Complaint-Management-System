#include <iostream>
#include <stdlib.h>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

class complaint
{
public:
	void customer_StoreComplaint();
	void admin_menu();
    	void create_complaint();
	void print_complaint();
	void view_complaint();
	void exit();

	complaint();
};
 complaint::complaint ()
{

}

struct node
{
	int complaint_number;
	string customerName;
	string date;
	string x;

	node *prev;
	node *next;
	node *link;

}*q, *temp;


node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;

int main()
{
	complaint admin;
	int option;
	do
	{
	cout<<"\n";
    cout<<" ================================================\n";
	cout<<"|           Complaint Management System          |\n";
	cout<<" ================================================\n\n\n";

	cout<<"-------------------------------------------------\n";
	cout<<"|\t1. Customer \t\t\t\t|\n";
	cout<<"-------------------------------------------------\n";
	cout<<"-------------------------------------------------\n";
	cout<<"|\t2. Administrator \t\t\t|\n";
	cout<<"-------------------------------------------------\n";
	cout<<"-------------------------------------------------\n";
	cout<<"|\t3. EXIT \t\t\t\t|\n";
	cout<<"-------------------------------------------------\n\n";

    cout<<"Input an option: ";
	cin>>option;
	switch(option)
	{
		case 1:
			admin.customer_StoreComplaint();
			break;
		case 2:
			admin.admin_menu();
			break;
		case 3:
			admin.exit();
			goto a;
			break;
	}

	}while(option!=3);
		a:
		cout<<"thank you"<<endl;
		system ("PAUSE");

}

void complaint::customer_StoreComplaint()
{
	system("cls");
	cout<<"\n";
    cout<<" ================================================\n";
    cout<<"|            Complaint Management System         |\n";
	cout<<" ================================================\n\n\n";
	cout <<"\nAdd Your Complaint Details\n";
	cout <<"________________________________\n\n";

	node *temp;
	temp = new node;
	cout << "Type Complaint no: ";
    cin >> temp->complaint_number;
	cout<< "Enter Your Name: ";
	cin.ignore();
	getline(cin, temp->customerName);
	cout<<"Enter Date : ";
	cin>>temp->date;
	cout << "Complaint Description:";
	cout<<"( 1000 words maximum ) \n";
	cin.ignore();
	getline(cin, temp->x);

	cout<<"==========================================================================="<<endl;
    cout << "Complaint added Successfully"<<endl;
    cout<<"==========================================================================="<<endl;

	system ("PAUSE");

    temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
}
void complaint::admin_menu()
{
	complaint admin;
	int menu;
	string userName, userPassword;

	system("cls");
	cout<<"\n";
    	cout<<" ===================================================\n";
        cout<<"|            Complaint Management System            |\n";
        cout<<" ===================================================\n\n\n";
    	cout<<" ---------------------------------------------------\n";
    	cout<<"|            Administrator / Staff Login            |\n";
    	cout<<" ---------------------------------------------------\n\n";
    	cout << "\nPlease enter your username: ";
    	cin >> userName;
    	cout << "\nPlease enter your user password: ";
    	cin >> userPassword;

    	if (userName == "furqan_56" && userPassword == "221427")
    	{
    	do
	{
        	system("cls");
        	cout<<"\n";
        cout<<" ===================================================\n";
		cout<<"|           Complaint Management System          |\n";
		cout<<" ===================================================\n\n\n";
		cout<<"--------------------------------------------------\n";
		cout<<"||\t1. Create a Complaint \t\t\t ||\n";
		cout<<"||\t2. View Complaint\t\t\t ||\n";
		cout<<"||\t3. Print the complaint \t\t\t ||\n";
		cout<<"||\t4. Logout\t\t\t\t ||\n";
		cout<<"--------------------------------------------------\n";
		cout<<"Enter choice: ";

		cin>>menu;

		switch (menu)
		{
			case 1:
			{
				admin.create_complaint();
				break;
			}
			case 2:
			{
				admin.view_complaint();
				system("PAUSE");
				break;
			}
			case 3:
			{
				admin.print_complaint();
				system("PAUSE");
				break;
			}
        	case 4:
			{
				cout<<"You are Logged Out...!\n\n\n\n";
				system ("PAUSE");
				admin.admin_menu();
				break;
			}

		}   //end Switch
		}
		while(menu!=4);	//end do
		cout<<"thank you"<<endl;
		system ("PAUSE");
	}
	else
	{
           cout << "\n\n\t\tInvalid login attempt. Please try again.\n" << '\n';
           system("PAUSE");
           system ("cls");
           admin.admin_menu();
    }
}
void complaint::create_complaint()
{
	system("cls");
	cout<<"\n";
    cout<<"\t\t ================================================\n";
	cout<<"\t\t|           Complaint Management System          |\n";
	cout<<"\t\t ================================================\n\n\n";
	cout <<"\nAdd Complaint Details of Customer\n";
	cout <<"_____________________________________ \n\n";

	node *temp;
	temp = new node;
	cout << "Type Complaint no: ";
    cin >> temp->complaint_number;
	cout<< "Enter Customer Name: ";
	cin.ignore();
	getline(cin, temp->customerName);
	cout<<"Enter Date : ";
	cin>>temp->date;
	cout <<"Complaint Description ";
	cout<<"( 1000 words maximum ) :\n\n";
	cin.ignore();
	getline(cin, temp->x);

	cout<<"==========================================================================="<<endl;
    cout << "Complaint added Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "Go to Print Complaint to print the Complaint"<<endl;
    cout<<"==========================================================================="<<endl;
	system ("PAUSE");

    temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
}
void complaint::view_complaint()
{
	int num;
	bool found;			//variable to search
	system("cls");
	node *temp;

	temp=start_ptr;
	found = false;
	cout<<"\n";
    cout<<" ================================================\n";
	cout<<"|           Complaint Management System          |\n";
	cout<<" ================================================\n\n\n";
	cout<<"Enter the Complaint Number To Look into The Complaint Details : ";
	cin>>num;
	cout<<"\n";
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout <<"\t\tHere is the Complaint list\n";
	cout<<"---------------------------------------------------------------------------"<<endl;

	if(temp == NULL)
	{
		cout<<"\nThere is no Complaint to show\nSo The List is Empty\n\n\n";
	}
	while(temp !=NULL && !found)
	{
		if (temp->complaint_number==num)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
        if (found)
        {
		cout <<"Complaint Number : "<<temp->complaint_number;
		cout <<"\n";
		cout<<"Customer Name: "<<temp->customerName<<endl;

		cout<<"Complain Date : "<<temp->date<<endl;

		cout<<"_____________________________________________________________________________"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"|Complaint description: |"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<temp->x;

		cout <<"\n";
		cout<<"_____________________________________________________________________________"<<endl;
		}
		}	
}
void complaint::print_complaint()
{
	int num;
	bool found;
	system("cls");
	ofstream outputFile;
	outputFile.open("prototype.txt");
	node *temp;

	temp=start_ptr;
	found = false;
 	cout<<"\n";
 	cout<<" ================================================\n";
 	cout<<"|           Complaint Management System          |\n";
 	cout<<" ================================================\n\n\n";
 	outputFile<<"\n";
 	outputFile<<" ================================================\n";
 	outputFile<<"|           Complaint Management System          |\n";
 	outputFile<<" ================================================\n\n\n";
	cout<<" Enter the Complaint Number To Print The Complaint Details\n";
	cin>>num;
	cout<<"\n";
	cout<<"--------------------------------------------------------"<<endl;
	cout <<"               Here is the Complaint list\n";
	cout<<"--------------------------------------------------------"<<endl;


	if(temp == NULL)
	{
		cout << "There is no Complaint to show\nSo The List is Empty\n\n\n";
	}
	while(temp !=NULL && !found)
	{
		if (temp->complaint_number==num)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
        if (found)
        {
			cout <<"Complaint Number : "<<temp->complaint_number;
			outputFile << "Complaint Number : "<<temp->complaint_number << endl;
			cout <<"\n";
			cout<<"Customer Name: "<<temp->customerName<<endl;
			outputFile << "Customer Name: "<<temp->customerName<<endl;
			cout<<"Order Date : "<<temp->date<<endl;
			outputFile << "Order Date : "<<temp->date<<endl;
			cout<<"____________________________________________________________________________"<<endl;
			outputFile << "____________________________________________________________________________"<<endl;
			cout<<"Complaint description: "<<endl;
			outputFile << "Complaint description: "<<endl;
			cout<<"----------------------"<<endl;
			outputFile<<"------------------------------------------------------------------------------"<<endl;
			cout<< temp->x;
			outputFile << temp->x<<endl;
			cout <<"\n";
			cout<<"____________________________________________________________________________"<<endl;
			outputFile << "____________________________________________________________________________"<<endl;

			temp=temp->next;

		}
		outputFile.close();
		cout << "Complaint Printed Succesfully....!\n";
}
}
void complaint::exit()
{
	cout<<"\nYou choose to exit.\n"<<endl;
}
