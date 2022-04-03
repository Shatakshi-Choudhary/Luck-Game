// ------------------------------   WELCOME TO OUR LOG-IN PAGE    ----------------------------------------------------
// *******************************************************************************************************************
//                                   |   LOG-IN PAGE   |
// *******************************************************************************************************************
//    Header files for log-in page
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<string.h>
// Header files For timer
#include<cstdlib>
#include<iomanip>
#include<unistd.h>
#include<windows.h>
#include<ctime>
using namespace std;

int hours=0;
int minutes=0;
int seconds=0;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~TIMER~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//  First Function
void displayClock()
{
    system("cls");
    cout<<"        TIMER       "<<endl;
    cout<<"------------------------"<<endl;
    // cout<<"| "<<setfill('0')<< setw(2)<< hours<<"hrs |";
    // cout<<setfill('0')<<setw(2)<<minutes<< " min |";
    cout<<setfill('0')<<setw(2)<<seconds<<" | sec |"<<endl;
    cout<<"--------------------------"<<endl;
    
}
//   Second Function
void timer()
{
    while(true)
    {
        displayClock();
        sleep(1);
        seconds++;
        if(seconds==6)
        {
            minutes++;
            if (minutes==6)
            {
                hours++;
                minutes=0;
            }
            seconds=0;
            break;
            
        }
    }
}
//  MAIN Function
int main()
{ 
 char password[]="SP0211";    // Fixed value of password 
 char pass[32];               //to store password.
 int i = 0;
 int	static counter = 1;      
 string username;
 char a;  
 char exit;     //a Temp char

   // While loop to run the code only 2 times
 while (counter < 3)
   {
     START:
     system("pause");
        cout<<"========================================================================================="<<endl;
        cout<<"                     | WELCOME USERS TO OUR LOG-IN PAGE |"<<endl;
        cout<<"========================================================================================="<<endl;
        cout<<"You need to log-in before you proceed!"<<endl;
        cout << "Enter username" << endl;
        cin >> username;

        cout << "\n Enter 6-digit Password  : " << endl;
        
        for (i = 0; i < 6; i++)    
        {
            a = getch();                //stores char typed in a
                                        // if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
                                        //check if a is numeric or alphabet
                
                pass[i] = a;             //stores a in pass
                cout << "*";
         
            if (a == '\b' && i >= 1)     //if user typed backspace
                //i should be greater than 1.
            {
                cout << "\b \b";         //rub the character behind the cursor.
                --i;
            }
        
        }
        
        //here we can even check for minimum digits needed
        if (i <= 4)
        {
            cout << "\n Minimum 5 digits needed.\nEnter Again";
            getch();   //It was not pausing :p
            goto START;
        }
       counter++;
        if (username == "xyz")
        { 
        int b=(strcmp(pass,password));
          {
            if(b==0)
			{
			 cout << "\nWelcome xyz!!\n  \nYou have successfully logged-in!" << endl;
                break;
		    }
		   
            else
            {
           	 cout<<"\n type correct password \n";
		    }
		  }
        }
        else
        {
            cout << "\nInvalid Username or Passward \n \n" << endl;
          //  counter++;
        }
        if (counter == 3)
        {
            cout << "Too many login attempts\n \n" << endl;
            cout<<"If you want to retry press any key and wait for 5 secoends"<<endl;
            cout<<"If not then press 0"<<endl;
            cin>>exit;
            if(exit=='0')
            {
            	goto END;
			}
			else
			{
				timer();

            counter=1;
            goto START;

            return 0;
			}
        }
    }
    END:
       cout<<"Thank You!!"<<endl;
    return 0;
}

// ==============================================================================================================================
//                                     END OF LOGIN-PAGE
// ===============================================================================================================================