#include<iostream>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<string>
#include<fstream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

fstream f;
string a;

void timer(int sec)
{
    Sleep(sec*1000);
}

class cortex
{
        public:
        int n=20;
        char ans;
        string username,password,g_username,g_password,realname,dob,email,phone,country,game[20],dlc[20],frnd[20],grp[20];
        string get_name();
        string get_pwd();
        void get_game(int num);//put game
        void get_grp(int gnum);//put grp
        void get_frnd(int fnum);//put frnd
        void get_dlc(int dnum);//put dlc
        void new_user_getdata();
        void new_user_putdata();
        void buy_game(int num);// get game
        void buy_dlc(int dnum);//get dlc
        void add_frnd( int fnum);//get frnd
        void join_grp( int gnum);// get grp
        void gamer_putdata();
        void gamer();
        void developer();
        void admin();



};

cortex c;



//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

string cortex:: get_name()
{
        return g_username;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


string cortex::get_pwd()
{
        return g_password;
}

void cortex::get_game(int num)
{// yolo
        cout<<"\n CORTEX GAME LIBRARY  : ";
        for(int i=0;i<num;++i)
        cout<<"\n"<<game[i]<<"\n";
}

void cortex::get_dlc(int dnum)
{
        cout<<"\n CORTEX DLC LIBRARY : ";
        for(int i=0;i<dnum;++i)
        cout<<"\n"<<dlc[i]<<"\n";
}



void cortex::get_grp(int gnum)
{
        cout<<"\n Groups Joined  : ";
        for(int i=0;i<gnum;++i)
        cout<<"\n"<<grp[i]<<"\n";
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void cortex::get_frnd(int fnum)
{
        cout<<"\n Your Friends  :  ";
        for(int i=0;i<fnum;++i)
        cout<<"\n"<<frnd[i]<<"\n";
        
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void cortex::new_user_getdata()
{   goto_newuser:    
    cout<<"\n Welcome to :CORTEX \n\t\t\tFor Gamers, Made By Gamers \n ";
    cout<<"\n Lets get you started with creating your own CORTEX account ";
    int flag =0;
    cout<<"\n Enter Your Username (This will be the username displayed on your profile and Games and you play both online and offline ):   ";
    cin>>username;
    f.open("cortex.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        while(f)
        {f.read((char*)&c,sizeof(c));
        if(get_name()==username)
        {flag=1;
        break;
        }
        else
        {flag=0;
        break;
        }
        }
        f.close();
    if(flag==0)
    {cout<<"\n Username has benen assigned";
    cout<<"\n Create your password :   ";
    cin>>password;
    cout<<"\n Enter Your Name :   ";
    cin>>realname;
    cout<<"\n Enter your Phone Number :   ";
    cin>>phone;
    cout<<"\n Enter Your Email address  :   ";
    cin>>email;
    cout<<"\n Enter your Country :   ";
    cin>>country;
    cout<<"\n Enter Your Date of Birth (dd/mm/yyyy)  :     ";
    cin>>dob;
    cout<<"\n Your account has been created, Thank you for using CORTEX \n";
    }

    else
    {
            cout<<"\n Username taken, Please try again ! .................";
            timer(2);
            goto goto_newuser;
                   
    }
    
}


//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



void cortex::new_user_putdata()
{
        cout<<"\n  Check out your new created CORTEX account  :  ";
        cout<<"\n NAME :  ";
                cout<<realname;
        cout<<"\n USER NAME  :  ";
                cout<<username;
        cout<<"\n PHONE NUMBER  :  ";
                cout<<phone;
        cout<<"\n EMAIL ADDRESS  :  ";
                cout<<email;
        cout<<"\n COUNTRY  :  ";
                cout<<country;
        cout<<"\n DATE OF BIRTH  :  ";
                cout<<dob;
        cout<<"\n Thank you for using CORTEX !  ";
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void cortex::buy_game(int num)
{
        cout<<"\n Enter the Correct Game title from the catalog provided : ";
        for(int i=0;i<num;++i)
        cin>>game[i];
}

void cortex::buy_dlc(int dnum)
{
           cout<<"\n Enter the Correct DLC title from the catalog provided : ";
           for(int i=0;i<dnum;++i)
           cin>>dlc[i];
}

void cortex::add_frnd(int fnum)
{
        cout<<"\n Enter the Name of User(s) whom you would like to add as friends :  ";
        for(int i=0;i<fnum;++i)
           {cin>>frnd[i];
}
}

void cortex::join_grp(int gnum)
{
        cout<<"\n Enter the names of the Group(s) you would like to join : ";
        for(int i=0;i<gnum;++i)
        cin>>grp[i];
}


void cortex::gamer_putdata()
{
        cout<<"\n Your CORTEX profile : ";
        cout<<"\n NAME : ";
        cout<<"\n"<<realname;
        cout<<"\n GAMER TAG :  ";
        cout<<username;
        cout<<"\n PHONE NUMBER :  ";
        cout<<phone;
        cout<<"\n EMAIL ADDRESS :  ";
        cout<<email;
        cout<<"\n COUNTRY :  ";
        cout<<country;
        cout<<"\n DATE OF BIRTH :  ";
        cout<<dob;
}



//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void cortex::gamer()
{       
        int t=0,flag=0;
        string ipname;
        cout<<"\n Please Enter your Username :";
        cin>>ipname;
        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        while(f)
        {f.read((char*)&c,sizeof(c));
        if(ipname==get_name())
        {flag=0;
        break;
        }
        else
        {flag=1;
        break;
        }}
        f.close();
     if(flag==0)
    {cout<<"\n GREETINGS FELLOW GAMER! ";
    cout<<"\n Please Enter your password : ";
    cin>>g_password;
    f.open("cortex.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        while(f)
        {f.read((char*)&c,sizeof(c));
        if(get_pwd()==g_password)
        {flag=0;
        break;
        }
        else
        {flag=1;
        break;
        }}
        f.close();
     if(flag==0)
    {
            cout<<"\n LOGIN SUCCESFULL! ";
    int a,b,j;
    
    goto_gamer:

    cout<<"\n"<<ipname<<"'s CORTEX ACCOUNT : \n 1) Profile Overview  \n 2) Edit Account details \n 3) Buy a Game \n 4) Buy a DLC \n 5) Request refund for a Game/DLC \n 6) Add a friend \n 7) Share a game \n 8) Remove a friend \n 9) Join a Group \n 10) Exit a Group \n 11) Inventory Overview  \n 12) Return to the main menu \n 13) Exit";
    cin>>a;

    switch(a)
    {case 1: {cout<<"\n  Your CORTEX profile : ";
                f.open("cortex.txt",ios::binary|ios::in|ios::out);
                f.read((char*)&c,sizeof(c));
                gamer_putdata();
                f.close();
                timer(5);
                system("cls");
                goto goto_gamer;
                break;
                }

    case 2:{
            goto_update:
            system("cls");
            cout<<"\n Which of the following do you wish to change? :  \n 1)Password \n 2) Name \n 3) Phone Number \n 4) Email address \n 5) Country \n 6) Date of Birth \n 7) Return to the Gamer lobby  " ;
           cin>>b;
           switch(b)
           {case 1: {cout<<"\n Enter new password:  ";
                        f.open("cortex.txt",ios::binary|ios::in|ios::ate);
                        cin>>password;
                        f.write((char*)&c,sizeof(c));
                        f.close();
                        cout<<"\n Password changed to :  "<<password;
                        timer(3);
                        system("cls");
                        goto goto_gamer;
                        break;
                        }

           case 2:{cout<<"\n Enter the new Name :   ";
                        f.open("cortex.txt",ios::binary|ios::in|ios::ate);
                        cin>>realname;
                        f.write((char*)&c,sizeof(c));
                        f.close();
                        cout<<"\n Password changed to :  "<<realname;
                        timer(3);
                        system("cls");
                        goto goto_gamer;
                        break;
                        }
	   case 3:{cout<<"\n Enter your new Phone number :   ";
                        f.open("cortex.txt",ios::binary|ios::in|ios::ate);
                        cin>>phone;
                        f.write((char*)&c,sizeof(c));
                        f.close();
                        cout<<"\n Phone number changed to :  "<<phone;
                        timer(3);
                        system("cls");
                        goto goto_gamer;
                        break;
                        }

           case 4:{cout<<"\n Enter your new email address :    ";
                        f.open("cortex.txt",ios::binary|ios::in|ios::ate);
                        cin>>email;
                        f.write((char*)&c,sizeof(c));
                        f.close();
                        cout<<"\n Email address changed to :   "<<email;
                        timer(3);
                        system("cls");
                        goto goto_gamer;
                        break;
                        }

           case 5:{cout<<"\n Enter your new resident country  :   ";
                        f.open("cortex.txt",ios::binary|ios::in|ios::ate);
                        cin>>country;
                        f.write((char*)&c,sizeof(c));
                        f.close();
                        cout<<"\n Residence country changed to :    "<<country;
                        timer(3);
                        system("cls");
                        goto goto_gamer;
                        break;
                        }

           case 6:{cout<<"\n Enter the date of birth :   ";
                        f.open("cortex.txt",ios::binary|ios::in|ios::ate);
                        cin>>dob;
                        f.write((char*)&c,sizeof(c));
                        f.close();
                        cout<<"\n Your Date of Birth has been changed to :    "<<dob;
                        timer(3);
                        system("cls");
                        goto goto_gamer;
                        break;
                        }

            case 7:cout<<"\n Returning to the Gamer lobby....";
                   timer(1);
                   goto goto_gamer;
                   break;

          default:cout<<"\n Oops! Wrong input entered, Please choose the desired option between 1-7. Thank You!";
                   timer(5);
                   system("cls");
                   goto goto_gamer;
                   break;
           }
           break;
           }

    case 3:{cout<<"\n CORTEX GAME STORE CATALOG : \n 1) GTA-V \n 2) Battlefield-4 \n 3) NFS-II SE \n 4) NFS-THE RUN \n 5) Ghost Recon Wildlands \n 6) Battlefeild 3 \n 7) Counter Strike :Global Offensive \n 8) Far Cry : Collection  \n 9) Watch Dogs : Collection \n 10) Assassin's Creed : Collection \n 11) GTA-IV \n 12) GTA-III \n 13) Half-Life 2 \n 14) Garry's Mod \n 15) Rainbow Six Seige \n 16) Apex Legends \n 17) Fifa-19 \n 18) Uncharted - Collection \n 19) Prince of Persia : Collection \n 20) Division";
           int y;
           cout<<"\n How many game(s) do you wish to buy ? : ";
           cin>>y;
           f.open("cortex.txt",ios::binary|ios::trunc|ios::in|ios::out);
           buy_game(y);
           f.write((char*)&c,sizeof(c));
           f.close();
           cout<<"\n The Game(s) have been added to your library,";
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           get_game(y);
           f.close(); 
           cout<<"\n Thank you for using Cortex!";
           timer(3);
           system("cls");
           goto goto_gamer;
           break;
           }

    case 4:{int y;
            cout<<"\n CORTEX DLC STORE CATALOG : \n 1) Finance and felony \n 2) Final Stand \n 3) Mc Laren F1 car pack \n 4)Lamborghini Aventador car pack \n 5)Predator Skin  \n 6) Close Quaters Map \n 7) Danger Zone expansion \n 8) Jason Brody character skin \n 9) Aiden Pearce Character skin \n 10) Ezio Collection map  \n 11) Lost and the Damned expansion  \n 12) Claude character expansion  \n 13) 4k texture pack \n 14) Gravity Gun skins \n 15) Ash ACOG skin  \n 16) Mirage skins \n 17) 20000 FUT point \n 18) The lost legacy expansion \n 19) Dahaka skins  \n 20) Washington DC expansion";
           cout<<"\n How many DLC(s) do you wish to buy ? ";
           cin>>y;
           f.open("cortex.txt",ios::binary|ios::trunc|ios::in|ios::out);
           buy_dlc(y);
           f.write((char*)&c,sizeof(c));
           f.close();
           cout<<"\n The DLC(s) have been added to your library. ";
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           get_dlc(y);
           f.close(); 
           cout<<"\n Thank you for using Cortex!";
           timer(3);
           system("cls");
           goto goto_gamer;
           break;
            }


// lit

    case 5:{goto_gamerefund:
            string gname;
            int flag=0;
           cout<<"\n Enter the game title for which you like to request the refund :  ";
           cin>>gname;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));// ERROR WALA PART
           while(f)
           {
                   f.read((char*)&c,sizeof(c));
                   for(int i=0;i<20;++i)
                   {if(game[i]==gname)
                   {flag=0;
                   break;
                   }
                   else
                   {
                           flag =1;
                           break;
                   }
                   }
           }
                   f.close();
                    if(flag==0)
                    {
                            cout<<"\n Request for refund for the game : "<<gname<<" has been initiated, the amount will be credited in your account within 10 days";
                            timer(5);
                        system("cls");
                        goto goto_gamer;
                    }       
                    else
                     {cout<<"\n Please Enter the correct game title! ";
                     timer(3);
                     goto goto_gamerefund;
                     }
                     break;
           }
    case 6:{int y;
           cout<<"\n How many users would you like to add as friends ?   ";
           cin>>y;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           add_frnd(y);
           f.write((char*)&c,sizeof(c));
           f.close();
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           get_frnd(y);
           f.close(); 
           timer(3);
                        system("cls");
                        goto goto_gamer;
           break;
           }
    case 7:{int flag=0;
           string gname,sfrnd;
           cout<<"\n Enter the game title which you would like to share :  ";
	   cin>>gname;
           cout<<"\n Enter the Name of your friend whom you would like to share the game with :  ";
           cin>>sfrnd;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           while(f)
           {f.read((char*)&c,sizeof(c));
            for(int i=0;i<20;++i)
           {if(game[i]==gname)
           {if(frnd[i]==sfrnd)
           {flag=0;
           break;
           }
           }
           else
           {flag=1;
           break;
           }
           }
           }
           f.close();

           if(flag==0)
           {++t;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f>>t;
           f.write((char*)&c,sizeof(c));
           f.close();
                
           cout<<"\n The game : "<<gname<<" has been shared with your friend : "<<sfrnd;
           cout<<"\n Thank you for making Cortex a bigger place!!";
           timer(3);
           system("cls");
           goto goto_gamer;
           }
           else
           {cout<<"\n Please Enter the correct game title ";
           timer(3);
           system("cls");
           goto goto_gamer;
           }
           break;
           }

    case 8:{goto_delfrnd:
            string del_frnd;
            cout<<"\n Enter the Name of Friend you would like to delete from your friend list :  ";
           cin>>del_frnd;
           int i=0;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           while(f)
        {for( i=0;i<20;++i)
                {if(del_frnd==frnd[i])
                {int flag=0;
                
                break;
                }
                else
                {flag=1;
                break;
                }
                }
                }
                f.close();
        if(flag==0)
        {
                for(int j=i; j<(n-1); j++)
			{
				frnd[j]=frnd[j+1];
			}
                        cout<<"\n Friend  removed";
                        timer(3);
           system("cls");
           goto goto_gamer;
        }
        else
        {cout<<"\n User with the name : "<<del_frnd<<" does not exist in your friend list, please try again";
        timer(3);
           system("cls");
           goto goto_delfrnd;
        }
        break;
         }

    case 9:{int y;
            cout<<"\n How many Groups would you like to join  ? ";
            cin>>y;
            f.open("cortex.txt",ios::binary|ios::in|ios::out);
           join_grp(y);
           f.write((char*)&c,sizeof(c));
           f.close();
           cout<<"\n Joined ! ";
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           get_grp(y);
           f.close(); 
           timer(3);
           system("cls");
           goto goto_gamer;
           break;}

    case 10:{goto_delgrp:
            string del_grp;
            cout<<"\n Enter the Name of group you would like to leave : ";
           cin>>del_grp;
           int i=0;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           while(f)
        {for( i=0;i<20;++i)
                {if(del_grp==grp[i])
                {int flag=0;
                
                break;
                }
                else
                {flag=1;
                break;
                }
                }
                }
                f.close();
        if(flag==0)
        {
                for(int j=i; j<(n-1); j++)
			{
				grp[j]=grp[j+1];
			}
                        cout<<"\n You have left the Group : "<<del_grp;
                        timer(5);
           system("cls");
           goto goto_gamer;
        }
        else
        {cout<<"\n Group with the name : "<<del_grp<<" does not exist in the list of groups you have joined , please try again";
        timer(5);
           system("cls");
           goto goto_delgrp;
        }
        break;
         }

    case 11: {int i=0;
             cout<<"\n CORTEX : INVENTORY OVERVIEW";
             cout<<"\n This is your CORTEX GAME LIBRARY : ";
             f.open("cortex.txt",ios::binary|ios::in|ios::out);
             f.read((char*)&c,sizeof(c));
             for(i=0;i<20;++i)
             {f.read((char*)&c,sizeof(c));/// iska table banao
             cout<<"\n Games : "<<game[i]<<"\n DLC(s) : "<<dlc[i]<<"\n Trades ( Game shares) : "<<t<<"\n Group(s) Joined : "<<grp[i]<<"\n Friend(s) : "<<frnd[i];
             }
             f.close();
             timer(5);
             system("cls");
             goto goto_gamer;
             break;
             }
    
    case 12:cout<<"\n Returning to main menu....";
            //goto goto_mainmenu;    
             break; 
   
   case 13:exit(0);
            break;

    default:cout<<"\n Oops! Wrong input entered, Please choose the desired option between 1-13. Thank You!";
            timer(5);
           system("cls");
           goto goto_gamer;
            break;
}
}
}
else if(flag>0)
{
        cout<<"\n User Name and password do not match please try again ! ";
        timer(5);
        system("cls");
        goto goto_gamer;
}}



//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



void cortex::developer()
  {     goto_dev:
          int ch;
  cout<<"\n LOGING IN AS A GAME DEVELOPER ";
  cout<<"\n What would you like to do today \n 1) Deploy Anti cheat measures \n 2) Publish a game \n 3) Add a New DLC \n 4) Process the refund transaction \n 5) Update a Game \n 6) Return to the main menu \n 7) Exit ";
  cin>>ch;
  switch(ch)
  {case 1:{cout<<"\n Anti Cheat measured Deployed";
          timer(5);
          system("cls");
          goto goto_dev;
          break;
          }
   case 2: {string dgame;
           cout<<"\n Enter the name of the game you want to publish";
           cin>>dgame;
           cout<<"\n The game : "<<dgame<<" has been published to the Cortex Store";
           timer(5);
          system("cls");
          goto goto_dev;
           break;
           }

   case 3:{string ddlc;
           cout<<"\n Enter the name of the dlc you want to add to the game : ";
           cin>>ddlc;
           cout<<"\n The DLC : "<<ddlc<<" has been added to the cortex store ";
          cout<<"\n Thank you !";
           timer(5);
          system("cls");
          goto goto_dev;
           break;
           }

   case 4:{cout<<"\n Transaction processed, the amount will reflect in the user's account within 10 days";
          timer(5);
          system("cls");
          goto goto_dev;
          break;
          }

   case 5:{int flag=0;
          string dgname,cglog;
          float v;
          cout<<"\n Enter the name of the game you want to update";
          cin>>dgname;
          for(int i=0;i<n;++i)
          {if(dgname==game[i])
          {flag==0;
           break;
          }
          else
          {flag=1;
          break;
          }}
          if(flag==0)
        {cout<<"\n Enter the current version of the game";
        cin>>v;
        cout<<"\n Enter the changelogs in the new update";
        cin>>cglog;
	    cout<<"\n The Game : "<<dgname<<" has been updated to "<<v+0.1;
            timer(5);
          system("cls");
          goto goto_dev;
        }
        else
        {
                cout<<"\n The game : "<<dgname<<" not found, please try again !";
                timer(5);
          system("cls");
          goto goto_dev;
        }
        break;
        }
   
   case 6:cout<<"\n Returning to the Main menu....";
          //goto goto_mainmenu;  
          break;   

   case 7:exit(0);
          break;     
   
   default:cout<<"\n Wrong input entered, Please choose the desired option from 1-7 and try again";
         timer(5);
          system("cls");
          goto goto_dev;
           break;

}
cout<<"\n Thank You for using CORTEX, we wish to see you again";
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



void cortex::admin()
{       goto_admin:
        int s,pin=1337;
        string  ip,reason;
        cout<<"\n Enter the Administrator's 4 DIGIT PIN";
        cin>>pin;
        if(pin==1337)
        {cout<<"\n LOGING IN AS THE CORTEX DATABASE ADMNISTRATOR";
        cout<<"\n What do you wish to do today? \n 1) BAN a user  \n 2) Authorize transaction  \n 3) Remove a game from the store \n 4) Remove a DLC from the store \n 5) Remove a Group  \n 6) Remove a User \n 7) Return to the main menu \n 8) Exit";
        cin>>s;
        switch(s)
{case 1:{int flag=0;
        cout<<"\n Enter the name of the user you wish to BAN";
        cin>>ip;

        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        while(f)
        {f.read((char*)&c,sizeof(c));
        if(ip==get_name())
        {flag=0;
        break;
        }
        else
        {flag=1;
        break;
        }
        }
        f.close();
        if(flag==0)
        {cout<<"\n  Enter reason for banning the user : ";
        cin>>reason;
        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        get_name()==reason;///////////// error wala part
        f.write((char*)&c,sizeof(c));
        f.close();
        cout<<"\n User has been banned " ;
        timer(5);
         system("cls");
         goto goto_admin;
        }
        else
        cout<<"\n User not found, please try again !";// something to go back to
        break;
        }
case 2: {int s;
        cout<<"\n 1) Refund transaction \n 2) Payment to the store transaction";
        cin>>s;
        switch(s)
        {case 1: cout<<"\n Transaction for refund processed";
                timer(5);
                system("cls");
                goto goto_admin;
                break;
        case 2:cout<<"\n Transaction for payment authorized";
                timer(5);
                system("cls");
                goto goto_admin;
                break;
        }
        break;
        }
case 3: {cout<<"\n Enter the name of the game you wish to remove";
        cin>>ip;
           int i=0,flag=0;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           while(f)
        {for( i=0;i<n;++i)
                {if(ip==game[i])
                {flag=0;
                break;
                }
                else
                {flag=1;
                break;
                }
                }
                }
                f.close();
        if(flag==0)
        {
                cout<<"\n Enter the reason for removing the game ( note that this message will be displayed to the developer)";
	        cin>>reason;
                game[i]=" Game has been removed by the Administrator, Contact the developer for more information ";
                for(int j=i; j<(n-1); j++)
			{
				game[j]=game[j+1];
			}
                        cout<<"\n Game removed from the cortex store ";
                        timer(5);
         system("cls");
         goto goto_admin;
        }
        else
        {cout<<"\n The game title : "<<ip<<"  does not exist , please try again ";
        timer(5);
         system("cls");
         goto goto_admin;
        }
        break;
         }




case 4: {cout<<"\n Enter the name of the DLC you wish to remove";
        cin>>ip;
           int i=0,flag=0;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           while(f)
           {for( i=0;i<n;++i)
                {if(ip==dlc[i])
                {flag=0;
                break;
                }
                else
                {flag=1;
                break;
                }
                }
                }
                f.close();
        if(flag==0)
        {
                cout<<"\n Enter the reason for removing the DLC ( note that this message will be displayed to the developer)";
	        cin>>reason;
                dlc[i]=" DLC has been removed by the Administrator, Contact the developer for more information ";
                for(int j=i; j<(n-1); j++)
			{
				dlc[j]=dlc[j+1];
			}
                        cout<<"\n DLC removed from the cortex store ";
                        timer(5);
         system("cls");
         goto goto_admin;
        }
        else
        {cout<<"\n The DLC title : "<<ip<<"  does not exist , please try again ";
        timer(5);
         system("cls");
         goto goto_admin;
        }
        break;
        }

case 5: {cout<<"\n Enter the name of the Group you wish to delete";
        cin>>ip;
           int i=0,flag=0;
           f.open("cortex.txt",ios::binary|ios::in|ios::out);
           f.read((char*)&c,sizeof(c));
           while(f)
        {for( i=0;i<n;++i)
                {if(ip==grp[i])
                {flag=0;
                break;
                }
                else
                {flag=1;
                break;
                }
                }
                }
                f.close();
        if(flag==0)
        {
                cout<<"\n Enter the reason for deleting the Group ( note that this message will be displayed to the developer)";
                cin>>reason;
                grp[i]=" Group has been deleted by the Administrator, Contact the Group members for more information ";
                for(int j=i; j<(n-1); j++)
			{
				grp[j]=grp[j+1];
			}
                        cout<<"\n Group removed  ";
        timer(5);
        system("cls");
        goto goto_admin;
        }
        else
        {cout<<"\n The Group with the name : "<<ip<<"  does not exist , please try again ";
        timer(5);
         system("cls");
         goto goto_admin;
        }
        break;
         }

case 6: {fstream tf;
        int flag=0;
        cout<<"\n Enter the name of the user you wish to remove : ";
        cin>>ip;

        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        while(f)
        {f.read((char*)&c,sizeof(c));
        if(ip==get_name())
        {flag=0;
        break;
        }
        else
        {flag=1;
        break;
        }
        }
        f.close();
        if(flag==0)
        {cout<<"\n  Enter reason for removing the user : ";
        cin>>reason;
        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        tf.open("temp.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        while(f)// error
        {if(flag==0)
        {cout<<"\n Details of user to be removed : ";
                gamer_putdata();
        }
        else
        tf.write((char*)&c,sizeof(c));
        }
        f.close();
        tf.close();
        remove("cortex.txt");
        rename("temp.txt","cortex.txt");
        cout<<"\n User has been removed due to : "<<reason;
        timer(5);
         system("cls");
         goto goto_admin;
        }
        else
        {cout<<"\n User not found, please try again !";
        timer(5);
         system("cls");
         goto goto_admin;
        break;
        }
        }

case 7: cout<<"\n Returning to the Main menu....";
        //goto goto_mainmenu;  
        break;   

case 8: exit(0);
        break; 

default:{cout<<"\n Wrong input entered, Please choose the desired option from 1-8 and try again";
        timer(5);
         system("cls");
         goto goto_admin;
        break;
        }
}
cout<<"\n Thank you for using CORTEX.";
}
        else
        {cout<<"\n Wrong PIN entered Please try again!!"; 
        cout<<"\n Thank you for using CORTEX.";
        goto goto_admin;
        }
}




//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
int choice,d;
char ans,t;

do
{system("cls");
system("color 1F");

        cout<<"\n\t  ,ad8888ba,     ,ad8888ba,    88888888ba   888888888888  88888888888  8b        d8  ";
        cout<<"\n \t d8      ` 8b   d8      ` 8b   88       8b       88       88            Y8,    ,8P   ";
        cout<<"\n \td8             d8         `8b  88      ,8P       88       88             `8b  d8     ";
        cout<<"\n \t88             88          88  88aaaaaa8P        88       88aaaaa          Y88P      ";
        cout<<"\n \t88             88          88  88    88          88       88               d88b      ";
        cout<<"\n \tY8,            Y8,        ,8P  88    `8b         88       88             ,8P  Y8,  ";
        cout<<"\n \t Y8a.    .a8P   Y8a.    .a8P   88     `8b        88       88            d8     `8b   ";
        cout<<"\n \t  ` Y8888Y       ` Y8888Y      88      `8b       88       88888888888  8P        Y8  ";


cout<<"\n\n\n\n                                       ---------Game Library simplified";

cout<<"\n Press ENTER to continue";
getch();
goto_mainmenu:
system("cls");
system("color 9F");
cout<<"\n LOG IN  AS :\n 1) EXISTING USER. \n 2) DEVELOPER \n 3) ADMINISTRATOR \n 4) CREATE A NEW ACCOUNT. \n 5) QUIT";
cin>>choice;

switch(choice)
{
case 1: system("CLS");
         system("color f1");
         cout<<"\n WELCOME! ";
         c.gamer();
         timer(1);
         system("cls");
         goto goto_mainmenu;
         break;
        
case 2: system("cls");
        system("color f1");
        cout<<"\n WELCOME! ";
        c.developer();
        timer(1);
         system("cls");
         goto goto_mainmenu;
        break;

case 3: system("cls");
        system("color f1");
        cout<<"\n WELCOME! ";
        c.admin();
        timer(1);
         system("cls");
         goto goto_mainmenu;
        break;        

case 4: system("cls");
        system("color f1");

        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        c.new_user_getdata();
        f.write((char*)&c,sizeof(c));
        f.close();

        f.open("cortex.txt",ios::binary|ios::in|ios::out);
        f.read((char*)&c,sizeof(c));
        c.new_user_putdata();
        f.close();    
        timer(1);
         system("cls");
         goto goto_mainmenu;    
        break;

case 5:exit(0);
       break;

default:cout<<"\n Wrong input entered , Please choose the desired option from 1-3 and try again";
        cout<<"\n Returning to the main menu.....";
         timer(3);
         system("cls");
         goto goto_mainmenu;
        break;
}
cout<<"\n TERMINATING CORTEX.... Press Y to run again or any other key to exit"; /// iska kuch karo monday
cin>>ans;
}

while(ans=='Y'||ans=='y');
system("pause");
return 0;
}