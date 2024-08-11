//    Date:  20-04-2023
//    First day on project.
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<windows.h>
using namespace std;
int col(int a)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    return SetConsoleTextAttribute(h, a);
}

class Voting
{
    public:
    int age;
    double  id;
    int pvote=0,uvote=0,tvote=0,avote=0,nvote=0,ivote=0,svote=0;
     int voted_to;
     double wid;
    int getid()
    {
      return id;  
    }
    void get_votingdata();
};
void Voting :: get_votingdata()
{

        cout<<"\n";
        col(1);
        cout<<"_____________________________________________________________________________________"<<endl;
        cout<<"\n";
        col(2);
        cout<<"                        #. Enter your age\t";
        col(3);
        cin>>age;
        col(1);
        cout<<"_____________________________________________________________________________________"<<endl;
        //col(1);
        if(age<18)
        {
            cout<<"\n";
            col(4);
            cout<<"\t\tYou are not Eligible for Voting\n";
        }
        else
        {
            col(2);
            cout<<"-------------------------------"<<endl;
            col(3);
            cout<<"  you are Eligible for Voting"<<endl;
            col(2);
            cout<<"-------------------------------"<<endl;
            cout<<endl;
            cout<<"                     * Enter your  id\n";
            cout<<"                       ";cin>>id;
            ofstream on("Checking.dat",ios::app|ios::binary);
            cout<<endl;
            ifstream in;
            int b;
            in.open("Checking.dat",ios::in|ios::binary);
            while(in>>wid)
            {
                if(wid==getid())
                {
                    b=1;
                    system("cls");
                }
            }
            in.close();
            if(b==1)
            {
                cout<<"YOU HAVE ALREADY VOTED"<<endl;
            }
            else
            {
            //getid();
            cout<<"\n";
            cout<<"\n";
            cout<<"*************************************************************************************"<<endl;
            cout<<"                         Whom you want to vote"<<endl;
            cout<<"*************************************************************************************"<<endl;
            cout<<endl;
            cout<<"                         1.PIYUSH\n";
            cout<<"                         2.UJJWAL\n";
            cout<<"                         3.TILAKDHARI\n";
            cout<<"                         4.ANNU\n";
            cout<<"                         5.NEELIMA\n";
            cout<<"                         6.IMRAN\n";
            cout<<"                         7.SHRIYANSH\n";
            cout<<endl;
            cout<<"                  ...................                           "<<endl;
            cout<<"                        ";cin>>voted_to;
            cout<<"                  ...................                           "<<endl;
            switch(voted_to)
           {
             cout<<"**********************************************************************************"<<endl;
             cout<<"                              VOTING PAGE                                         "<<endl;
             cout<<"**********************************************************************************"<<endl;
             cout<<endl;
             cout<<endl;
             cout<<endl;
             cout<<endl;
             case 1 :
             cout<<"\t\tThanks you for voting PIYUSH\n";
             pvote++;
             //ppvote=pvote;
             break;
             case 2 :
             cout<<"\t\tThanks you for voting UJJWAL\n";
             uvote++;
             //uuvote=uvote;
             break;
             case 3 :
             cout<<"\t\tThanks you for voting TILAKDHARI\n";
             tvote++;
             //ttvote=tvote;
             break;
             case 4 :
             cout<<"\t\tThanks you for voting ANNU\n";
             avote++;
             break;
             case 5 :
             cout<<"\t\tThanks you for voting NEELIMA\n";
             nvote++;
             //nnvote=nvote;
             break;
             case 6 :
             cout<<"\t\tThanks you for voting IMRAN\n";
             ivote++;
              //iivote=ivote;
             break;
             case 7 :
             cout<<"\t\tThanks you for voting SHRIYANSH\n";
             svote++;
             //ssvote=svote;
             break; 
             default:
             cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
             cout<<"\t\twrong choice"<<endl; 
             cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
         
            }
        }
        on<<id<<endl;
        on.close();
        
    }
}
class Result:public Voting
{
  public:
  void show_votingdata();
  void parties_result();


};
void Result ::show_votingdata()
{
  
    cout<<"__________________________________________________________________________________"<<endl;
    cout<<"\tVOTER AGE"<<"\tVOTER ID"<<"\tVOTED TO S.NO:"<<endl;
    cout<<"\t"<<setw(6)<<age<<"\t"<<setw(13)<<id<<"\t"<<setw(12)<<voted_to<<endl;
    /*cout<<"\t\tage of the voter is ->\t"<<age<<endl;
    cout<<"\t\t id of the voter ->\t"<<id<<endl;
    cout<<"\t\tThe voter has voted to S.No:-"<<voted_to<<endl;*/

}
void Result::parties_result()
{
  cout<<"************************************************************************************"<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"                1. Piyush \t\t"<<pvote<<"votes"<<endl;
  cout<<"                2. Ujjwal \t\t"<<uvote<<"votes"<<endl;
  cout<<"                3. Tilakdhari \t\t"<<tvote<<"votes"<<endl;
  cout<<"                4. Annu \t\t"<<avote<<"votes"<<endl;
  cout<<"                5. Neelima \t\t"<<nvote<<"votes"<<endl;
  cout<<"                6. Imran\t\t"<<ivote<<"votes"<<endl;
  cout<<"                7. SHRIYANSH \t\t"<<svote<<"votes"<<endl;
}
Voting vote;
Result r;
fstream vf;
void startvoting();
void Dresult();
void Presult();
void Deletevote();
void Updatevote();
void Login();
void Register();
void Forget();
int main()
{
    system("cls");
    int choice;
    char ch;
    do
    {
        col(5);
    cout<<"_____________________________________________________________________________________"<<endl;col(7);
    cout<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*."<<endl;col(2);
    cout<<"                                   WELCOME TO SVIETVOTE                              "<<endl;col(7);
    cout<<"*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl;col(5);
    cout<<"_____________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    col(4);
    cout<<"                   -------------------------------------------------                 "<<endl;col(6);
    cout<<"                     Voting is not only our Right,It is our Power.                   "<<endl;col(4);
    cout<<"                   -------------------------------------------------                 "<<endl;
    cout<<endl;
    cout<<endl;
    col(4);
    cout<<"_____________________________________________________________________________________"<<endl;
    cout<<endl;
    col(6);
    cout<<"                                MENU:                                                "<<endl;
    cout<<endl;
    col(5);
    cout<<"                                    1. Login"<<endl;
    cout<<"                                    2. Register"<<endl;
    cout<<"                                    3. Forget username or password"<<endl;
    cout<<"                                    4. Exit"<<endl;
    col(4);
    cout<<"_____________________________________________________________________________________"<<endl;
    col(1);
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    cout<<endl;
    col(1);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    switch(choice)
    {
        case 1: 
            Login();
            break;
        case 2:
            Register();
            break;
        case 3:
        system("cls");
            Forget();
            break;
        case 4:
            system("cls");
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"******************************************************************************"<<endl;
            cout<<"                       THANK YOU FOR VISITING...                              "<<endl;
            cout<<"******************************************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"******************************************************************************"<<endl;
            cout<<endl;
            cout<<"                          HAVE A NICE DAY.                                      "<<endl;
            cout<<"****************************************************************************************"<<endl;
            exit(0);
        break;
    }
    col(8);
    cout<<endl;
    cout<<"                           TO return in Main menu";col(3);cout<<"  Press Y \n";
    cout<<endl;col(8);
    cout<<"                           To exit from program ";col(3);cout<<"   Press N."<<endl;
    cin>>ch;
    }
    while(ch=='y'|ch=='Y');
    return 0;
}
inline void Login()
    {
        int count;
        string name,pass,n,p;
        system("cls");
       col(6);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"|";col(7);cout<<"*********************************************************************************";col(6);cout<<"|"<<endl;col(6);
    cout<<"|                                                                                 |"<<endl;
    col(6);
    cout<<"|";col(4);cout<<"                                LOGIN PAGE              ";col(6);cout<<"                         |"<<endl;
    cout<<"|                                                                                 |"<<endl;
    col(6);
    cout<<"|";col(7);cout<<"*********************************************************************************";col(6);cout<<"|"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n";col(4);

        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                  "<<endl;col(2);
        cout<<"Please enter Following details \n";col(4);
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~              "<<endl;
        cout<<"\n";col(3);
        cout<<"        * NAME:";
        cin>>name;
        cout<<"        * PASSWORD:";
        cin>>pass;
        ifstream lin;
        lin.open("login_file.dat");
        while(lin>>n>>p)
        {
            if(n==name && p==pass)
            {
                count=1;
                system("cls");
            }
        }
        lin.close();
        if(count==1)
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
          col(4);
          cout<<"*************************************************************************************"<<endl;col(6);
          cout<<"                    WELCOME You have successfully Login.                        "<<endl;col(4);
          cout<<"*************************************************************************************"<<endl;
          cout<<endl;
          char cho;
         do
        {
          char x;
          col(5);
          //cout<<"....................................................................................."<<endl;
          cout<<"                       OPTIONS:          "<<endl;
          col(1);
          cout<<"                ....................................................                   "<<endl;
          cout<<"                |                                                  |\n";
          cout<<"                |";col(6);cout<<"               A.Voting      ";col(1);cout<<"                     |\n";
          cout<<"                |";col(6);cout<<"               B.See Detail result   ";col(1);cout<<"             |\n";
          cout<<"                |";col(6);cout<<"               C.Parties Result      ";col(1);cout<<"             |\n";
          cout<<"                |";col(6);cout<<"               D.Delete vote           ";col(1);cout<<"           |\n";
          cout<<"                |                                                  |\n";col(1);
          cout<<"                ....................................................                  "<<endl;
          col(5);
          cout<<"                          *  What do you want to do\t";
          cin>>x;
          //int a=1;
          switch(x)
           {
             case 'A' :
             system("cls");
             cout<<"**********************************************************************************"<<endl;
             cout<<"                              VOTING PAGE                                         "<<endl;
             cout<<"**********************************************************************************"<<endl;
             cout<<endl;
             cout<<endl;
             //cout<<"you are here for voting \n";
             //vote.get_votingdata();
             startvoting();
       
             break;

             case 'B' :
             system("cls");
              cout<<"-*-*-*-*-*-*-*-*-*--*-*-*-*-*-*-*-*--*-*-*--*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*--*-*-*"<<endl;
              cout<<"                                     RESULT PAGE"<<endl;
              cout<<"-*-*-*-*-*-*-*-*-*--*-*-*-*-*-*-*-*--*-*-*--*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*--*-*-*"<<endl;
                  cout<<endl;
                  cout<<endl;
                  cout<<endl;
                  cout<<endl;
                  cout<<endl;
                //cout<<"you are here for knowing the result of election.\n";
                //vote.show_votingdata();
                Dresult();
                 break;
             case 'C' :
                system("cls");
                cout<<endl;
                cout<<endl;
                cout<<"                                     Parties result\n";
                cout<<"____________________________________________________________________________________"<<endl;
                cout<<endl;
                //cout<<"Round "<<a++<<endl;
                Presult();
                //vote.parties_result();
                break;
             case 'D':
                cout<<"Delete record\n";
                Deletevote();
                break;
                default:cout<<"wrong choice...\n";

            }
            cout<<endl;
            cout<<endl;
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
             cout<<"Do you wnat to do another operation Y or N\n";
             cin>>cho;
             cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        }
            while (cho=='y'|cho=='Y');
        
          cin.get();
          //main();
        }
        else
        {
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"                  ..................login failed..................."<<endl;
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
           // main();
        }
    }
