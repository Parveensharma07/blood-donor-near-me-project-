//IMPLEMENTATION OF BLOOD DONOR NEAR ME WITHIN A SMALL AREA

#include <iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class blood_donor
{
public:
    static int bloodgroup[8];

};
int blood_donor::bloodgroup[]={0,0,0,0,0,0,0,0};

class admin
{

public:

    void display();

    admin()
    {
        char s[20]="parveen";
        char str[20];
        cout<<"Enter password:";
        cin>>str;
        if(  strcmp(s,str)==0)
        {cout<<"welcome!!!"<<endl;
            display();}
        else
            cout<<"Please contact Parveen to become an admin"<<endl;

    }
};

void admin::display()
{
    cout<<"A +ve:"<<blood_donor::bloodgroup[0]<<endl;
    cout<<"O +ve:"<<blood_donor::bloodgroup[1]<<endl;
    cout<<"B +ve:"<<blood_donor::bloodgroup[2]<<endl;
    cout<<"AB +ve:"<<blood_donor::bloodgroup[3]<<endl;

    cout<<"A -ve:"<<blood_donor::bloodgroup[4]<<endl;
    cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;
    cout<<"B -ve:"<<blood_donor::bloodgroup[6]<<endl;
    cout<<"AB -ve:"<<blood_donor::bloodgroup[7]<<endl;
}

class patient
{
    char name[50];
    int age;
    char contact_no[15];
    char city[20];
    char blood_group[20];

public:

    int save();
    void show(int);
    void storepatdata();

};

int patient::save()
{
    int c,n;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"enter your age:";
    cin>>age;

    cin.ignore();
    cout<<"enter your city:";
    gets(city);

    cout<<"enter your contact no.:";
    cin.getline(contact_no,14);

    cout<<"Enter type of blood group you are looking for:"<<endl;

    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;


    cin>>c;

    cout<<"you will be donated with 1 blood packet"<<endl<<"Please login again to get 1 more blood packet"<<endl;

    show(c);
    return 0;
}

