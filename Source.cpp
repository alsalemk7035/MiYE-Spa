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
	int  room;
	char mob[20];
};
struct Name2              // structure for naming in program
{
	char  C_ID;			//character arrays for the names to reserv a spa
	char first[20];
	char last[20];
	char date[20];
};
//\\Functions prototyping//\/\\
            
void vacant_rooms();                //for vacant rooms|
void customer_reserve();           //for reservation  |
void check();                    //for the viewing guest history
void del_resdata();                            // in order delete
void spa_reseve();				// for spa reservations
void del_spadata();				// for deleting spa reservations
void spa_check();				// for viewing spa reservations history
void room_main();				// for spa reservations
void spa_main();				// for deleting spa reservations
void maintenance_main();				// for viewing spa reservations history

								//------------------------.>//


int main()
{

	int a;

	char again;

	cout << endl;
	cout << "            *                 *    " << endl;
	cout << "          **                   **   " << endl;
	cout << "   *** Welcome to MiYE Resort and Spa ***" << endl;
	cout << "          **                   **  " << endl;
	cout << "            *                *  " << endl;
	cout << endl;

	do
	{
		cout << endl;
	cout << "** Welcome to The Main Menu **" << endl;
		cout << endl;
		cout << endl;
		cout << "Press 1 for room reservations. " << endl;
		cout << endl;
		cout << "Press 2 for spa reservations. " << endl;
		cout << endl;
		cout << "Press 3 for maintenance. " << endl;
		cout << endl;
		cout << "Press 0 to Exit application. " << endl;
		cout << endl;
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
			
			cout << endl;
			room_main();     // funtion calling
			break;
		case 2:
			
			cout << endl;
			spa_main();    ///funtion calling
			break;
		case 3:
			
			cout << endl;
			maintenance_main();    //function calling   
			break;
		
		default:
			cout << "you have enter an invalid choice " << endl;
			cout << endl;
		}
		cout << "Press 1 to go back into MAIN Menu or 0 to terminate the program: ";
		cin >> again;
		cout << "___________________________________" << endl;
		cout << endl;
	} while (again == '1');
	cout << "Thankyou! for using MiYE Reservations application." << endl;
	cout << "Have a nice day! " << endl;
	cout << endl;
	cout << "_________________________________________" << endl;

	system("pause");
}
//....................................................................//
//for room main menu
//....................................................................//
void room_main()
{

	int a;

	cout << endl;
	cout << "            *                     *    " << endl;
	cout << "          **                       **   " << endl;
	cout << "   *** Welcome to Room Reservaion Menu ***" << endl;
	cout << "          **                       **  " << endl;
	cout << "            *                     *  " << endl;
	cout << endl;


		cout << "Press 1 to see the vacant rooms. " << endl;
		cout << endl;
		cout << "Press 2 to reserve a room. " << endl;
		cout << endl;
		cout << "Press 3 to see the history of reserved rooms. " << endl;
		cout << endl;
		cout << "Press 4 to delete room reservation data. " << endl;
		cout << endl;
		cout << "Press 0 to return to the main menu. " << endl;
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
			
			cout << endl;
			vacant_rooms();    ///funtion calling
			break;
			
		case 2:
			
			cout << endl;
			customer_reserve();     // funtion calling
			break;
		
		case 3:
			
			cout << endl;

			check();    //function calling           
			break;
		case 4:
			
			cout << endl;
			del_resdata();    //function calling
			break;
		
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
		}
		
	
}
//....................................................................//
//for spa main menu
//....................................................................//

void spa_main()
{

	int a;

	cout << endl;
	cout << "            *                    *    " << endl;
	cout << "          **                      **   " << endl;
	cout << "   *** Welcome to Spa Reservaion Menu ***" << endl;
	cout << "          **                      **  " << endl;
	cout << "            *                    *  " << endl;
	cout << endl;

		cout << "Press 1 to make spa reservation. " << endl;
		cout << endl;
		cout << "Press 2 to see the history of reserved spa services. " << endl;
		cout << endl;
		cout << "Press 3 to delete spa reservation data. " << endl;
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
			
			cout << endl;
			spa_reseve();    //function calling
			break;
		case 2:
			
			cout << endl;
			spa_check();    //function calling           
			break;
			del_spadata();    //function calling
			break;
		case 3:
			
			cout << endl;
			del_spadata();    //function calling
			break;
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
			return;
		}
}