inline void Register()
{
    string rname,rpass,rn,rp;
    system("cls");
    col(6);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"|";col(7);cout<<"*********************************************************************************";col(6);cout<<"|"<<endl;col(6);
    cout<<"|                                                                                 |"<<endl;
    col(6);
    cout<<"|";col(4);cout<<"                                REGISTRATION PAGE              ";col(6);cout<<"                  |"<<endl;
    cout<<"|                                                                                 |"<<endl;
    col(6);
    cout<<"|";col(7);cout<<"*********************************************************************************";col(6);cout<<"|"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n";
    cout<<"                ----------------------- "<<endl;
    col(3);
    cout<<"                  # Enter name:";
    cin>>rname;
    col(6);
    cout<<"                -----------------------"<<endl;
    col(3);
    cout<<"                  # Enter password:";
    cin>>rpass;
    col(6);
    cout<<"                -----------------------"<<endl;
    ofstream obj;
    obj.open("login_file.dat",ios::app|ios::binary);
    obj<<rname<<" "<<rpass<<endl;
    cout<<"\n";
    cout<<" ************************************************************************************"<<endl;col(2);
    cout<<"\n                    ........ Registration successfull.........                      "<<endl;col(6);
    cout<<"\n************************************************************************************"<<endl;
    //main();
}
 inline void Forget()
{
    int count =0;
    string sname,sn,sp;
    cout<<"_____________________________________________________________________________________"<<endl;
    cout<<"                                           HELP CENTRE                              "<<endl;
    cout<<"_____________________________________________________________________________________"<<endl;
    cout<<"\n";
    cout<<" -> Enter your previous name:";
    cin>>sname;
    ifstream fin;
    fin.open("login_file.dat");
    while(fin>>sn>>sp)
    {
        if(sn==sname)
        {
            count=1;
        }
    }
    fin.close();
    if(count==1)
    {
        cout<<"oooooooooooooooooooooooooooooooooooooooo"<<endl;
        cout<<"\n * Congratulation -> Account found"<<endl;
        cout<<"oooooooooooooooooooooooooooooooooooooooo"<<endl;
        cout<<"_____________________________________________________________________________________"<<endl;
        cout<<"\n                             your passward is :->"<<sp<<endl;
        cin.get();
        cout<<endl;
        //system("cls");
        //main();
    }
    else
    {
        cout<<"*****************************************************************************************"<<endl;
        cout<<"                ........./ SORRY We didn't find your Account /......"<<endl;
        cout<<"*****************************************************************************************"<<endl;
        cin.get();
        main();

    }
}
 inline void startvoting()
{
    vf.open("Voting_file.dat",ios::app|ios::binary);
     r.get_votingdata();
     

     vf.write((char*)&r,sizeof(r));
     vf.close();

}
inline void Dresult()
 {
    vf.open("Voting_file.dat",ios::in|ios::binary);
    if(!vf)
    {
        cout<<"................................................................................"<<endl;
        cout<<"                            voting file doesn't exist"<<endl;
        cout<<"................................................................................"<<endl;
        exit(0);
    }
    else{
        vf.read((char*)&r,sizeof(r));
        while(!vf.eof())
        {
            r.show_votingdata();
            vf.read((char*)&r,sizeof(r));
        }
    }
    vf.close();
 }
  inline void Presult()
 {
    vf.open("Voting_file.dat",ios::in|ios::binary);
    if(!vf)
    {
        cout<<"................................................................................"<<endl;
        cout<<"voting file doesn't exist"<<endl;
        cout<<"................................................................................"<<endl;
        exit(0);
    }
    else{
        vf.read((char*)&r,sizeof(r));
        while(!vf.eof())
        {
            int a=0;
            cout<<"Round "<<a+1<<endl;
            r.parties_result();
            vf.read((char*)&r,sizeof(r));
             
        }
    }
    vf.close();
 }
 inline void Deletevote()
 {
    double nid;
    cout<<"__________________________________________________________________________________________"<<endl;
    cout<<"                        /.........Deletion Page........../                        "<<endl;
    cout<<"__________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t Enter the id you want to delete";
    cin>>nid;
    ofstream vf1;
    vf1.open("new_voting.dat",ios::out|ios::binary);
    vf.open("Voting_file.dat",ios::in|ios::binary);
    if(!vf)
    {
        cout<<"__________________________________________________________________________________________"<<endl;
        cout<<"file not exist.\n";
        cout<<"__________________________________________________________________________________________"<<endl;
        exit(0);
    }
    else
    {
        vf.read((char*)&r,sizeof(r));
        while(!vf.eof())
        {
            if(nid!=r.getid())
            {
                vf1.write((char*)&r,sizeof(r));
            }
            vf.read((char*)&r,sizeof(r));
        }
        vf1.close();
        vf.close();
        remove("Voting_file.dat");
        rename("new_voting.dat","Voting_file.dat");
    }
 }