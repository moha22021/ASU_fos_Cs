#include <iostream>

using namespace std;

int main()
{
    int var = 10 ;
    int *p2 = &var;
    int **p1;
    int arr[4] = {2 , 4 , 6 , 10} ;
    int *p3 = arr;
    int *ptr[4] ;
      p1=&p2 ;
      cout<<"Enter var     "<<endl;
      cin>>var;
      cout<<" var  =   "<<var<<endl;
      cout<<" *p2  =   "<<*p2<<endl;
      cout<<"**p1  =   "<<**p1<<endl;
      cout<<"&var  =   "<<&var<<endl;
      cout<<" *p1  =   "<<*p1<<"\n \n";


    for(int i=0 ; i<4 ; i++)
    {
        ptr[i] = &arr[i] ;  // assign the address of integer.
        cout<<*(p3+i)<<" ";
    }
      cout<<"\n\n";

        for(int i=0 ; i<4 ; i++)
         cout<<"Value of pointer   ptr ["<<i<<"] = "<<*ptr[i]<<endl ;

    return 0;
}
