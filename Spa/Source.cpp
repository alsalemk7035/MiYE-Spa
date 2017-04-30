#include<iostream>
#include<fstream>
#include<windows.h>
#include<string>
#include<time.h>
using namespace std;

struct Name              // structure for naming in program
{
	char first[20];       //character arrays for the names used in program..
	char last[20];
	char date[20];
	int  room;
	char mob[20];
};
struct Name2              // structure for naming in program
{
	int  C_ID;			//character arrays for the names to reserv a spa
	char first[20];
	char last[20];
	char date[20];
};
//\\Functions prototyping//\/\\
            
void vacant_rooms();                //for vacant rooms|
void customer_reserve();           //for reservation  |
void check();                    //for the viewing guest history
void user_total();                                //for user total on the time checkout
void del_resdata();                            // in order delete
void spa_reseve();				// for spa reservations
void del_spadata();				// for deleting spa reservations
void spa_check();				// for viewing spa reservations history

											   //------------------------.>//


int main()
{

	int a;
	
	char again;
	
	cout << endl;
	cout << "            *                                 *    " << endl;
	cout << "          **                                   **   " << endl;
	cout << "   *** Welcome to the Hotel Reservation Application ***" << endl;
	cout << "          **                                   **  " << endl;
	cout << "            *                                 *   " << endl;
	cout << endl;



	do
	{
		cout << "Welcome to the Main Menu " << endl;
		cout << endl;
		cout << "Press 1 to reserve a room. " << endl;
		cout << endl;
		cout << "Press 2 to see the vacant rooms. " << endl;
		cout << endl;
		cout << "Press 3 to check out a room. " << endl;
		cout << endl;
		cout << "Press 4 to see the history of reserved rooms. " << endl;
		cout << endl;
		cout << "Press 5 to delete room reservation data. " << endl;
		cout << endl;
		cout << "Press 6 to make spa Reservation. " << endl;
		cout << endl;
		cout << "Press 7 to see the history of reserved spa services. " << endl;
		cout << endl;
		cout << "Press 8 to delete spa reservation data. " << endl;
		cout << endl;
		cout << "Press 0 to Exit application. " << endl;
		cout << endl;
		cout << "Please Enter your choice Here: ";
		cin >> a;
		cout << "_____________________________________" << endl;
		cout << endl;
		switch (a)
		{
			cout << "________________________________________" << endl;
		case 0:
			break;
		case 1:
			cout << "     *                           *" << endl;
			cout << " ** Welcome to the Reservation Menu **" << endl;
			cout << "     *                           *" << endl;
			cout << endl;
			cout << endl;
			customer_reserve();     // funtion calling
			break;
		case 2:
			cout << "      *                       *" << endl;
			cout << "  ** Welcome to the Vacant Rooms **" << endl;
			cout << "      *                       *" << endl;
			cout << endl;
			cout << endl;
			vacant_rooms();    ///funtion calling
			break;
		case 3:
			cout << "    *                          *" << endl;
			cout << "** Welcome to the User Total Menu **" << endl;
			cout << "    *                          *" << endl;
			cout << endl;
			cout << endl;
			user_total();    //function calling   
			break;
		case 4:
			cout << "    *                       *" << endl;
			cout << "** Welcome to the History Menu **" << endl;
			cout << "    *                       *" << endl;
			cout << endl;
			cout << endl;

			check();    //function calling           
			break;
		case 5:
			cout << "        *                                             *" << endl;
			cout << "    ** Welcome to delete room reservations data function **" << endl;
			cout << "        *                                             *" << endl;
			cout << endl;
			cout << endl;
			del_resdata();    //function calling
			break;
		case 6:
			cout << "        *                      *" << endl;
			cout << "    ** Welcome to Spa Reservation **" << endl;
			cout << "        *                      *" << endl;
			cout << endl;
			cout << endl;
			spa_reseve();    //function calling
			break;
		case 7:
			cout << "    *                                                 *" << endl;
			cout << "** Welcome to the history menu for reserved spa services **" << endl;
			cout << "    *                                                 *" << endl;
			cout << endl;
			cout << endl;

			spa_check();    //function calling           
			break;
			del_spadata();    //function calling
			break;
		case 8:
			cout << "        *                                            *" << endl;
			cout << "    ** Welcome to delete spa reservations data function **" << endl;
			cout << "        *                                            *" << endl;
			cout << endl;
			cout << endl;
			del_spadata();    //function calling
			break;
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
		}
		cout << "Press 1 to go back into MAIN Menu or 0 to terminate the program: ";
		cin >> again;
		cout << "___________________________________" << endl;
		cout << endl;
	} while (again == '1');
	cout << "Thankyou! for using Hotel Reservation application." << endl;
	cout << "Have a nice day! " << endl;
	cout << endl;
	cout << "_________________________________________" << endl;

	system("pause");
}
//....................................................................//

