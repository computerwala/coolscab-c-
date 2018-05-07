#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

   char l_destination[5][20]={"AMRITSAR","JALANDHAR","PHAGWARA","LUDHIANA","CHANDIGARH"};
       char i_destination[10][20]={"DELHI","MUMBAI","LUCKNOW","JAIPUR","AHEMDABAD" };
       ofstream MYFILE;


class login{
	protected:
		string username,password,securityQuestion;
		string fileUser,filePassword,fileSecQues;
	public:
		login();
		int loginCheck();
		void signUp();
		int forgotPassword();
};


login::login()
{
	int n;
	start_Page:
	cout<<"\n-----------------------\n";
	cout<<"\n1. LOGIN\n2. REGISTER\n3. FORGET YOUR PASSWORD\n4. EXIT";
	cout<<"\n-----------------------\n";
	cout<<"ENTER OUR CHOICE--->: ";
	cin>>n;
	int login_retry=0,forgot_try=0;
	switch(n)
	{
		case 1:
			{
				system("cls");
				login_retry=loginCheck();
				if(login_retry>0)
				{
					system("cls");
					cout<<"OH HO! WORNG USER NAME AND PASSWORD";
					cout<<"\n DON'T HAVE AN ACCOUNT please Sign Up"<<endl;
					goto start_Page;
				}
			}
			break;
		case 2:
			signUp();
			system("cls");
			goto start_Page;
			break;
		case 3:
			system("cls");
			forgot_try=forgotPassword();
			switch(forgot_try)
			{
				case 0:
					break;
				case 1:
					cout<<"SORRY! YOUR DETAILS ARE NOT FOUND IN OUR DATABASE"<<endl;
					cout<<"HEY ! COME JOIN US BY DOING A SIMPLE REGESTRATION."<<endl;
					break;
				case 2:
					cout<<"I'M REALLY VERY SORRY YOUR ANSWER DOESN'T MATCH ''.";
					cout<<"PLEASE TRY AGAIN.";
					break;
				default:
					cout<<"COMMON ";
			}
			getch();
			system("cls");
			goto start_Page;
			break;
		case 4:
			exit(2);
		default:
			cout<<"I'M NOT SEEING ANY OPTION RELATED TO THIS'\n PLEASE CHOOSE A CORRECT OR A VALID OPTION TO MOVE FURTHER";
			goto start_Page;
		}

}

void login::signUp()
{
	system("cls");
	cout<<"HEY! COME JOIN US AND HAVE A GREAT AND REMEBERABLE TRIP\n";
	cout<<"ALL THE DETAIL ARE MANDATORY PLEASE FILL YOUR DETAIL CORRECTLY\n";
	cout<<"ENTER USERNAME:  ";
	cin>>username;
	cout<<"ENTER PASSWORD: ";
	cin>>password;
	cout<<"SECURITY CHECK:PLEASE ANSWER A SIMPLE QUESTION TO PROCEED FURTHER: ";
	cout<<"\n IN WHICH COMPANY YOU WANT YOUR DREAM JOB ?";
	cout<<"\nYour Answer: ";
	cin>>securityQuestion;
	ofstream file;
	file.open("CoolCab2.txt",ios::app);
	file<<username<<' '<<password<<' '<<securityQuestion<<'\n';
	cout<<"CONGRATULATION!!! ACCOUNT CREATED SUCCESSFULLY\t";
	cout<<"\nPlease press any button to continue to the main page";
	getch();
}
int login::loginCheck()
{
	cout<<"ENTER USERNAME: ";
	cin>>username;
	cout<<"ENTER PASSWORD: ";
	cin>>password;
	ifstream file;
	file.open("CoolCab2.txt");
	file.seekg(0);
	while(!file.eof())
	{
		file>>fileUser>>filePassword>>fileSecQues;
		if(username==fileUser && password== filePassword)
		{
			cout<<"Login Successful";
			cout<<"\nCOOLCABS WELCOMES YOU HAVE A SAFE AND NICE TRIP\n";
			getch();
			return 0;
		}
	}
	return 1;
}

