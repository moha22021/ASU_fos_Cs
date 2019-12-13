#include <iostream>

using namespace std;

int main()
{

    int arr[5] ={1,2,3,5,8} ;
    int *ptr = arr ;

    cout<<"arr[i]  : " ;
    for(int i =0 ; i<5 ; i++ )
        cout<<arr[i]<<" ";

    cout<<"\n ptr[i]  : " ;
    for(int i =0 ; i<5 ; i++ )
        cout<<ptr[i]<<" ";

    cout<<"\n *(arr+i) : " ;
    for(int i =0 ; i<5 ; i++ )
      cout<<*(arr+i)<<" ";

    cout<<"\n *(ptr+i)  : " ;
    for(int i =0 ; i<5 ; i++ )
     cout<<*(ptr+i)<<" ";


   cout<<endl;
    return 0;
}