//....................................................................//
void user_total()   //funtion definition to calculate the bill
{
	int choice, days, total1;
	int single = 175;
	int doubl = 325;
	int quadruple = 600;
	char again;
	do
	{
		cout << "Which kind of Room did the guest stayed in?  " << endl;
		cout << endl;
		cout << " 1.Single Rooms " << endl;
		cout << endl;
		cout << " 2.Double Rooms " << endl;
		cout << endl;
		cout << " 3.Quadruple " << endl;
		cout << endl;

		cout << "Select 1,2 or 3 . " << endl;
		cout << endl;
		cout << "Enter Your CHoice Here_: ";
		cin >> choice;
		cout << "__________________________________" << endl;
		switch (choice)
		{
		case 1:
			cout << "You have Selected single room. " << endl;
			cout << endl;
			cout << " For How many days did the guest stayed: ";
			cin >> days;
			cout << endl;

			total1 = single*days;
			cout << "Your Total Total bill + service tax = (" << total1 << " USD.)" << endl;
			cout << endl;
			cout << "______________________________" << endl;

			break;
		case 2:
			cout << "You Have Selected Double room." << endl;
			cout << endl;
			cout << " For How many days did the guest stayed: ";
			cin >> days;
			cout << endl;

			total1 = doubl*days;
			cout << "Your Total Total bill + service tax = (" << total1 << " USD.)" << endl;
			cout << endl;
			cout << "______________________________" << endl;
			break;
		case 3:
			cout << "You Have Selected Quadruple. " << endl;
			cout << endl;
			cout << " For How many days did the guest stayed: ";
			cin >> days;
			cout << endl;
			total1 = quadruple*days;
			cout << "Your Total Total bill + service tax = (" << total1 << " USD.)" << endl;
			cout << endl;
			cout << "______________________________" << endl;
			break;
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
		}
		cout << "Do you want to checkout for another room? (Y/N): ";
		cin >> again;
		cout << "___________________________________" << endl;
		cout << endl;
	} while (again == 'y' || again == 'Y');

}
//....................................................................//

