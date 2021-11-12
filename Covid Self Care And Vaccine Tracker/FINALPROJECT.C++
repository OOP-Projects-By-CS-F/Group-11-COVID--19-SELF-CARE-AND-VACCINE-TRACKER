#include<iostream>
#include<iomanip>
#include <fstream>
#include <limits>

using namespace std;
class Extra
{
    public:
    void invalid()
    {
       cout<<setw(85)<<" INVALID INPUT"<<endl;
       system("pause");
    }
    void startingg()
    {
    cout<<setw(134)<<"|&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|"<<endl;
    cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
    cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;        cout<<endl<<endl;

    }
    int checkk()
    {
    
        int i;
        while (true)
        {
           cin >> i;
           if (!cin)
           {
             cout << "Wrong Choice. Enter again " << endl;
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');

             return 8;
            }
            else break;
        }
        return i;
    }
    void exitt()
        {
            system("cls");
            int i=0;
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(100)<<"|*************************************************************|"<<endl;
            cout<<setw(100)<<"|   THANK YOU SO MUCH FOR GIVING YOUR PRECIOUS TIME HERE      |"<<endl;
            cout<<setw(100)<<"|*************************************************************|"<<endl;
            cout<<endl<<endl<<setw(90)<<" S T A Y  A T  H O M E  S T A Y  S A F E ." <<endl<<endl;
            system("pause");
            exit(0);
        }
};
class Front_page : public Extra
{
    public:
    void os_check()
      {
          char os, b;
            #if defined (_WIN32) || defined(_WIN64)
            os = 'W';                
            #else
            os = 'U';                
            #endif
            if(os!='W')
            {
            cout<<"\n\n\n\n\n\n";
            cout<<setw(100)<<"|*******************************************************************************************|"<<endl;
            cout<<setw(100)<<"|                                   W A R N I N G                                           |"<<endl;
            cout<<setw(100)<<"| This Program is Only for Windows Based Compiler and This compiler is not based on windows |"<<endl;
            cout<<setw(100)<<"|     ( PLease try with Windows Operating System  )in Dev C++ or Visual Studio              |"<<endl;
            cout<<setw(100)<<"|*******************************************************************************************|"<<endl;
            cout<<"\n\nIf You still Want To Run The Program Some With some operation May Not Work Press 1 Or\n Press Enter Any Key To Exit  :: " ;
            cin>>b;
            if (b != '1')
            {
                 cout<<endl<<endl<<setw(100)<<"|*************************************************************|"<<endl;
                 cout<<setw(100)<<"|   THANK YOU SO MUCH FOR GIVING YOUR PRECIOUS TIME HERE      |"<<endl;
                 cout<<setw(100)<<"|*************************************************************|"<<endl;
                exit(0);

             
            }
            
            }   
      }
    void starting()
       {                    


            system("cls");

            system("Color 97");
    
            cout<<endl<<endl<<endl;
	        
	
            cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
            cout<<setw(134)<<"$ @                                                                                                                   @  &"<<endl;
            cout<<setw(134)<<"$   @``````````````````````````````````````````````````````````````````````````````````````````````````````````````` @   &"<<endl;
            cout<<setw(134)<<"$     @                             M E D I  - C A P S   U N I V E R S I TY  ,  I N D O R E                       @      &"<<endl;
            cout<<setw(134)<<"$       @ ----------------------------------------------------------------------------------------------------  @        &"<<endl;
            cout<<setw(134)<<"$         @                                                                                                   @          &"<<endl;
            cout<<setw(134)<<"$           @%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@             &"<<endl;
            cout<<setw(134)<<"$             #                                                                                          #               &"<<endl;
            cout<<setw(134)<<"$                #         C O V I D - 19  S E L F  C A R E   &  V A C C I N E  T R A C K E R          #                 &"<<endl; 
            cout<<setw(134)<<"$                   #                                                                                #                   &"<<endl;
            cout<<setw(134)<<"$                      #                      S E M E S T E R - 3  P R O J E C T                  #                      &"<<endl;
            cout<<setw(134)<<"$                         #                             2 0 2 0 - 2 4                          #                         &"<<endl;
            cout<<setw(134)<<"$                            #^^^^^^^^^^^^^^^^^^^^^^^^^-------$--------^^^^^^^^^^^^^^^^^^^^^^^#                          &"<<endl;
            cout<<setw(134)<<"$                                                             $                                                          &"<<endl;
            cout<<setw(134)<<"$        *                            *                       $                          *                       *       &"<<endl;
            cout<<setw(134)<<"$        * *                        *    *                    $                        *    *                  * *       &"<<endl;
            cout<<setw(134)<<"$        * * *                    *       *                   $                      *        *              * * *       &"<<endl;
            cout<<setw(134)<<"$           * * * * *            *    @    *                  $                     *     @    *      * * * * *          &"<<endl;
            cout<<setw(134)<<"$        * * * *                  *       *                   $                       *       *            * * * *       &"<<endl;
            cout<<setw(134)<<"$        * * *                      *   *                    !^ ^!                      *   *                * * *       &"<<endl;
            cout<<setw(134)<<"$        * *                          *                    !^     ^!                      *                      *       &"<<endl;
            cout<<setw(134)<<"$        *                                               !^          ^!                                                  &"<<endl;
            cout<<setw(134)<<"$                                                     !^                ^!                                               &"<<endl;
            cout<<setw(134)<<"$   {~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~}     !^                     ^!       {~~~~~~~~~~~~~~~~~~~~~~~~~}          &"<<endl;
            cout<<setw(134)<<"$   |                   B U I L T  B Y :-     |  !^                            ^!   |   G U I D E D  B Y :-   |          &"<<endl;
            cout<<setw(134)<<"$   |---------------------------------------  |-^                                 ^-| ----------------------- |          &"<<endl;
            cout<<setw(134)<<"$   |   EN20CS301351   R I S H I  N I G A M   |                                     | M R  A R P I T  D E O   |          &"<<endl;
            cout<<setw(134)<<"$   |   EN20CS301339   R A S H M I  K O L H E |                                     |  ASSISTENT PROFESSOR    |          &"<<endl;
            cout<<setw(134)<<"$   |EN20CS301317 P R I Y A N K A  S H A R M A|                                     {~~~~~~~~~~~~~~~~~~~~~~~~~}          &"<<endl;
            cout<<setw(134)<<"$   {~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~}                                                                          &"<<endl;
            cout<<setw(134)<<"$                                                                                                                        &"<<endl;
            cout<<setw(134)<<"$                                                                                                                        &"<<endl;
            cout<<setw(134)<<"$                                                                                                                        &"<<endl;
            cout<<setw(134)<<"$                                                                                                                        &"<<endl;
            cout<<setw(134)<<"|************************************************************************************************************************|"<<endl<<endl;
            system("pause");
        }
    int main_menu()
        {
            int d;
            system("cls");
	        
            cout<<endl<<endl;
            cout<<setw(134)<<"|########################################################################################################################|"<<endl;
            cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
            cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
            cout<<setw(107)<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
            cout<<setw(107)<<"|   A V A I L A B L E  C H O I C E S  A R E  G I V E N  B E L O W  : -  |"<<endl;
            cout<<setw(107)<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl<<endl<<endl;
            cout<< setw(48)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<endl;
            cout<< setw(49)<<"{         E n t e r  1  t o          }"<<setw(43)<<"{        E n t e r  2  t o           }"<<setw(43)<<"{          E n t e r  3  t o         }"<<endl;
            cout<< setw(49)<<"{    KNOW  THE  CURRENT STATUS OF    }"<<setw(43)<<"{     TO PERFORM  C O V I D -19      }"<<setw(43)<<"{      KNOW  GOVERMENT  COVID 19     }"<<endl;
            cout<< setw(49)<<"{            C O V I D  19           }"<<setw(43)<<"{     S E L F  A S S I S M E N T     }"<<setw(43)<<"{         G U I D E L I N E S        }"<<endl;
            cout<< setw(48)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<endl;
            cout<<endl<<endl;
            cout<< setw(48)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<endl;
            cout<< setw(49)<<"{         E n t e r  4  t o          }"<<setw(43)<<"{        E n t e r  5  t o           }"<<setw(43)<<"{         E n t e r  6  FOR          }"<<endl;
            cout<< setw(49)<<"{ C O V I D - 19  G O V E R M E N T  }"<<setw(43)<<"{    V A C C I N E  R E L A T E D    }"<<setw(43)<<"{       A D M I N I S T R A T O R    }"<<endl;
            cout<< setw(49)<<"{   H E L P  L I N E  N U M B E R    }"<<setw(43)<<"{             I S S U E              }"<<setw(43)<<"{               L O G I N            }"<<endl;
            cout<< setw(48)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<setw(43)<<"{----------------------------------}"<<endl<<endl<<endl;
            cout<<setw(91)<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
            cout<<setw(91)<<"|  E N T E R   7   T O   E X I T  |"<<endl;
            cout<<setw(91)<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl<<endl<<endl;
            cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
            cin.sync();
            d=checkk();
     
            return d;     
        }
};
class Covid_status : public Extra
{
    public:
    void current_status()
        {
            system("cls");
            int a=0;
            while(a!=2)
            {
                system("cls");
                
                string strrr;
                ifstream f1;
                f1.open("covid_status.txt");
                getline(f1,strrr);                
               
                f1.close();                
            
                cout<<endl<<endl;
                startingg();
                cout<<setw(107)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(107)<<"|   C U R R E N T  S T A T U S  O F  C O V I D -19 IN  I N D I A  :     |"<<endl;
                cout<<setw(107)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                cout<<setw(80)<<"  T I L L  T O D A Y  "<<endl;
                cout<<setw(80)<<"~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(49)<<"~----------------------------------~"<<setw(43)<<"~----------------------------------~"<<setw(43)<<"~----------------------------------~"<<endl;
                cout<<setw(49)<<"|      A C T I V E  C A S E S      |"<<setw(43)<<"|       R E C O V E R E D          |"<<setw(43)<<"|         D E C R E S E D          |"<<endl;
                cout<<strrr<<endl;
                cout<<setw(49)<<"~----------------------------------~"<<setw(43)<<"~----------------------------------~"<<setw(43)<<"~----------------------------------~"<<endl<<endl<<endl;
                cout<<setw(80)<<"-------------------------------------------"<<endl;
                cout<<setw(80)<<" ( 1 ) ENTER 1 TO KNOW STATUS STATE WISE . "<<endl;
                cout<<setw(80)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(80)<<"-------------------------------------------"<<endl;
                cout<<setw(80)<<" ( 2 ) ENTER 2 TO RETURN TO PREVIOUS MENU . "<<endl;
                cout<<setw(80)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(80)<<"-------------------------------------------"<<endl;
                cout<<setw(80)<<" ( 3 ) ENTER 3 TO EXIT THE APPLICATION .    "<<endl;
                cout<<setw(80)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                cin.sync();
                a=checkk();
                switch(a)
                {
                    case 1:
                    list_state();   
                    break;
                    case 2:
                    break;
                    case 3:
                    exitt();
                    break;
                    default:
                    break;
                }
            }
        }
    void list_state()
        {
            
        
            
            system("cls");
            char strrr[150];
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|          C O V I D - 1 9   S T A T U S  S T A T E  W I S E             |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
            f1.open("status.txt");
            int j=0;
            while(j!=72)
            {
                f1.getline(strrr,150);
                cout<<"\n"<<strrr<<endl;
                j++;
                
            }
            f1.close();

            cout<<"\n**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");


        }
};        
class Self_assisment : public Extra
{
    public:
    void covid_self()
        {
            system("Color b0");
            system("cls");
            int a=0;
            while(a!=3)
            {  
                system("cls");
                cout<<endl<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                 
                cout<<setw(103)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(103)<<"|   C O V I D - 1 9  S E L F  A S S I S M E N T      |"<<endl;
                cout<<setw(103)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                cout<<endl<<endl<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl;
                cout<<setw(100)<<" ( 1 ) ENTER 1 TO PERFORM SELF ASSISMENT . "<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(115)<<"--------------------------------------------------------------------"<<endl;
                cout<<setw(115)<<" ( 2 ) ENTER 2 TO KNOW THE RULES THROUGH WHICH RESULT IS DECLARED . "<<endl;
                cout<<setw(115)<<"--------------------------------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl;
                cout<<setw(100)<<" ( 3 ) ENTER 3 TO RETURN TO PREVIOUS MENU . "<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl;
                cout<<setw(100)<<" ( 4 ) ENTER 4 TO EXIT THE APPLICATION .    "<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                cin.sync();
                a = checkk();
                switch(a)
                {
                    case 1:
                    self_asses();                        
                    break;
                    case 2:
                    rule();
                    break;
                    case 3:
                       
                    break;
                    case 4:
                    exitt();
                    break;
                    default:
                    break;
                }


            }


        }
    void self_asses()
        {
            char a='0';
            while(a!='2')
            {
            system("cls");
            string name;
            string number;
            string address;
            string age;
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*********************************************************************"<<endl;
            cout<<setw(113)<<"|          C O V I D - 1 9   S E L F  A S S I S M E N T             |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<setw(95)<<"***********************************************"<<endl;
            cout<<setw(95)<<"|       E n t e r  y o u r  D e t a i l s       |"<<endl;
            cout<<setw(95)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(67)<<"|    E N T E R   Y O U R  N A M E    |"; cout<<"   \t --->>  ";
            cin.ignore(1,'\n');
            getline(cin,name);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    E N T E R   Y O U R  P H O N E  N U M B E R    |"; cout<<"   \t --->>  ";
            getline(cin,number);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    E N T E R   Y O U R  A G E      |"; cout<<"   \t --->>  ";
            getline(cin,age);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    E N T E R   Y O U R  A D D R E S S     |"; cout<<"   \t --->>  ";
            getline(cin,address);
            cout<<endl;
            int co=1;
            string fnumber;
            ifstream f1;
            f1.open("Covid_test.txt");
                
            while(f1.eof()==0)
            {  
                f1>>fnumber;
                   
                if(number==fnumber)
               {
                   co=0;
               }
            }  
               
            f1.close();
            if(co==0)
            {
                cout<<endl<<endl<<setw(100)<<"This Mobile Number Has Been used Please use Another Number"<<endl;
                cout<<setw(95)<<"-------------------------------------------"<<endl;
                cout<<setw(95)<<" ( 1 ) ENTER 1 TO RETRY.                   "<<endl;
                cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl;
                   cout<<setw(95)<<" ( 2 ) ENTER 2 TO RETURN TO PREVIOUS MENU . "<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                   cin.sync();
                   cin>>a;
                   system("pause");


                
            }
            else
            {
                string result;
                result=result_check(name);
                
                int count = 0;
                string line;
 
                // Creating input filestream  
                ifstream file("Covid_test.txt");
                while (getline(file, line))
                {
                  count++;
                }
                count=count-4;
                ofstream f2;
                count++;
                f2.open("Covid_test.txt",ios::app);
                f2<<count<<setw(30)<<name<<setw(15)<<number<<setw(20)<<address<<setw(8)<<age<<setw(30)<<result<<endl;
                f2.close();
                cout<<endl<<setw(87)<<"A S S E S M E N T  S U C E S S F U L L Y  C O M P L E T E D "<<endl;
                a='2';
                system("pause");
             }
            }
        } 
    string result_check(string na)
        {
            int z=0;
            string name;
            string result;
            while(z!=2)
            {
            system("cls");
            char a,b,c,d;
            char a1,a2,a3,a4,c1,c2,c3,c4;
            string name;
            name=na;
            
            startingg();
            cout<<setw(50)<<"| H E L L O W  "<<name<<"  L E T S  S T A R T  Y O U R  A S S I S M E N T       |"<<endl<<endl<<endl;          
            cout<<setw(90)<<"PLEASE GIVE US CORRECT INFORMATION, ACCURATE ANSWERS HELP US - HELP YOU BETTER"<<endl;
            cout<<endl;
            cout<<setw(90)<<" ENTER 1 FOR YES AND 2 FOR NO AND ANY OTHER IF ASKED "<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<" Are you currently experiencing any symptoms of covid-19  :: ->   ";
            cin.sync();
            cin>>a;
            if(a=='1')
            {
                cout<<endl<<setw(85)<<" Are you  Experirencing  Cough :: ->   ";
                cin.sync();
                cin>>a1;
                if(a1!='1' && a1!='2')
                {
                    invalid();
                    continue;
                }
                cout<<endl<<setw(85)<<" Are you  Experirencing  Fever :: ->   ";
                cin.sync();
                cin>>a2;
                if(a2!='1' && a2!='2')
                {

                    continue;
                }
                cout<<endl<<setw(85)<<" Are you  Experirencing  Body Ache :: ->   ";
                cin.sync();
                cin>>a3;
                if(a3!='1' && a3!='2')
                {
                    invalid();
                    continue;
                }
                cout<<endl<<setw(85)<<" Are you  Experirencing  Difficulty in Breathing :: ->   ";
                cin.sync();
                cin>>a4;
                if(a4!='1' && a4!='2')
                {
                    invalid();
                    continue;
                }

            }
            else if(a=='2')
            {
                system("pause"); 

            }
            else
            {
                invalid();
                    continue;

            }
            cout<<endl<<setw(112)<<"Do you have  any pre-existing health problem like (Diabetes,Lung disease , Heart disease etc...)  :: ->   ";
            cin.sync();
            cin>>b;
            if(b!='1' && b!='2')
            {
                    invalid();
                    continue;
            }
            cout<<endl<<setw(70)<<"Have you met anyone who has been tested COVID-19 positive  :: ->   ";
            cin.sync();
            cin>>c;
            if(c=='1')
            {
                cout<<endl<<setw(133)<<"Have you come in contact with a tested COVID-19 positive but at a relatively log distance or for short duration :: ->   ";
                cin>>c1;
                if(c1=='1')
                {


                }
                else if(c1=='2')
                {
                    cout<<endl<<setw(133)<<" Have you met someone who has been tested COVID-19 positive but your interaction was limited and socially distant :: ->   ";
                    cin.sync();
                    cin>>c2;
                    if(c2=='1')
                    {}
                    else if(c2=='2')
                    {
                        cout<<endl<<setw(85)<<" You have recently met someone who has been tested COVID-19positive and you came in close proximity with \n"<<setw(85)<<"that someone during the meeting and/or for a significant period of time :: ->   ";
                        cin.sync();
                        cin>>c3;
                        if(c3!='1' && c3!='2')
                        {
                           invalid();
                           continue;
                        }

                    }
                    else
                    {
                        invalid();
                    continue;
                        
                    }
                }
                else
                {
                    invalid();
                    continue;
                }              
               
            }
            else if(c=='2')
            {
                system("pause"); 

            }
            else
            {
                invalid();
                    continue;

            }
            cout<<endl<<setw(71)<<"Have you Recently Visited any Red Zone Area Of COVID -19 :: ->   ";
            cin.sync();
            cin>>d;
            if(a== '2' && b== '2' && c== '2' && d=='2')
            {
                result="LOW RISK OF INFECTION";
                cout<<endl<<endl<<setw(71)<<" R E S U L T  ->    "<<result<<endl;
                z=2;
            }
            else if(a== '1' && b== '1' && c== '1' && d=='1')
            {
                result="HIGH RISK OF INFECTION";
                cout<<endl<<endl<<setw(71)<<" R E S U L T  ->    "<<result<<endl;
                z=2;

            }
            else if(a1=='1' && (c1=='1' || c2=='1'))
            {
                result="MEDIUM RISK OF INFECTION";
                cout<<endl<<endl<<setw(71)<<" R E S U L T  ->    "<<result<<endl;
                z=2;
            } 
            else if((a1=='1' && a2=='1' && a3=='1') || (a2=='1' && a3=='1' && a4=='1') || (a3=='1' && a4=='1' && a1=='1'))
            {
                result="HIGH RISK OF INFECTION";
                cout<<endl<<endl<<setw(71)<<" R E S U L T  ->    "<<result<<endl;
                z=2;

            }
            else if(c3==1)
            {
                result="HIGH RISK OF INFECTION";
                cout<<endl<<endl<<setw(71)<<" R E S U L T  ->    "<<result<<endl;
                z=2;

            }
            else
            {
                result="MEDIUM RISK OF INFECTION";
                cout<<endl<<endl<<setw(71)<<" R E S U L T  ->    "<<result<<endl;
                z=2;

            }
          
            cout<<endl<<endl<<"Stay-at-home directives are issued to protect you, your family, and the public at large." <<endl<<endl;
            cout<<endl<<endl<<setw(90)<<" S T A Y  A T  H O M E  S T A Y  S A F E ." <<endl<<endl;
            system("pause");
 

            }
            return result;
        }   
    void rule()
        {
            
            system("cls");
            char strr[500];
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|          C O V I D - 1 9   A S S I S M E N T  R U L E                 |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
                f1.open("status.txt");
                int j=0;
                while(j!=252)
                {
                   f1.getline(strr,150);
                   j++;
                
                }
                while(j!=291)
                {
                   f1.getline(strr,200);
                   cout<<"\n"<<strr<<endl;
                   j++;
                }
                f1.close();
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");
        }
      
};     
class Guide_lines
{
    public:
    void guideline()
        {
                system("Color 30");
                system("cls");
                char strr[500];
                cout<<endl<<endl;
                cout<<setw(134)<<"|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|"<<endl;
                cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<endl<<endl<<endl;
                cout<<setw(103)<<"###############################################################"<<endl;
                cout<<setw(103)<<"|   C O V I D - 1 9  G O V E R M E N T  G U I D E L I N E S   |"<<endl;
                cout<<setw(103)<<"###############################################################"<<endl<<endl;
                cout<<endl;
                cout<<"**************************************************************************************************************************************************"<<endl;
                ifstream f1;
                f1.open("status.txt");
                int j=0;
                while(j!=134)
                {
                   f1.getline(strr,150);
                   j++;
                
                }
                while(j!=174)
                {
                   f1.getline(strr,200);
                   cout<<"\n"<<strr<<endl;
                   j++;

                }
                f1.close();
                cout<<"**************************************************************************************************************************************************"<<endl;
                cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
                cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
                cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
                system("pause");
        }
};
class Helpline
{
    public:
    void gov_helpline()
        {
            system("Color 57");
            system("cls");
            system("cls");
            char strr[500];
            cout<<endl<<endl;
            cout<<setw(134)<<"|&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|"<<endl;
            cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
            cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
            cout<<endl<<endl<<endl;
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|   C O V I D - 1 9  G O V E R M E N T  H E L P L I N E  N U M B E R    |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
                f1.open("status.txt");
                int j=0;
                while(j!=174)
                {
                   f1.getline(strr,150);
                   j++;
                
                }
                while(j!=252)
                {
                   f1.getline(strr,200);
                   cout<<"\n"<<strr<<endl;
                   j++;

                }
                f1.close();
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");


        }

};
class Vaccine : public Extra
{
    public:
       void covid_vaccine()
       {
           system("cls");
           system("Color 97");
            
	         
            int a=0;
            while(a!=3)
            {  
                system("cls");
                cout<<endl<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;                 
                cout<<setw(103)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(103)<<"|   C O V I D - 1 9  V A C C I N E  T R A C K E R    |"<<endl;
                cout<<setw(103)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                cout<<endl<<endl<<endl;
                cout<<setw(103)<<"---------------------------------------------"<<endl;
                cout<<setw(103)<<" ( 1 ) ENTER 1 TO YOUR DETAIL IF VACCINATED. "<<endl;
                cout<<setw(103)<<"---------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(107)<<"--------------------------------------------------------"<<endl;
                cout<<setw(107)<<" ( 2 ) ENTER 2 TO GET THE LIST OF VACCINATION CENTERS . "<<endl;
                cout<<setw(107)<<"--------------------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl;
                cout<<setw(100)<<" ( 3 ) ENTER 3 TO RETURN TO PREVIOUS MENU . "<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl;
                cout<<setw(100)<<" ( 4 ) ENTER 4 TO EXIT THE APPLICATION .    "<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                cin.sync();
                a=checkk();
                switch(a)
                {
                    case 1:
                    covid_vaccinated();
                        
                    break;
                    case 2:
                    vaccine_cent();
                    break;
                    case 3:
                       
                    break;
                    case 4:
                    exitt();
                    break;
                    default:
                    break;
                }


            }
        }
       void covid_vaccinated()
       {
            char a='1';
            while(a!='2')
            {
            system("cls");
            string name;
            string number;
            string address;
            string age;
            startingg();
            cout<<setw(95)<<"***********************************************"<<endl;
            cout<<setw(95)<<"|       E n t e r  y o u r  D e t a i l s       |"<<endl;
            cout<<setw(95)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(67)<<"|    E N T E R   Y O U R  N A M E    |"; cout<<"   \t --->>  ";
            cin.ignore(1,'\n');
            getline(cin,name);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    E N T E R   Y O U R  P H O N E  N U M B E R    |"; cout<<"   \t --->>  ";
            getline(cin,number);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    E N T E R   Y O U R  A D D R E S S     |"; cout<<"   \t --->>  ";
            getline(cin,address);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    E N T E R   Y O U R  A G E      |"; cout<<"   \t --->>  ";
            getline(cin,age);
            ifstream f1;
        
            string fnumber;
            
            int co=1;

            f1.open("Vaccinated_person.txt");
                
                 while(f1.eof()==0)
                 {  
                   f1>>fnumber;
                   
                   if(number==fnumber)
                   {
                       co=0;
                   }
                 }  
               
            f1.close();
            if(co==0)
            {
                cout<<endl<<endl<<setw(100)<<"This Mobile Number Has Been used Please use Another Number"<<endl;
                cout<<setw(95)<<"-------------------------------------------"<<endl;
                cout<<setw(95)<<" ( 1 ) ENTER 1 TO RETRY.                   "<<endl;
                cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl;
                   cout<<setw(95)<<" ( 2 ) ENTER 2 TO RETURN TO PREVIOUS MENU . "<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                   cin.sync();
                   cin>>a;
                   system("pause");


                
            }
            else
            {
                int count = 0;
                string line;
 
                /* Creating input filestream */ 
                ifstream file("Vaccinated_person.txt");
                while (getline(file, line))
                {
                  count++;
                }
                count=count-4;
                ofstream f2;
                count++;
                f2.open("Vaccinated_person.txt",ios::app);
                f2<<setw(1)<<count<<setw(30)<<name<<setw(15)<<number<<setw(20)<<address<<setw(8)<<age<<endl;
                
                f2.close();
                cout<<setw(67)<<"D A T A  S U C C E S S F U L L Y  I N S E R T E D"<<endl;
                a='2';
                system("pause");
             }
            }          
           
            
       }
       void vaccine_cent()
        {
           int a=7;
           while(a!=3)
           {
            system("cls");
            char strrr[500];
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|        L I S T  O F  C O V I D  V A C C I N E  C E N T E R S          |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(107)<<"-------------------------------------------------"<<endl;
            cout<<setw(107)<<" ( 1 ) ENTER 1 TO KNOW COVID CENTERS IN INDORE . "<<endl;
            cout<<setw(107)<<"-------------------------------------------------"<<endl<<endl<<endl;
            cout<<setw(107)<<"-------------------------------------------------"<<endl;
            cout<<setw(107)<<" ( 2 ) ENTER 2 TO KNOW COVID CENTERS IN BHOPAL . "<<endl;
            cout<<setw(107)<<"-------------------------------------------------"<<endl<<endl<<endl;
            cout<<setw(104)<<"-------------------------------------------"<<endl;
            cout<<setw(104)<<" ( 3 ) ENTER 3 TO RETURN TO PREVIOUS MENU . "<<endl;
            cout<<setw(104)<<"-------------------------------------------"<<endl<<endl<<endl;
            cout<<setw(110)<<"---------------------------------------------------------"<<endl;
            cout<<setw(110)<<"VISIT BELOW SITE TO KNOW ALL COVID CENTERS IN  INDIA.    "<<endl;
            cout<<setw(110)<<"---------------------------------------------------------"<<endl<<endl<<endl;
            cout<<setw(160)<<"------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<setw(160)<<"  https://www.uhcpindia.com/web/statenotifications/documents/Networks/Vaccine%20Information%20&%20Govt%20Approved%20Vaccine%20Centres.pdf   "<<endl;
            cout<<setw(160)<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
            cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
            cin.sync();
            a=checkk();
            Vaccine vac;
            switch (a)
            {
            case 1:
                vac.bhopal();
                break;
            case 2:
                vac.indore();
                break;
            
            default:
                break;
            }

           }


        }
       void bhopal()
       {
            system("cls");
            char strrr[500];
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|        L I S T  O F  C O V I D -19  V A C C I N E  C E N T E R S      |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
            f1.open("status.txt");
            int j=0;
            while(j!=72)
            {
                f1.getline(strrr,150);
                j++;
                
            }
            while(j!=101)
            {
                f1.getline(strrr,150);
                cout<<"\n"<<strrr<<endl;
                j++;

            }
            f1.close();
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");

       }
       void indore()
       {
            system("cls");
            char strrr[500];
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|        L I S T  O F  C O V I D -19  V A C C I N E  C E N T E R S      |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
            f1.open("status.txt");
            int j=0;
            while(j!=101)
            {
                f1.getline(strrr,150);
                j++;
                
            }
            while(j!=134)
            {
                f1.getline(strrr,150);
                cout<<"\n"<<strrr<<endl;
                j++;

            }
            f1.close();
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");

       }
       
};
class Admin : public Extra
{
    public:
    void admin_log()
        {
            system("cls");
            system("Color 5f");
              
	         
            int a=0;
            string b,c;
            while(a!=2)
            {  
                system("cls");
                cout<<endl<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                 
                cout<<setw(96)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(96)<<"|   A D M I N I S T R A T O R  L O G I N     |"<<endl;
                cout<<setw(96)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(67)<<"PASSWORD -> 123456"<<endl;
                cout<<setw(67)<<"|  E N T E R   P A S S W O R D    |"; cout<<"   \t --->>  ";
                cin.sync();
                cin>>c;
                b="123456";
                if(c==b)
                {
                   cout<<endl<<endl<<endl;
                   cout<<setw(85)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   cout<<setw(85)<<"  C O R R E C T  P A S S W O R D   "<<endl;
                   cout<<setw(85)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   system("pause");
                   admin();
                   break;

                }
                else
                {
                   cout<<endl<<endl<<endl;
                   cout<<setw(90)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   cout<<setw(90)<<"  I N C O R R E C T  P A S S W O R D   "<<endl;
                   cout<<setw(90)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

                   cout<<setw(95)<<"-------------------------------------------"<<endl;
                   cout<<setw(95)<<" ( 1 ) ENTER 1 TO RETRY.                   "<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl;
                   cout<<setw(95)<<" ( 2 ) ENTER 2 TO RETURN TO PREVIOUS MENU . "<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl;
                   cout<<setw(95)<<" ( 3 ) ENTER 3 TO EXIT THE APPLICATION .    "<<endl;
                   cout<<setw(95)<<"-------------------------------------------"<<endl<<endl<<endl;
                   cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                   cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                   cin.sync();
                   a=checkk();
                   if(a==3)
                   {
                       exitt();
                    }



                }


            }  
        }
    void admin()
        {
            system("cls");
            system("Color 97");

            int a=0;
            while(a!=4)
            {  
                system("cls");
                cout<<endl<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                 
                cout<<setw(103)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(103)<<"|      W E L C O M E  A D M I N I S T R A T O R      |"<<endl;
                cout<<setw(103)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                cout<<endl<<endl<<endl;
                cout<<setw(103)<<"-----------------------------------------------"<<endl;
                cout<<setw(103)<<" ( 1 ) ENTER 1 TO UPDATE CURRENT COVID STATUS. "<<endl;
                cout<<setw(103)<<"-----------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(107)<<"--------------------------------------------------------"<<endl;
                cout<<setw(107)<<" ( 2 ) ENTER 2 TO THE LIST OF COVID VACCINATED PERSON . "<<endl;
                cout<<setw(107)<<"--------------------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(107)<<"-----------------------------------------------------------"<<endl;
                cout<<setw(107)<<" ( 3 ) ENTER 3 TO THE LIST OF COVID ASSISMENT  PERFORMED . "<<endl;
                cout<<setw(107)<<"-----------------------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(100)<<"----------------------------------------"<<endl;
                cout<<setw(100)<<" ( 4 ) ENTER 4 TO RETURN TO MAIN MENU . "<<endl;
                cout<<setw(100)<<"----------------------------------------"<<endl<<endl<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl;
                cout<<setw(100)<<" ( 5 ) ENTER 5 TO EXIT THE APPLICATION .    "<<endl;
                cout<<setw(100)<<"-------------------------------------------"<<endl<<endl<<endl;
                cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<setw(67)<<"|  E N T E R   Y O U R  C H O I C E   |"; cout<<"   \t --->>  ";
                cin.sync();
                a=checkk();
                switch(a)
                {
                    case 1:
                    status_update();
                    

                        
                    break;
                    case 2:
                    covid_vacci_list();
                    break;
                    case 3:
                    covid_assis_list();


                    case 4:
                       break;
                    case 5:
                    exitt();
                    break;
                    default:
                    break;
                }


            }
        }
    void status_update()
        {
            system("Color 5e");
            system("cls");
            string active;
            string recoverd;
            string decresed;
            
                cout<<endl<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<setw(134)<<"|              W E L C O M E  T O  C O V I D - 19  S E L F  C A R E  A N D  V A C C I N E  T R A C K E R                 |"<<endl;
                cout<<setw(134)<<"|************************************************************************************************************************|"<<endl;
                cout<<endl<<endl;
            cout<<setw(95)<<"********************************************************"<<endl;
            cout<<setw(95)<<"|       E n t e r  U p d a t e e d  D e t a i l s      |"<<endl;
            cout<<setw(95)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<setw(67)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(67)<<"|    NUMBER OF    A C T I V E  C A S E S     |"; cout<<"   \t --->>  ";
            cin.ignore(1,'\n');
            getline(cin,active);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    NUMBER OF   R E C O V E R E D  C A S E S       |"; cout<<"   \t --->>  ";
            getline(cin,recoverd);
            cout<<endl<<endl;
            cout<<setw(71)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<setw(71)<<"|    NUMBER OF    D E C R E S E D  C A S E S     |"; cout<<"   \t --->>  ";
            getline(cin,decresed);
            cout<<endl<<endl;
            ofstream f2;
                f2.open("covid_status.txt");
                f2<<setw(14)<<"|";
                f2<<setw(21)<<active<<"             |";
                f2<<setw(8)<<"|";
                f2<<setw(20)<<recoverd<<"              |";
                f2<<setw(8)<<"|";
                f2<<setw(20)<<decresed<<"              |"<<endl;                     
                f2.close();

            cout<<setw(95)<<"************************************************************"<<endl;
            cout<<setw(95)<<"|      R E C O R D  U P D A T E D  S U C E S S F U L L Y   |"<<endl;
            cout<<setw(95)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            system("pause");
       


        }
    void covid_vacci_list()
        {
            
            system("cls");
            char strr[500];
            cout<<endl<<endl;
            startingg();
            cout<<setw(113)<<"*************************************************************************"<<endl;
            cout<<setw(113)<<"|        L I S T  O F  C O V I D  V A C C I N A T E D  P E R S O N       |"<<endl;
            cout<<setw(113)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
            f1.open("Vaccinated_person.txt");
                while(f1.eof()==0)
                {
                   f1.getline(strr,200);
                   cout<<"\n"<<strr<<endl;
                  

                }
                f1.close();
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");

        }
    void covid_assis_list()
        {
            
            system("cls");
            char strr[500];
            cout<<endl<<endl;
            startingg();
            cout<<setw(118)<<"*****************************************************************************************"<<endl;
            cout<<setw(118)<<"| L I S T  O F  P E R S O N  W H O  H A V E  P E R F O R M E D  C O V I D  ASSISMENT    |"<<endl;
            cout<<setw(118)<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<endl;
            cout<<endl;
            cout<<"**************************************************************************************************************************************************"<<endl;
            ifstream f1;
            f1.open("Covid_test.txt");
                while(f1.eof()==0)
                {
                   f1.getline(strr,200);
                   cout<<"\n"<<strr<<endl;

                }
            f1.close();
            cout<<"**************************************************************************************************************************************************"<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl;
            cout<<setw(106)<<"  P R E S S  A N Y  K E Y  T O  G O  T O  P R E V I O U S  M E N U  . "<<endl;
            cout<<setw(106)<<"----------------------------------------------------------------------"<<endl<<endl;
            system("pause");

        }
 

};

int main()
{    
    int a;
    int d=0;
    Front_page fro;
    fro.os_check();
    fro.starting();
    
while(a!=7)
    {
        
        a = fro.main_menu();

        switch(a)
        {
            case 1:
               Covid_status c1;
               c1.current_status();
               break;
            case 2:
                Self_assisment c2;
                c2.covid_self();

               break;
            case 3:
                Guide_lines c3;
                c3.guideline();
               break;
            case 4:
                Helpline c4;
                c4.gov_helpline();
               break;
            case 5:
                Vaccine c5;
                c5.covid_vaccine();

               break;
            case 6:
               Admin c6;            
               c6.admin_log();
               break;
            case 7:
                c1.exitt();
                break;
            default:
               break;
        }
    }
    fro.exitt();
    return 0;
}