//....................................................................//
//for maintenance main menu
//....................................................................//
void maintenance_main()
{

	
}
//....................................................................//
//function for spa reservation
//....................................................................//
void spa_reseve()    //function definition 
{

	Name2 spa_guest;             // guest is the name structure
	char choicedo;       //for entering more data 
	int type = 0;
	char again = 0;
	int  spa_service = 0;
	double price = 0;
	double duration = 0;
	char res_time[20];
	char res_date[20];
	string ch_service = "";
	string ch_type = "";


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
		cin >> spa_guest.first;
		cout << endl;
		cout << "Enter Guest's Last Name: ";
		cin>>spa_guest.last;
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
		cin >> spa_service;
		switch (spa_service)
		{
		case 1:
			ch_service = "Mineral Baths";
			cout << "You have Selected mineral bath " << endl;
			cout << endl;
			cout << "When do you want to reserve? " << endl;
			cout << endl;
			cout << "Enter the date here (mm-dd-yyyy): "; cin >> res_date;
			cout << endl;
			cout << "what time do you want to have your service? " << endl;
			cout << endl;
			cout << "Enter the time here  (hh:mm): "; cin >> res_time;
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
				cout << "You have chosen swedish massage";
				cout << endl;
				ch_type = "Swedish Massage";
			}
			else if (type == 2)
			{
				cout << "You have chosen shiatsu massage";
				cout << endl;
				ch_type = "Shiatsu Massage";
			}
			else if (type == 3)
			{
				cout << "You have chosen deep tissue massage";
				cout << endl;
				ch_type = "Deep Tissue Massage";
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
					price = duration * 3;
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
				cout << "You have chosen to do the normal facial";
				cout << endl;
				ch_type = "Normal Facial";
			}
			else if (type == 2)
			{
				cout << "You have chosen to do collagen facial";
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
				cout << "You have chosen hot stone treatment";
				cout << endl;
				ch_type = "Hot Stone Treatment";
			}
			else if (type == 2)
			{
				cout << "You have chosen sugar scrub treatment";
				cout << endl;
				ch_type = "Sugar Scrub Treatment";
			}
			else if (type == 3)
			{
				cout << "You have chosen herbal body wrap treatment";
				cout << endl;
				ch_type = "Herbal Body Wrap Treatment";
			}
			else if (type == 4)
			{
				ch_type = "Botanical Mud Wrap Treatment";
				cout << "You have chosen botanical mud wrap treatment";
				cout << endl;
			}
			
			else
			{
				cout << "Sorry! You have entered invalid choice";
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
			cout << "______________________________" << endl;
			break;
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
			return;

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
			file << "Spa service:" << ch_service << "	" << "Service Type: " << ch_type << endl;
			file << endl;
			file << "Reservation Date: " << res_date << "	" << "Reservation Time: " << res_time << endl;
			file << endl;
			file << "Price: $ " << price << endl;
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
//function for room reservation 
//....................................................................//
void customer_reserve()    //function definition 
{

	Name guest;             // guest is the name structure
	char choicedo;       //for enter more data 
	time_t t = time(0);  // current time: http://cplusplus.com/reference/clibrary/ctime/time/
	struct tm * now = localtime(&t);  // http://cplusplus.com/reference/clibrary/ctime/localtime/

									  // struct tm: http://cplusplus.com/reference/clibrary/ctime/tm/
	int day = now->tm_mday;
	int mmonth=0;
	int year = now->tm_year + 1900;
	int o_month = now->tm_mon + 1;
	int o_day = now->tm_mday;
	int o_year = now->tm_year + 1900;
	int choice;
	int single = 0;
	int doubl = 0;
	int quadruple = 0;
	int days = 0;
	int total = 0;
	string r_type = "";

	do
	{
		ofstream file;
		file.open("User info input.txt", ios::out | ios::app);  //openning txt file 
		if (!file)
		{
			cout << "Error: Cannot open file.\n";
			system("pause");
		}

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
		cout << "Check-in Date:";
		cout << endl;
		cout << "Enter month (mm): ", cin >> mmonth;
		cout << "Enter day (dd): ", cin >> day;
		cout << "Enter year (yyyy): ", cin >> year;
		cout << endl;
		if (mmonth < now->tm_mon + 1 || day < now->tm_mday || year < now->tm_year + 1900)
		{
			cout << "You have entered a date that had passed." << endl;
			cout << endl;
			break;
		}
		else
		{
			cout << "Check-out Date:";
			cout << endl;
			cout << "Enter month (mm): ", cin >> o_month;
			cout << "Enter day (dd): ", cin >> o_day;
			cout << "Enter year (yyyy): ", cin >> o_year;
			cout << endl;
		}
		if (o_month < mmonth || o_day < day)
		{
			cout << "You have entered a date that had passed Or before your Check-in date." << endl;
			cout << endl;
			break;
		}
		else
		{

			if ((mmonth = 5 && day <= 15), (mmonth = 8 && day <= 15), (mmonth = 12 && day >= 15), (mmonth = 2 && day <= 15))
			{
				single = 175;
				doubl = 325;
				quadruple = 600;
				days = o_day - day;
				cout << endl;
			}

			else
			{
				single = 140;
				doubl = 260;
				quadruple = 480;
				days = o_day - day;
				cout << endl;
			}
		}
		if (days == 0)
		{
			days = 1;
		}
		else
		{
		}
		cout << "Which kind of Room do you want to reserve?  " << endl;
		cout << endl;
		cout << " 1.Single Room " << endl;
		cout << endl;
		cout << " 2.Double Room " << endl;
		cout << endl;
		cout << " 3.Quadruple Room" << endl;
		cout << endl;
		cout << "Select 1,2 or 3 . " << endl;
		cout << endl;
		cout << "Enter Your Choice Here_: ";
		cin >> choice;
		cout << "__________________________________" << endl;
		cout << endl;
		switch (choice)
		{
		case 1:
			r_type = "Single Room";
			cout << "You have Selected a single room. " << endl;
			cout << endl;
			total = single*days;
			cout << "Your Total bill + service tax for " << days << " night/s= ( " << total << " USD.)" << endl;
			cout << endl;
			cout << "______________________________" << endl;

			break;
		case 2:
			r_type = "Double Room";
			cout << "You Have Selected Double room." << endl;
			cout << endl;
			total = doubl*days;
			cout << "Your Total bill + service tax for " << days << " night/s= ( " << total << " USD.)" << endl;
			cout << endl;
			cout << "______________________________" << endl;
			break;
		case 3:
			r_type = "Quadruple Room";
			cout << "You Have Selected Quadruple. " << endl;
			cout << endl;
			total = quadruple*days;
			cout << "Your Total bill + service tax for " << days << " night/s= ( " << total << " USD.)" << endl;
			cout << endl;
			cout << "______________________________" << endl;
			break;
		default:
			cout << "you have enter an invalid Choice " << endl;
			cout << endl;
			return;
		}
		cout << "Enter The Room # to be Reserved: ";
		cin >> guest.room;
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
			file << "Reservation Data of Room no.: " << guest.room <<"	"<< "Room Type: " << r_type<< endl;
			file << endl;
			file << "The Name of the Guest is: " << guest.first << " " << guest.last << endl;
			file << endl;
			file << "Mobile No.: +" << guest.mob << endl;
			file << endl;
			file << "Check_in date: " << mmonth << "-" << day << "-" << year << endl;
			file << endl;
			file << "Check_out date: " << o_month << "-" << o_day << "-" << o_year << endl;
			file << endl;
			file << "Price for " << days << " night/s is: " << total << " USD." << endl;
			file << endl;
			file << "Date reserved: " << now->tm_mon + 1 << "-" << now->tm_mday << "-" << now->tm_year + 1900 << endl;
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