//....................................................................//
void spa_reseve()    //function definition 
{

	Name2 spa_guest;             // guest is the name structure
	char choicedo;       //for entering more data 
	int type=0;
	char again=0;
	int  spa_service=0;
	double price = 0;
	double duration = 0;
	char res_time [20];
	char res_date[20];
	string ch_service = "";
	string ch_type= "";


	do
	{
		ofstream file;
		file.open("Spa Customers.txt", ios::out | ios::app);  //openning txt file 
		if (!file)
		{
			cout << "Error: Cannot open file.\n";
			system("pause");
		}

		cout << "Enter Customer ID: ";
		cin >> spa_guest.C_ID;
		cin.ignore();                       // to skip the new line character
		cout << endl;
		cout << "Enter Guest's First Name: ";
		cin.getline(spa_guest.first, 20);
		cout << endl;
		cout << "Enter Guest's Last Name: ";
		cin.getline(spa_guest.last, 20);
		cout << endl;
		cout << "Enter Todays Date: ";
		cin.getline(spa_guest.date, 20);
		cout << endl;
		cout << "Choose the spa service: " << endl;
		cout << "1. Meneral ";
		cout << endl;
		cout << "2. Massages ";
		cout << endl;
		cout << "3. Facial ";
		cout << endl;
		cout << "4. Speciality treatments " << endl;
		cout << endl;
		cout << "Select 1,2,3 or 4 . " << endl;
		cin>> spa_service;
		switch (spa_service)
		{
		case 1:
			ch_service = "Mineral Baths";
			cout << "You have Selected mineral bath " << endl;
			cout << endl;
			cout << "When do you want to reserve? " << endl;
			cout << endl;
			cout << "Enter the date here: "; cin >> res_date;
			cout << endl;
			cout << "what time do you want to have your service " << endl;
			cout << endl;
			cout << "Enter the time here: "; cin >> res_time;
			cout << endl;
			cout << "Do you want to reserve this service for 60 mins or 90 mins?";
			cout << endl;
			cout << "Enter the duaration here: "; cin >> duration;
			cout << endl;
			if (duration == 60 || duration == 90)
			{
				price = duration*2.50;
				cout << "Your bill for this service will be: $ " << price;
				cout << endl;
			}
			else 
			{
				cout << "you have entered invalid duration ";
				cout << endl;
				return;
			}
			cout << endl;
			cout << "______________________________" << endl;

			break;
		case 2:
			ch_service = "Massages";
			cout << "You have selected massages." << endl;
			cout << endl;
			cout << " What type of massage do you want: " << endl;
			cout << endl;
			cout << "1. Swedish " << endl;
			cout << endl;
			cout << "2. Shiatsu " << endl;
			cout << endl;
			cout << "3. deep tissue " << endl;
			cout << endl;
			cout << "Please select 1,2 or 3 " << endl;
			cout << endl;
			cin >> type;
			cout << endl;
			if (type == 1)
			{
				cout<<"You have chosen swedish massage";
				cout << endl;
				ch_type = "Swedish Massage";
			}
			else if (type == 2)
			{
				cout<< "You have chosen shiatsu massage";
				cout << endl;
				ch_type = "Shiatsu Massage";
			 if (type == 3)
			{
				cout<<"You have chosen deep tissue massage";
				cout << endl;
				ch_type = "Deep Tissue Massage";
			}
			else
			{
				cout << "Sorry! You have entered invalid choice" <<endl;
			}
			 cout << endl;
			 cout << "When do you want to reserve? " << endl;
			 cout << endl;
			 cout << "Enter the date here: "; cin >> res_date;
			 cout << endl;
			 cout << "what time do you want to have your service " << endl;
			 cout << endl;
			 cout << "Enter the time here: "; cin >> res_time;
			 cout << endl;
			 cout << "Do you want to reserve this service for 30 mins or 60 mins?";
			 cout << endl;
			 cout << "Enter the duaration here: "; cin >> duration;
			 cout << endl;
			 if (duration == 60 || duration == 30)
			 {
				 price = duration*3;
				 cout << "Your bill for this service will be: $ " << price;
				 cout << endl;
			 }
			 else
			 {
				 cout << "you have entered invalid duration ";
				 cout << endl;
				 return;
			 }
			cout << "______________________________" << endl;
			break;
		case 3:
			ch_service = "Facials";
			cout << "You have selected facial. " << endl;
			cout << endl;
			cout << " what type of facial services do you want " << endl;
			cout << endl;
			cout << "1. Normal " << endl;
			cout << endl;
			cout << "2. Collagen " << endl;
			cout << endl;
			cout << "Please select 1 or 2 " << endl;
			cout << endl;
			cin >> type;
			cout << endl;

			if (type == 1)
			{
				cout<< "You have chosen to do the normal facial";
				cout << endl;
				ch_type = "Normal Facial";
			}
			else if (type == 2)
			{
				cout<< "You have chosen to do collagen facial";
				cout << endl;
				ch_type = "Collagen Facial";
			}
			else
			{
				cout << "Sorry! You have entered invalid choice" << endl;
			}
			cout << endl;
			cout << "When do you want to reserve? " << endl;
			cout << endl;
			cout << "Enter the date here: "; cin >> res_date;
			cout << endl;
			cout << "what time do you want to have your service " << endl;
			cout << endl;
			cout << "Enter the time here: "; cin >> res_time;
			cout << endl;
			cout << "Do you want to reserve this service for 30 mins or 60 mins?";
			cout << endl;
			cout << "Enter the duaration here: "; cin >> duration;
			cout << endl;
			if (duration == 60 || duration == 30)
			{
				price = duration * 2;
				cout << "Your bill for this service will be: $ " << price;
				cout << endl;
			}
			else
			{
				cout << "you have entered invalid duration ";
				cout << endl;
				return;
			}
			cout << "______________________________" << endl;
			break;
		case 4:
			ch_service = "Speciality Treatment";
			cout << "You Have Selected speciality treatment. " << endl;
			cout << endl;
			cout << " What type of treatment do you want: " << endl;
			cout << endl;
			cout << "1. hot stone " << endl;
			cout << endl;
			cout << "2. sugar scrub " << endl;
			cout << endl;
			cout << "3. herbal body wrap " << endl;
			cout << endl;
			cout << "4. botanical mud wrap " << endl;
			cout << endl;
			cout << "Please select 1,2,3 or 4 " << endl;
			cout << endl;
			cin >> type;
			cout << endl;
			if (type == 1)
			{
				cout<< "You have chosen hot stone treatment";
				cout << endl;
				ch_type = "Hot Stone Treatment";
			}
			else if (type == 2)
			{
				cout<< "You have chosen sugar scrub treatment";
				cout << endl;
				ch_type = "Sugar Scrub Treatment";
			 if (type == 3)
			{
				cout<< "You have chosen herbal body wrap treatment";
				cout << endl;
				ch_type = "Herbal Body Wrap Treatment";
			}
			else if (type == 4)
			{
				ch_type = "Botanical Mud Wrap Treatment";
				cout<< "You have chosen botanical mud wrap treatment";
				cout << endl;	
			}
			else
			{
				cout << "Sorry! You have entered invalid choice";
				return;
			}
			 
			 
			cout << "______________________________" << endl;
			break;
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
			return;
			
		}
			cout << endl;
			cout << "When do you want to reserve? " << endl;
			cout << endl;
			cout << "Enter the date here: "; cin >> res_date;
			cout << endl;
			cout << "what time do you want to have your service " << endl;
			cout << endl;
			cout << "Enter the time here: "; cin >> res_time;
			cout << endl;
			cout << "Do you want to reserve this service for 60 mins or 90 mins?";
			cout << endl;
			cout << "Enter the duaration here: "; cin >> duration;
			cout << endl;
			if (duration == 60 || duration == 90)
			{
				price = duration * 3.50;
				cout << "Your bill for this service will be: $ " << price;
				cout << endl;
			}
			else
			{
				cout << "you have entered invalid duration ";
				cout << endl;
				return;
			}
			}        
}
		

cout << endl;
		int a;                            ///for choice
										  /////////////
		cout << "Press 1 to Save or 2 to cancel: ";
		cout << endl;
		cin >> a;
		if (a == 1)
		{
			cout << endl;
			file << " Spa Services Info" << endl;
			cout << endl;
			file << "------------------------------------------------------------" << endl;
			file << endl;
			file << "Reservation Data of ID no.: " << spa_guest.C_ID << endl;
			file << endl;
			file << "The Name of the Guest is: " << spa_guest.first << " " << spa_guest.last << endl;
			file << endl;
			file << "Spa service:" << ch_service <<"	" <<"Service Type: " << ch_type << endl;
			file << endl;
			file << "Reservation Date: " << res_date << "	" << "Reservation Time: " << res_time << endl;
			file << endl;
			file << "Price: $ " << price << endl;
			file << endl;
			file << "Date when service was reserved: " << spa_guest.date <<endl;
			file << endl;
			file << endl;
			file << "------------------------------------------------------------" << endl;
			file.close();
			cout << "Record Saved..." << endl;
			cout << "__________________________________" << endl;
			cout << endl;
		}
		else
		{
			cout << "Record Was Not Saved" << endl;
			cout << "____________________________________" << endl;
			cout << endl;
		}
		cout << "Enter Y To input another data or Enter N to Exit: ";
		cin >> choicedo;
		cout << "_____________________________________" << endl;
		cout << endl;
	} while (choicedo == 'y' || choicedo == 'Y');  //to enter more data
												   //}          
}