int login::forgotPassword()
{
	system("cls");
	cout<<"Enter Username: ";
	cin>>username;
	int userFound=0;
	ifstream file;
	file.open("CoolCab2.txt");
	file.seekg(0);
	while(!file.eof())
	{
		file>>fileUser>>filePassword>>fileSecQues;
		if(username==fileUser)
		{
			userFound=1;
			break;
		}
	}
	if(userFound==1)
	{
		cout<<"Welcome "<<username<<endl;
		cout<<"SECURITY CHECK:PLEASE ANSWER A SIMPLE QUESTION TO PROCEED FURTHERPlease answer your security question:"<<endl;
		cout<<"IN WHICH COMPANY YOU WANT YOUR DREAM JOB ?";
		cout<<"\nYOur Answer: ";
		cin>>securityQuestion;
		if(securityQuestion==fileSecQues)
		{
			cout<<"Please wait.......Searching the database.......";
			Sleep(2000);
			cout<<"\nSEARCH COMPLETE";
			cout<<"\nYOUR PASSWORD IS: \n NEXT TIME TRY TO REMEBER IT: "<<filePassword;
			getch();
			return 0;
		}
		else
		return 2;
	}

	return 1;
	getch();
}

class mytime
{
protected:
 int choose;
public:
 void getdata()
 {
  cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
  cout<<"PRESS 1 FOR 11 AM"<<endl;
  cout<<"PRESS 2 FOR 10 AM"<<endl;
  cout<<"PRESS 3 FOR 9 AM"<<endl;
  cin>>choose;
 }
 void show()
 {
  if(choose==1)
  {
  	 
                                      ifstream InFile;
                                      char ch;
                                      InFile.open("C://ticket1.txt");
                                      while (!InFile.eof())  
                                      {    
                                         InFile.get ( ch ) ;
                                         cout << ch ;  
                                      }
                                      InFile.close();
                                      cout<<endl;
                                    
    cout<<"|                                                                         "<<endl;
    cout<<"|CABS mytime 11 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|CABS mytime 11 AM                                                        "<<endl<<
             "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
       
  }
  if(choose==2)
  {
                                      ifstream InFile;
                                      char ch;
                                      InFile.open("C://ticket2.txt");
                                      while (!InFile.eof())  
                                      {    
                                         InFile.get ( ch ) ;
                                         cout << ch ;  
                                      }
                                      InFile.close();
                                      cout<<endl;
                                    
    cout<<"|                                                                         "<<endl;
    cout<<"|CABS mytime 10 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|CABS mytime 10 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==3)
  { 
                                      ifstream InFile;
                                      char ch;
                                      InFile.open("C://ticket3.txt");
                                      while (!InFile.eof())  
                                      {    
                                         InFile.get ( ch ) ;
                                         cout << ch ;  
                                      }
                                      InFile.close();
                                      cout<<endl;
                                    
    cout<<"|                                                                         "<<endl;
    cout<<"|CABS mytime 9 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|CABS mytime 9 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
 }
};
class customer
{
public:
    virtual void getdata()
 {
 }
virtual void show()
 {
 }
};
class booking:public customer
{
protected:
 int num;
 char ch;
 char firstname[60];
 char lastname[60];
 char c_loc[30];
 char dest[30];
 int distance;
 char address[60];       
int ChargesPerKm=5;
int Counting=4;
int count=0;
int *PChargesPerKm=&ChargesPerKm;

 int option;
 
public:
 void getdata()
 {
  cout<<setw(40)<<"\n\n        ::Please enter the required information for customer number::"<<endl;  
  cout<<"\n\n\nEnter the firstname of customer: ";
   cin.getline(firstname,60);
   cout<<endl;
   cout<<"Enter the lastname of customer: ";
   cin.getline(lastname,60);
   cout<<endl<<endl;
   cout<<"enter total distance"<<endl;
   cin>>distance;
   cout<<endl<<endl;
  cout<<"Enter address of customer:  ";
   gets(address);
   cout<<endl<<endl;
   cout<<"Enter the current location of customer(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(c_loc,60);
   cout<<endl<<endl;
   cout<<"Enter the destination of customer(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(dest,60);
   cout<<endl<<endl;
   system("CLS");
 }
 void show()
 {
   cout<<setw(40)<<"Your E-Ticket is :"<<endl; 
   int t=1;
   int r=12345;
   float Distance;
 float Charges;
  Charges=distance*ChargesPerKm -distance*0.10; 
  cout<<"                          CABS TICKET                                 "<<endl;
  cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
                               
  cout<<"|__________________________________________________________________________"<<endl;
  cout<<"|customer Information :                                                  "<<endl;
  cout<<"|Name :"<<firstname<<lastname<<"                                         "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
  cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
 cout <<"|\ndistance:"<<distance<<"\n";
 cout <<"|\nCharges: Rs"<< Charges<<"\n";
   cout<<endl;        
  cout<<"|_________________________________________________________________________"<<endl;
    
  ofstream outfile("E:\\Customer.txt");
        outfile<<"                          CABS TICKET                                 "<<endl<<
   "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
      "|_________________________________________________________________________"<<endl<<
                                    
   "|__________________________________________________________________________"<<endl<<
      "|customer Information :                                                  "<<endl<<
      "|Name :"<<firstname<<lastname<<"                                     "<<endl<<
      "|                                                                         "<<endl<<
      "|Address :"<<address<<"                                                   "<<endl<<
      "|_________________________________________________________________________"<<endl<<
      "|Depart :"<<c_loc<<"                                                      "<<endl<<
      "|Arrive :"<<dest<<"                                                       "<<endl<<
      "|_________________________________________________________________________"<<endl;

t=t+1;
r=r+1;
  
 }
};


class search
{
public:
void searching()
 {
  cout<<"FOLLOWING ARE THE OUTSTATION CABS AVAILABLE"<<endl;

  for(int i=0;i<5;i++)
 
  {
  
  for(int j=0;j<10;j++)
  
  { 
  
   cout<<"cabs FROM "<<l_destination[i]<<" TO "<<i_destination[j]<<endl;
  }
  }
  }
};
class local: public booking
{
protected:
    int b_seat;
 int e_seat;
 int ch;
 int k;
 int p;
 int option;
 mytime t1;
public:
 void getdata()
 {
  k=0;
  p=0;
  cout<<"In which CABS you want to travel"<<endl<<endl;
  cout<<"1)MICRO"<<endl;
  cout<<"2)MINI"<<endl;
  cout<<"3)SEDAN"<<endl;
  cout<<"4)PRIME SEDAN"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO MICRO"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO MINI"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO SEDAN"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QPRIME SEDAN"<<endl;
   break;
  }
  cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  cin.ignore();
  for(int i=0;i<5;i++)
  {
   cout<<l_destination[i]<<endl;
  }
  booking::getdata();
  for(int j=0;j<5;j++)
  {
   if(strcmp(l_destination[j],c_loc)==0)
   {
    k++;
   }
  }
  for( int i=0;i<5;i++)
  {
   if(strcmp(l_destination[i],c_loc)==0)
  {
    p++;
   }
  }
  if(k==1&&p==1)
  {
  cout<<" CABS AVAILABLE ON THIS ROUTE"<<endl;
    b_seat=30;
   e_seat=40;
  cout<<"In which class you want to travel?"<<endl;
   cout<<"Make your choice"<<endl<<endl;
    cout<<"\n\n\n\n\n\n";
  cout<<setw(60)<<"*************************************"<<endl;
  cout<<setw(60)<<"*       Press 1 for  ac     *"<<endl;
  cout<<setw(60)<<"*     Press 2 for non ac      *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
   cout<<"Enter your choice"<<endl;
   cin>>ch;
    cout<<endl;
    
   switch(ch)
   {
  case 1:
    b_seat--;
   if(b_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
      cout<<"SEAT AVAILABLE"<<endl;
     break;
  case 2:
    e_seat--;
   if(e_seat<=0)
      cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
      cout<<"SEAT AVAILABLE"<<endl;
   break;
   }
   t1.getdata();
  system("CLS");
   booking::show();
   if(ch==1)
   {
   cout<<"|                                                                         "<<endl;
    cout<<"|Status Information:                                                      "<<endl;
    cout<<"|AC                                                           "<<endl;
	    ofstream outfile;
    outfile.open("C:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Status Information:                                                      "<<endl<<
             "|AC                                                           "<<endl;
}
   if(ch==2)
   {
    cout<<"|                                                                         "<<endl;
    cout<<"|Status Information:                                                      "<<endl;
    cout<<"|NON AC                                                             "<<endl;
    ofstream outfile;
    outfile.open("C:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Status Information:                                                      "<<endl<<
             "|NON AC                                                            "<<endl;
   }
       cout<<"|Status: confirmed                                                        "<<endl;

    ofstream outfile;
    outfile.open("C:\\Customer.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
    t1.show();
  }
  else
  {
     cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO cabs AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
     cout<<"__________________________________________________________________________"<<endl;
   }
}};

 class destination:public booking
 {

 protected:
  int c,b,v,g,choice,e1_seat,b1_seat; 
  mytime t1;
 public:
 void getdata()
 {
   b=0;
   v=0;
   
     cout<<"In which CABS you want to travel"<<endl<<endl;
  cout<<"1)MICRO"<<endl;
  cout<<"2)MINI"<<endl;
  cout<<"3)SEDAN"<<endl;
  cout<<"4)PRIME SEDAN"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;

  system ("cls");

  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO MICRO"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO MINI"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO SEDAN"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PRIME SEDAN"<<endl;
   break;
  } 
   cout<<"\n\nTHESE ARE THE DESTINATION  PLACES AVAILABLE"<<endl<<endl;
   cin.ignore();
   for(int i=0;i<10;i++)
  {
     cout<<i_destination[i]<<endl;
   }
   booking::getdata();
   for(int j=0;j<10;j++)
   {
  if(strcmp(i_destination[j],dest)==0)
	 {
      v++;
    }
     }
 for( int i=0;i<5;i++)
   {
   if(strcmp(l_destination[i],c_loc)==0)
   {
    b++;
     }
 }
   if(b==1&&v==1)
   {
   cout<<" CABS AVAILABLE ON THIS ROUTE"<<endl;
    b1_seat=30;
      e1_seat=40;
    cout<<"In which class you want to travel?"<<endl;
    cout<<"Make your choice"<<endl<<endl;
  cout<<"\n\n\n\n\n\n";
  cout<<setw(60)<<"*************************************"<<endl;
  cout<<setw(60)<<"*     Press 1 for AC    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for NON AC      *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>choice;
  cout<<endl;
  
  switch(choice)
  {
  case 1:
  b1_seat--;
   if(b1_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
    cout<<"SEAT AVAILABLE"<<endl;
    break;
  case 2:
  e1_seat--;
   if(e1_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
    cout<<"SEAT AVAILABLE"<<endl;
    break;
  }
  t1.getdata();
  system("CLS");
  
  booking::show();
   if(choice==1)
  {  cout<<"|                                                                         "<<endl;
    cout<<"|Status Information:                                                      "<<endl;
    cout<<"|AC                                                            "<<endl;
   ofstream outfile;
    outfile.open("C:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
       "|Status Information:                                                      "<<endl<<
       "|AC                                                            "<<endl;
  }
  if(choice==2)
  {   cout<<"|                                                                         "<<endl;
    cout<<"|Status Information:                                                      "<<endl;
    cout<<"|NON AC                                                            "<<endl;
   ofstream outfile;
    outfile.open("C:\\Customer.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Status Information:                                                      "<<endl<<
             "|NON AC                                                            "<<endl;
  }
  cout<<"|Status: confirmed                                                        "<<endl;
  ofstream outfile;
    outfile.open("C:\\Customer.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
      
  t1.show();
   }
   else
   {
    cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO CABS AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
   cout<<"__________________________________________________________________________"<<endl;
     }
} };

class cab
{
	public:
    	int cabno;																															
		int cabstats;																														
		int av,cb;
		char ch;
	    int i;
		
	}c[10];
		
 class main1
{
 private:
   char f;
 int menu_choice;
  char a;
   public:
  void changecabstat()																													
		{fstream file;
			file.open("CabStatus.txt",ios::in|ios::out);
			system("CLS");
            string upStats;																														
        	char choice;
        	do{
                cout<<"\t\t\t\t\t\t\t\t\t********************"<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t* UpDating Status  *"<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t********************"<<endl;
                cout<<endl;
                cout<<"Enter The Cab Id Number To Update status: ";
        		cin>>upStats;
           		long int choice = atoi(upStats.c_str());
           		for(int i=0;i<10;i++)
           		{
           			   if(c[i].cabno==choice)
           			{
           			char stat;
          			cout<<"The Cab Id Number "<<i+1<<" Returned Or Not(Y/N) :";
         			cin>>stat;
          			if(toupper(stat=='Y'))
          				{
           				   c[i].cabstats=1;	   
          				}
          			else
          				{
						   c[i].cabstats=0;
          				}
					}
				}
				cout<<"Do You Want To update The Another Cab Status (Y/N) : ";
        		cin>>choice;
        	  }while((choice=='Y') || (choice=='y'));
        	file.close();
		}
		
		void showcstat()
		{
			int sh;
			sh=0;
			system("CLS");
        	cout<<"\t\t\t\t\t\t\t\tCAB STATUS\n"<<endl;
        	for(int i=1;i<=10;i++)
			{
				if(sh%10==0)
				{
					cout<<"\n";
					if(c[i].cabstats==1)
       		   			cout<<"Cab "<<c[i].cabno<<" IS FREE\t";
       				else
      	  				cout<<"Cab "<<c[i].cabno<<" IS NOT FREE\t";
				}
				else
				{
					if(c[i].cabstats==1)
       	   				cout<<"Cab "<<c[i].cabno<<" IS FREE\t";
       				else
      	  				cout<<"Cab "<<c[i].cabno<<" IS NOT FREE\t";
				}
    	    	 sh++;            
        	}		 		
		}
void getdata()
{m:
   cout<<"\n\n\n\n\n\n";
   cout<<setw(60)<<"****************************************"<<endl;
   cout<<setw(60)<<"*        COOLCABS BOOKING SYSTEM       *"<<endl;
   cout<<setw(60)<<"*               MAIN MENU              *"<<endl;
   cout<<setw(60)<<"*           ENTER YOUR CHOICE          *"<<endl;
   cout<<setw(60)<<"*      PRESS 1 FOR LOCAL BOOKING       *"<<endl;
   cout<<setw(60)<<"*     PRESS 2 FOR OUTSTATION BOOKING   *"<<endl;
   cout<<setw(60)<<"*      PRESS 3 FOR SEARCH OF CABS      *"<<endl;
   cout<<setw(60)<<"*      PRESS 4 FOR SEARCH OF CABSTAT   *"<<endl;
   cout<<setw(60)<<"*          NOW ENTER YOUR CHOICE:      *"<<endl;
   cout<<setw(60)<<"****************************************"<<endl;
  cin>>menu_choice;
  system("cls");
   customer* p1;
   booking b1;
   destination i1;
    cab ob;
   local l1;
   char back;
  switch(menu_choice)
   {
   case 1:
    p1=&l1;
    p1->getdata();
    cout<<"To Go To Main Menu Press b"<<endl;
    cin>>back;
   system("CLS");
  if (back=='b')
    {
 goto m;
    }
   else
    {
    cout<<"\n\n\n\n\n\n";
    cout<<setw(40)<<"BYE FROM COOLCABS SYSTEM";
    }
   break;
   case 2:
    p1=&i1;
    p1->getdata();
    cout<<"To Go To Main Menu Press b"<<endl;
      cin>>back;
  system("CLS");
    if (back=='b')
     {
    goto m;
    }
   else
   {
     cout<<"\n\n\n\n\n\n";
      cout<<setw(40)<<"BYE FROM COOLCABS BOOKING SYSTEM";
    }
    break;
   case 3:
    search s1;
    s1.searching();
    cout<<"To Go To Main Menu Press b"<<endl;
  cin>>back;
	  system("CLS");
    if (back=='b')
     {
  goto m;
    }
      else
    {
   cout<<"\n\n\n\n\n\n";
      cout<<setw(40)<<"BYE FROM COOLCABS BOOKING SYSTEM";
    }
   break; 
   case 4:
  
   showcstat();
   break;
   }
} };



int main()
{ 
SetConsoleTitle("COOLCABS BOOKING SYSTEM ");
 system("color 5f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO COOLCABS BOOKING SYSTEM";
 Sleep(2500);
 system("color 2f");
	system("color 0e");
	char a=177, b=219;
	cout<<"\n\n\n\t\t\t\tLOADING.....";
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t";
	for(int i=0;i<=25;i++)
	cout<<a;
	Sleep(150);
	cout<<"\r";
	cout<<"\t\t\t\t\t";
	for(int i=0;i<=25;i++)
	{
		cout<<b;
		Sleep(200);
	}
	 system("CLS");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  cout<<" Aman Kumar Soni";
  Sleep(500);
 system("cls");
    login l;
	l.loginCheck();
	l.signUp();
	main1 m1;
 m1.getdata();
}

