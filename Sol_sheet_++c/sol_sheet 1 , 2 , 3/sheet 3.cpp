#include <iostream>
#include <string.h>
using namespace std;
//4. Define the array max size using a constant (using #define)
#define size 10
int counter =1 ;

//2. Define two user-defined enumeration types for the customer��s gender and another one for his bank status
enum Gender {male , female};
enum Status {active , inactive };

/*3. The structure consists of:
 a. Name(string),
 b. Age(float),
 c. Balance(float),
 d. Gender (male, female),
 e. Status (active, inactive)
*/
struct  customer
{
 string  name ;
 int age  ;
 float balance ;
 Gender  gender ;
 Status status ;
};
/* 5. Make a function to enter information of the customers.
 Use default arguments to initialize the customer information
 if the user did not enter the information of a customer. */
 void enter_data(customer &c) ;
 inline float add_balance(float add ) ;  //6. Define an inline function that adds the interest (20%) to the balance when necessary.
 void update_name(customer &c );//7. Make a function named ��update�� to update the name of a certain bank customer using call by reference for the structure
 void update_enum(customer &c ) ;//8. Make a second (overloaded) function named ��update�� to update any enumeration valued fields
 void update_age_balance(customer &c );//9.Make a third function named ��update�� to update  (Age/Balance)
 void setdata(customer arr[][10],int n,int m) ;
 void display(customer[][10],int n,int m) ;

int main()
{

 int n =0 , m =0 ;
 char w[20]  , update ;
 string st ;
   customer arr [size][size] ;
   cout<<"Please enter n , m dimensional array of customer's data "<<endl;
   cin>>n>>m;

   setdata(arr , n, m) ;
   display(arr , n, m) ;

   cout<<"To update customer's data enter y/n  : \n ";
   cin>>update;
   if(update == 'y')
   {
       cout<<"To update customer's data enter name  : \n ";
       cin>>st;
       for(int i=0 ; i<n ; i++)
           for(int j=0 ; j<m ; j++)
       {
           if ( st == arr[i][j].name )
           {
           update_name(arr[i][j]);
           update_enum(arr[i][j]);
           update_age_balance(arr[i][j]);
           }

       }
      display(arr , n , m ) ;
   }
    else
    return(0);

     return 0;
}


 void enter_data(customer &c )
 {
     c.name = "" ;
     c.age = 0 ;
     c.balance = 0 ;
     c.gender = male ;
     c.status = inactive ;
     char w[10] ;
     int i =1 ;
     cout<< " Enter  customer name  "<<counter<<") : \n " ;
     cin>>c.name ;
     cout<< " Enter  customer age : \n " ;
     cin>>c.age ;
     cout<< " Enter  customer balance : \n " ;
     cin>>c.balance ;
     cout<< " Enter  customer gender : \n " ;
     do
     {
     cin>>w ;
     if ( strcmp (w , "female") ==0)
        {c.gender = female ;
        break;
        }
        else if (strcmp(w , "male")==0)
       {c.gender = male ;
        break ;}
        else
       cout<< " ***** ERORR ***** \n Tray again to  Enter  customer gender : \n " ;
     }while(i=1) ;

     cout<< " Enter  customer status : \n " ;
        do
     {
     cin>>w ;
     if (strcmp(w , "active")==0)
        {c.status = active ;
        break;
        }
        else if (strcmp(w , "inactive")==0)
       {c.status = inactive ;
        break ;}
        else
       cout<< "***** ERORR ***** \n Tray again to  Enter  customer status : \n " ;
     }while(i=1) ;


        }

 inline float add_balance(float add )
 {
    return( add + add/5);
 }

void update_name(customer &c  )
{

    cout<<" Please enter new name customer : \n " ;
    cin>>c.name;

}

void update_enum(customer &c  )
{
    char w[10] ;
    int i=1 ;
    cout<< " Enter update customer gender : \n " ;
     do
     {
     cin>>w ;
     if ( strcmp (w , "female") ==0)
        {c.gender = female ;
        break;
        }
        else if (strcmp(w , "male")==0)
       {c.gender = male ;
        break ;}
        else
       cout<< " ERORR \n Tray again to  Enter update customer gender : \n " ;
     }while(i=1) ;

     cout<< " Enter  update customer status : \n " ;
        do
     {
     cin>>w ;
     if (strcmp(w , "active")==0)
        {c.status = active ;
        break;
        }
        else if (strcmp(w , "inactive")==0)
       {c.status = inactive ;
        break ;}
        else
       cout<< " ERORR \n Tray again to  Enter  customer gender : \n " ;
     }while(i=1) ;


        }
void update_age_balance(customer &c )
{
    char w ;
    float add ;
     cout<< " Enter update customer age : \n " ;
     cin>>c.age ;
     cout<< " Enter update customer balance : \n " ;
     cin>>c.balance ;
     cout<< "Add the interest (20%) to the balance  y/n   :\n  " ;
     cin>>w;
     if(w =='y')
     {
    add = c.balance ;
    c.balance = add_balance(add) ;
}
}
void setdata(customer arr[][10],int n,int m)
{
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++)
            {enter_data(arr[i][j]);
            counter++; }
            counter=1;
    }

void display(customer arr[][10],int n,int m)
{
    cout<<"Name\t"<<"Age\t"<<"Balance\t"<<"Gender\t"<<"status\t"<<endl;
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++)
        {

            cout<<arr[i][j].name<<"\t"<<arr[i][j].age<<"\t"<<arr[i][j].balance<<"\t" ;

            if(arr[i][j].gender == 0)
                cout<<"male\t";
                else
                cout<<"female";

            if(arr[i][j].status == 0)
                cout<<"active\n"<<endl;
                else
                cout<<"inactive \n"<<endl;
        }

}