void patient::show(int c)
{
    cout<<"\nyour name: "<<name<<endl;
    cout<<"your age:    "<<age<<endl;
    cout<<"your city:   "<<city<<endl;
    cout<<"your contact:"<<contact_no<<endl;
    cout<<"\nAvailable blood groups compatible with the entered blood group:"<<endl;
    if(c==0)
    {
        cout<<"A +ve:"<<blood_donor::bloodgroup[0]<<endl;
        cout<<"A -ve:"<<blood_donor::bloodgroup[4]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;

       if(blood_donor::bloodgroup[0]>0)
            blood_donor::bloodgroup[0]--;
        else if(blood_donor::bloodgroup[4]>0)
            blood_donor::bloodgroup[4]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;
     }
    else if(c==1)
    {
        cout<<"O +ve:"<<blood_donor::bloodgroup[1]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;


       if(blood_donor::bloodgroup[1]>0)
            blood_donor::bloodgroup[1]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;
   }
      else if (c==2)
    {
        cout<<"B +ve:"<<blood_donor::bloodgroup[2]<<endl;
        cout<<"B -ve:"<<blood_donor::bloodgroup[6]<<endl;
        cout<<"O +ve:"<<blood_donor::bloodgroup[1]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;

        if(blood_donor::bloodgroup[2]>0)
            blood_donor::bloodgroup[2]--;
        else if(blood_donor::bloodgroup[6]>0)
            blood_donor::bloodgroup[6]--;
        else if(blood_donor::bloodgroup[1]>0)
            blood_donor::bloodgroup[1]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;

    }

    else if (c==3)
    {
        cout<<"A +ve:"<<blood_donor::bloodgroup[0]<<endl;
        cout<<"A -ve:"<<blood_donor::bloodgroup[4]<<endl;
        cout<<"B +ve:"<<blood_donor::bloodgroup[2]<<endl;
        cout<<"B -ve:"<<blood_donor::bloodgroup[6]<<endl;
        cout<<"AB +ve:"<<blood_donor::bloodgroup[3]<<endl;
        cout<<"AB -ve:"<<blood_donor::bloodgroup[7]<<endl;
        cout<<"O +ve:"<<blood_donor::bloodgroup[1]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;

        if(blood_donor::bloodgroup[0]>0)
            blood_donor::bloodgroup[0]--;
        else if(blood_donor::bloodgroup[4]>0)
            blood_donor::bloodgroup[4]--;
        else if(blood_donor::bloodgroup[2]>0)
            blood_donor::bloodgroup[2]--;
        else if(blood_donor::bloodgroup[6]>0)
            blood_donor::bloodgroup[6]--;
        else if(blood_donor::bloodgroup[3]>0)
            blood_donor::bloodgroup[3]--;
        else if(blood_donor::bloodgroup[7]>0)
            blood_donor::bloodgroup[7]--;
        else if(blood_donor::bloodgroup[1]>0)
            blood_donor::bloodgroup[1]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;


    }
    else if (c==4)
    {
        cout<<"A -ve:"<<blood_donor::bloodgroup[4]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;

        if(blood_donor::bloodgroup[4]>0)
            blood_donor::bloodgroup[4]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;

    }

    else if (c==5)
    {
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;
        cout<<"O +ve:"<<blood_donor::bloodgroup[1]<<endl;

        if(blood_donor::bloodgroup[1]>0)
            blood_donor::bloodgroup[1]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;


    }

    else if (c==6)
    {
        cout<<"B -ve:"<<blood_donor::bloodgroup[6]<<endl;
        cout<<"B +ve:"<<blood_donor::bloodgroup[2]<<endl;
        cout<<"O +ve:"<<blood_donor::bloodgroup[1]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;


        if(blood_donor::bloodgroup[6]>0)
            blood_donor::bloodgroup[6]--;
        else if(blood_donor::bloodgroup[2]>0)
            blood_donor::bloodgroup[2]--;
        else if(blood_donor::bloodgroup[1]>0)
            blood_donor::bloodgroup[1]--;
        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available"<<endl;

    }

    else if(c==7)
    {
        cout<<"A -ve:"<<blood_donor::bloodgroup[4]<<endl;
        cout<<"B -ve:"<<blood_donor::bloodgroup[6]<<endl;
        cout<<"O -ve:"<<blood_donor::bloodgroup[5]<<endl;
        cout<<"AB -ve:"<<blood_donor::bloodgroup[7]<<endl;


        if(blood_donor::bloodgroup[4]>0)
            blood_donor::bloodgroup[4]--;

        else if(blood_donor::bloodgroup[6]>0)
            blood_donor::bloodgroup[6]--;

        else if(blood_donor::bloodgroup[5]>0)
            blood_donor::bloodgroup[5]--;

        else if(blood_donor::bloodgroup[7]>0)
            blood_donor::bloodgroup[7]--;
        else
            cout<<"Compatible blood group not available"<<endl;
    }
}
  void patient::storepatdata()
  {
      ofstream out;
       out.open("patient1.txt",ios::app|ios::binary);
       out.write((char*)this,sizeof(*this));
       out.close();
  }

class donor
{   //DONOR DETAILS
    int age;
    char name[50];
    char sex[15];

    char blood_group[20];

    char phone_no[15];
    char city[20];
    char state[25];

public:

    int save();
    int display();
    void storedata();
   void viewalldonor();
   void searchDonor();

    int x,c;
};

int donor::save()
{
    cin.ignore();   //remove buffer memory of string which already exist
    cout<<"Enter your name:";
    gets(name);

    cout<<"Enter your sex:";
    gets(sex);

    cout<<"enter your age:";
    cin>>age;
    if(age>=18&&age<=60)
    {
        cout<<"you are eligible to donate blood"<<endl;
    }
    else{
        cout<<"you are no eligible"<<endl;
     return 0;
    }
    cin.ignore();
    cout<<"enter your city:";
    cin.getline(city,19);

    cout<<"enter your state: ";
    cin.getline(state,24);

    cout<<"Enter your phone no.:";
    gets(phone_no);

    cout<<"Enter type of blood group you are donating:"<<endl;

    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;

    cin>>c;

    cout<<"how many packets of blood are you donating:";
    cin>>x;

    blood_donor::bloodgroup[c]+=x;
    char ch;

    cout<<"Do you want your information to be displayed now(Y/N)";
    cin>>ch;

    if(ch=='Y'||ch=='y')
        donor::display();
    return 0;
}