//....................................................................//

//....................................................................//
void customer_reserve()    //function definition 
{

	Name guest;             // guest is the name structure
	Name guest2;
	char choicedo;       //for enter more data 

	do
	{
		ofstream file;
		file.open("User info input.txt", ios::out | ios::app);  //openning txt file 
		if (!file)
		{
			cout << "Error: Cannot open file.\n";
			system("pause");
		}

		cout << "Enter The Room # to be Reserved: ";
		cin >> guest.room;
		cin.ignore();                       // to skip the new line character
		cout << endl;
		cout << "Enter Guest's First Name: ";
		cin.getline(guest.first, 20);
		cout << endl;
		cout << "Enter Guest's Last Name: ";
		cin.getline(guest.last, 20);
		cout << endl;
		cout << "Enter The Mobile no. of The Customer: +";
		cin.getline(guest.mob, 20);
		cout << endl;
		cout << "The Name of Manager in Charge: ";
		cin.getline(guest2.first, 20);
		cout << endl;
		cout << endl;
		cout << "Date: ";
		cin.getline(guest.date, 20);
		cout << endl;
		int a;                            ///for choice
										  /////////////
		cout << "Press 1 to Save or 2 to cancel: ";
		cout << endl;
		cin >> a;
		if (a == 1)
		{
			cout << endl;
			file << " Guests Info" << endl;
			cout << endl;
			file << "------------------------------------------------------------" << endl;
			file << endl;
			file << "Reservation Data of Room no.: " << guest.room << endl;
			file << endl;
			file << "The Name of the Guest is: " << guest.first << " " << guest.last << endl;
			file << endl;
			file << "Mobile No.: +" << guest.mob << endl;
			file << endl;
			file << "Name of Manager in Charge is: " << guest2.first << endl;
			file << endl;
			file << "Date: " << guest.date << endl;
			file << endl;
			file << endl;
			file << "------------------------------------------------------------" << endl;
			file.close();
			cout << "Record Saved..." << endl;
			cout << "__________________________________" << endl;
			cout << endl;
		}
		else
		{
			cout << "Record Was Not Saved" << endl;
			cout << "____________________________________" << endl;
			cout << endl;
		}
		cout << "Enter Y To input another data or Enter N to Exit: ";
		cin >> choicedo;
		cout << "_____________________________________" << endl;
		cout << endl;
	} while (choicedo == 'y' || choicedo == 'Y');  //to enter more data
												   //}          
}


