#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
        Management()
        {
            mainMenu();

        }
};

class Details
{
    public :
      
      static string name , gender;
      int phoneNo;
      int age;
      string add;
      static int cId;
      char arr[100];

      void information()
      {
        cout<<"Enter the coustomer ID:"<<endl;
        cin>>cId;
        cout<<"\nEnter the Name"<<endl;
        cin>>name;
        cout<<"\nEnter the age"<<endl;
        cin>>age;
        cout<<"\n Adreess:"<<endl;
        cin>>add;
        cout<<"\nEnter the Gender:"<<endl;
        cin>>gender;
        cout<<"\nYour details are saved with us:\n"<<endl;
        }
}; 

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","usa","Australia","Europe"};

            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to  "<<flightN[a]<<endl;
            }

            cout<<"\n Welcome to the Airline"<<endl;
            cout<<"Press the number of the country of which you want to book a flight:";
            cin>>choice;

            switch(choice)
            {
                case 1:
                {
                    cout<<"________________Welcome to Dubai Emirates________________\n"<<endl;
                    cout<<"Your confort is our priority , Enjoy The Journey!!"<<endl;

                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. DBU -498"<<endl;
                    cout<<"\t08-01-2023 8:00am 10hrs Rs: 14000"<<endl;
                    cout<<"1. DBU -512"<<endl;
                    cout<<"\t9-01-2023 12:00am 12hrs Rs: 10000"<<endl;
                    cout<<"1. DBU -598"<<endl;
                    cout<<"\t11-01-2023 7:00am 11hrs Rs: 9000"<<endl;
                        
                    cout<<"\nSelect the flight you want to book:"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout<<"\n U have sucsessfully booked a flight 1. DBU -498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }

                    else if(choice1==2)
                    {
                        charges=10000;
                        cout<<"\n U have sucsessfully booked a flight 1. DBU -512"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==3)
                    {
                        charges=9000;
                        cout<<"\n U have sucsessfully booked a flight 1. DBU -598"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else
                    {
                        cout<<"Invalid input, shifting to previous menu "<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to main menu:"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }
                case 2:
                {
                    cout<<"________________Welcome to Cannadian Airways________________\n"<<endl;
                    cout<<"Your confort is our priority , Enjoy The Journey!!"<<endl;

                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. CND -111"<<endl;
                    cout<<"\t06-01-2023 12:00am 20hrs Rs: 34000"<<endl;
                    cout<<"1. CND -733"<<endl;
                    cout<<"\t12-01-2023 2:00PM 22hrs Rs: 29000"<<endl;
                    cout<<"1. CND -432"<<endl;
                    cout<<"\t16-01-2023 7:00am 11hrs Rs: 9000"<<endl;
                        
                    cout<<"\nSelect the flight you want to book:"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=34000;
                        cout<<"\n U have sucsessfully booked a flight 1. CND -111"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }

                    else if(choice1==2)
                    {
                        charges=29000;
                        cout<<"\n U have sucsessfully booked a flight 1. CND -733"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==3)
                    {
                        charges=40000;
                        cout<<"\n U have sucsessfully booked a flight 1. CND -432"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else
                    {
                        cout<<"Invalid input, shifting to previous menu "<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to main menu:"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 3:
                {
                    cout<<"________________Welcome to British Airways________________\n"<<endl;
                    cout<<"Your confort is our priority , Enjoy The Journey!!"<<endl;

                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. UK -1144"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 42000"<<endl;
                    cout<<"Select the flight you want to book:";
                    
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=42000;
                        cout<<"\n U have sucsessfully booked a flight 1. UK -1144"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }

        
                    else
                    {
                        cout<<"Invalid input, shifting to previous menu "<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to main menu:"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 4:
                {
                    cout<<"________________Welcome to US Airways________________\n"<<endl;
                    cout<<"Your confort is our priority , Enjoy The Journey!!"<<endl;

                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. Us -1023"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 42000"<<endl;
                    cout<<"1. Us -1572"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 45000"<<endl;
                    cout<<"1. Us -1543"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 39000"<<endl;

                    cout<<"Select the flight you want to book:";
                    
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=42000;
                        cout<<"\n U have sucsessfully booked a flight 1. Us -1023"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==2)
                    {
                        charges=45000;
                        cout<<"\n U have sucsessfully booked a flight 1. Us -1572"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==3)
                    {
                        charges=39000;
                        cout<<"\n U have sucsessfully booked a flight 1. Us -1543"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }

        
                    else
                    {
                        cout<<"Invalid input, shifting to previous menu "<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to main menu:"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                    
                }

                case 5:
                {
                    cout<<"________________Welcome to Australian Airways________________\n"<<endl;
                    cout<<"Your confort is our priority , Enjoy The Journey!!"<<endl;

                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1.   AU -756"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 16000"<<endl;
                    cout<<"1. AU -1272"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 45000"<<endl;
                    cout<<"1. AU -9842"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 39000"<<endl;

                    cout<<"Select the flight you want to book:";
                    
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=16000;
                        cout<<"\n U have sucsessfully booked a flight 1. AU -756"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==2)
                    {
                        charges=45000;
                        cout<<"\n U have sucsessfully booked a flight 1. AU -1272"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==3)
                    {
                        charges=39000;
                        cout<<"\n U have sucsessfully booked a flight 1. AU -9842"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }

        
                    else
                    {
                        cout<<"Invalid input, shifting to previous menu "<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to main menu:"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                    

                }
                case 6:
                {
                    cout<<"________________Welcome to EU Airways________________\n"<<endl;
                    cout<<"Your confort is our priority , Enjoy The Journey!!"<<endl;

                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1.   EU -1756"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 37000"<<endl;
                    cout<<"1. EU -1333"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 48000"<<endl;
                    cout<<"1. EU -842"<<endl;
                    cout<<"\t13-01-2023 12:00am 20hrs Rs: 33000"<<endl;

                    cout<<"Select the flight you want to book:";
                    
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=37000;
                        cout<<"\n U have sucsessfully booked a flight 1. EU -1756"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==2)
                    {
                        charges=48000;
                        cout<<"\n U have sucsessfully booked a flight 1. AU -1333"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }
                    else if(choice1==3)
                    {
                        charges=33000;
                        cout<<"\n U have sucsessfully booked a flight 1. EU -842"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;

                    }

        
                    else
                    {
                        cout<<"Invalid input, shifting to previous menu "<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to main menu:"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                default:
                {
                    cout<<"Inavalid Input , shifting to the main Menu!!"<<endl;
                    mainMenu();
                    break;
                }     
            
            
            }
        
        }

};
float registration::charges;
int registration::choice;

class ticket: public registration, Details
{
    public:
    void Bill()
    {
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"________XYZ AIRLINES_______"<<endl;
            outf<<"_________Ticket____________"<<endl;
            outf<<"____________________________"<<endl;

            outf<<"Coustomer Id:"<<Details::cId<<endl;
            outf<<"Name        :"<<Details::name<<endl;
            outf<<"Gender    :"<<Details::gender<<endl;
            outf<<"\tDescription:"<<endl;

            if(registration::choice==1)
            {
                destination="Dubai";
            }

            else if(registration::choice==2)
            {
                destination="Canada";

            }

            else if(registration::choice==3)
            {
                destination="UK";
            }

            else if(registration::choice==4)
            {
                destination="USA";
            }

            else if(registration::choice==5)
            {
                destination="Australia";
            }

            else if(registration::choice==6)
            {
                destination="Euoropeian Union";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight Cost:\t\t"<<registration::charges<<endl;





        }
        outf.close();
    }

    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File Error"<<endl;
            
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }    
        }
        ifs.close();

    }
};







void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                  INDIGO AIRlINES          \n" <<endl;
    cout<<"\t_____________________Main Menu________________"<<endl;

    cout<<"\t______________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|"<<endl;


    cout<<"\t|\t press 1 to add the coustomer Details   \t|"<<endl;
    cout<<"\t|\t press 2 for flight registration        \t|"<<endl;
    cout<<"\t|\t press 3 for ticket and charges         \t|"<<endl;
    cout<<"\t|\t press  4 To Exit                       \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t______________________________________________"<<endl;
    

    cout<<"Enter the choice:";
    cin>>lchoice;

    Details d;  //d is the object name
    registration r;
    ticket t;


    switch(lchoice)
    {
        case 1:
        {
            cout<<"_____________Coustemers_________\n"<<endl;
            d.information();
            cout<<"Press 1 to go to Main Menu"<<endl;
           // cin>>back; 
            cout<<"Press 1 to go to Main Menu";
            cin>>back; 
             
            if(back==1)
            {
                mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
        }

        case 2:
        {
            cout<<"___________Book A Flight using this system___________\n"<<endl;
            r.flights();
            break;

        }


        case 3:
        cout<<"_________Get your tkt_________\n"<<endl;
        t.Bill();

        cout<<"Your Ticket is preinted , You can collect it\n"<<endl;
        cout<<"Press 1 to display your tkt";

        cin>>back;
            
            if(back==1)
            {
                t.dispBill();
                cout<<"Press any key to go back to main menu";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();

                }    
            }
            else
            {
                mainMenu();
            }
            break;
        

        case 4:
            {
                cout<<"\n\n\t_______Thank You______"<<endl;

            }

            default :
                {
                    cout<<"Invalid input , Plz try again\n"<<endl;
                    mainMenu();
                    break;
                }




                       
        }
    }


int main(){
    Management Mobj;
    return 0;
}