int donor::display()
{
    cout<<"name:"<<name<<"  "<<"sex:"<<sex<<"  "<<"age:"<<age<<"  "<<"city:"<<city<<"  "<<"state"<<state<<"  "<<"phone_no"<<phone_no<<"  ";

cout<<"Blood group:";

    switch(c)
    {
            // A, O+, B+, AB+, A-, O-, B-, AB-
        case 0:
            cout<<"0 = A positive"<<endl;
            break;
        case 1:
            cout<<"1 = O positive"<<endl;
            break;
        case 2:
            cout<<"2 = B positive"<<endl;
            break;
        case 3:
            cout<<"3 = AB positive"<<endl;
            break;
        case 4:
            cout<<"4 = A negative"<<endl;
            break;
        case 5:
            cout<<"5 = O negative"<<endl;
            break;
        case 6:
            cout<<"6 = B negative"<<endl;
            break;
        case 7:
            cout<<"7 = AB negative"<<endl;
    }

    cout<<"Packets of blood:"<<x<<endl;

    return 0;
}
   void donor::storedata()
   {

       ofstream fout;
       fout.open("donor1.txt",ios::app|ios::binary);
       fout.write((char*)this,sizeof(*this));
       fout.close();

       cout<<"successful"<<endl;
   }
     void donor::viewalldonor()
   {
       ifstream fin;
       fin.open("donor1.txt",ios::in|ios::binary);
       if(!fin)
        cout<<"file not exist:";
       else
       {
           fin.read((char*)this,sizeof(*this));
           while(!fin.eof())
           {
               display();
               fin.read((char*)this,sizeof(*this));

           }
       fin.close();
       }



   }
   void donor::searchDonor()
   {
       int counter=0;
       char ci[20];

       cin.ignore();
       cout<<"enter the city";
       gets(ci);

       ifstream fin;
       fin.open("donor1.txt",ios::in|ios::binary);
       if(!fin)
        cout<<"file not exist";
       else
       {
          fin.read((char*)this,sizeof(*this));
          while(!fin.eof())
          {
             if(!strcmp(ci,city))
          {

                display();
                counter++;
          }
             fin.read((char*)this,sizeof(*this));
          }
          if(counter==0)
            cout<<"there is no donor from given city"<<endl;
          fin.close();
       }
   }
int main()
{
    int i=0,j=0;
    donor a[100];
    patient b[50];

    char c=NULL;
    cout<<"                             **************************************************************   "<<endl;
    cout<<"                                                     Blood Donor Near Me                      "<<endl;
    cout<<"                             **************************************************************   "<<endl;

    while(c!='5')
    {


        cout<<"          Enter \n  1 if you are the admin"<<endl;
        cout<<"  2 if you are a donor "<<endl;
        cout<<"  3 if you are a patient"<<endl;
        cout<<"  4 if you want to view all donor:"<<endl;
        cout<<"  5 if you want to exit:"<<endl;

        cin>>c;
        switch(c)
        {


            case '5':
                break;

            case '1':
            {
                admin t;
                char c;
                break;
            }

            case '2':
            {
                int k;
                static int i=0;
                cout<<"                             **************************************************************   "<<endl;
                cout<<"                                                      !!welcome donor!!                       "<<endl;
                cout<<"                             **************************************************************   "<<endl;
                cout<<"Please enter 1 if you want to enter your information:";
                cin>>k;
                if(k==1)
                    a[i].save();
                else if (k==2)
                    a[i++].display();

                a[i].storedata();

                break;
            }

            case '3':
            {
                static int i=0;
                cout<<"                             **************************************************************   "<<endl;
                cout<<"                                                      !!welcome Patient!!                       "<<endl;
                cout<<"                             **************************************************************   "<<endl;
                b[i++].save();
               b[i].storepatdata();
                break;
            }
            case '4':
                {
                    cout<<"viewing...";
                    a[i].viewalldonor();
                    break;
                }
            case '6':
                {
                    cout<<"searched donor"<<endl;
                    a[i].searchDonor();
                    break;
                }
            default:
                cout<<"please enter valid no.";
        }
    }
    return 0;
}