//....................................................................//

//....................................................................//

void vacant_rooms()    //function definition
{
	ifstream infile, infile2, infile3;           //ifstream for file reading
	char name[89], name2[89], name3[89];
	int see;
	char again;
	do
	{
		cout << "Press 1 to see the list of Single Rooms. " << endl;
		cout << endl;
		cout << "Press 2 to See the list of Double Rooms. " << endl;
		cout << endl;
		cout << "Press 3 to See the list of Quadruple. " << endl;
		cout << endl;
		cout << "Enter Your Choice Here_: ";
		cin >> see;
		cout << endl;
		switch (see)
		{
		case 1:
			infile.open("infoVS.txt", ios::in);
			if (!infile)
			{
				cout << "File not found." << endl;
				exit(1);
			}
			else
			{
				while (!infile.eof())
				{
					infile >> name >> name2 >> name3;
					cout << name << " " << name2 << " " << name3 << endl;


					cout << endl;
				}
				infile.close();        //closing the file
			}
			break;
		case 2:

			infile2.open("infoVD.txt", ios::in);
			if (!infile2)
			{
				cout << "File not found." << endl;
				exit(1);
			}
			else
			{
				while (!infile2.eof())
				{
					infile2 >> name >> name2 >> name3;
					cout << name << " " << name2 << " " << name3 << endl;
					cout << endl;
				}
				infile2.close();
			}
			break;

		case 3:

			infile3.open("infoVQ.txt", ios::in);    // opening file
			if (!infile3)
			{
				cout << "File not found." << endl;
				exit(1);
			}
			else
			{

				while (!infile3.eof())
				{
					infile3 >> name >> name2 >> name3;
					cout << name << " " << name2 << " " << name3 << endl;
					cout << endl;
				}


				infile3.close();
			}
			break;

		default:
			cout << "You have entered an invalid choice" << endl;
			cout << endl;
		}
		cout << "Do you want to see the List of vacant Rooms again? (Y/N): ";
		cin >> again;
		cout << endl;
	} while (again == 'Y' || again == 'y');
	cout << endl;
}

//....................................................................//

//....................................................................//


//....................................................................//
//function for viewing spa reservation history
//....................................................................//
void spa_check() /// function definition
{

	char doagain;
	do
	{
		fstream data;
		char word[100];

		data.open("Spa Customers.txt", ios::in);
		cout << endl;
		if (!data)
		{
			cout << "File not found." << endl;
			exit(1);
		}
		else
		{
			while (!data.eof())
			{

				data.getline(word, 100);
				cout << word << "\n";
				data.getline(word, 100);
				cout << word << "\n";
				data.getline(word, 100);
				cout << word << "\n";
				data.getline(word, 100);
				cout << word << "\n";
			}
			data.close();
			cout << "Press Y to see the history again or N to cancel.";
			cin >> doagain;
			cout << "___________________________________" << endl;
			cout << endl;
		}
	} while (doagain == 'y' || doagain == 'Y');
}

//....................................................................//
//function for viewing room reservation history
//....................................................................//
void check()    /// function definition
{

	char doagain;
	do
	{
		fstream data;
		char word[100];

		data.open("User info input.txt", ios::in);
		cout << endl;
		if (!data)
		{
			cout << "File not found." << endl;
			exit(1);
		}
		else
		{
			while (!data.eof())
			{

				data.getline(word, 100);
				cout << word << "\n";
				data.getline(word, 100);
				cout << word << "\n";
				data.getline(word, 100);
				cout << word << "\n";
				data.getline(word, 100);
				cout << word << "\n";
			}
			data.close();
			cout << "Press Y to see the history again or N to cancel.";
			cin >> doagain;
			cout << "___________________________________" << endl;
			cout << endl;
		}
	} while (doagain == 'y' || doagain == 'Y');
}

//....................................................................//
//Function for deleting spa data 
//....................................................................//

void del_spadata()		///function definition
{
	char again;
	int x;
	fstream deletefile;
	do
	{
		cout << "Enter 1 to delete the spa reservation data or 2 to cancel: ";
		cin >> x;
		cout << endl;
		if (x == 1)
		{
			deletefile.open("Spa Customers.txt", ios::out | ios::trunc); //trunc for delete data 
			if (!deletefile)
			{
				cout << "File not found." << endl;
				exit(1);
			}
			else
			{
				cout << "Data has been deleted from the file." << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Data not deleted.." << endl;
			cout << endl;
		}
		cout << "Enter Y to run this function again or N to cancel: ";
		cin >> again;
		cout << endl;
		cout << "_____________________________________________" << endl;
	} while (again == 'Y' || again == 'y');
	deletefile.close();
}
						
//....................................................................//
//Function for deleting room reservation data 
//....................................................................//

void del_resdata()    ///function definition
{
	char again;
	int x;
	fstream deletefile;
	do
	{
		cout << "Enter 1 to delete the reservation data or 2 to cancel: ";
		cin >> x;
		cout << endl;
		if (x == 1)
		{
			deletefile.open("User info input.txt", ios::out | ios::trunc); //trunc for delete data 
			if (!deletefile)
			{
				cout << "File not found." << endl;
				exit(1);
			}
			else
			{
				cout << "Data has been deleted from the file." << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Data not deleted.." << endl;
			cout << endl;
		}
		cout << "Enter Y to run this function again or N to cancel: ";
		cin >> again;
		cout << endl;
		cout << "_____________________________________________" << endl;
	} while (again == 'Y' || again == 'y');
	deletefile.close();
}
