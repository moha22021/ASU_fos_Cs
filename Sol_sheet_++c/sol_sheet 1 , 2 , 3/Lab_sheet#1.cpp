#include <iostream>

using namespace std;

/*  *******************Lab sheet # 1 *******************
                    Functions and array
*/

/*Q1) Write a function named "Number_of_Occurrences" that takes as its arguments
the following:
1- an array of integer values;
2- an integer that tells size of the array;
3- an integer named "target".




Q2) Write a function named "subtotal" takes as its arguments the following:
1- an array of floating point values;
2- an integer that tells the number of cells in the array.
The function should return an array which replaces the contents of each cell in the
input array with the sum of the contents of all the cells in the input array from the
left end to that cell. Thus,
for example, if the array passed to the function looks like this: 0 1 2 3 4 5.8 2.6
9.1 3.4 7.0 then when the function returns, the array will have been changed so
that it looks like this: 0 1 3 6 10 15.8 and so on
*/


int Number_of_Occurrences(int arr[] , int n , int target ) ; // Q1
void subtotal (float arr[] , int n ) ; //Q2


int main()
{
    cout<<"****** <Q 1 > ****** \n\n "; //Q1

    int const n = 5 ;
    int arr[n] = {1 , 1 , 2 , 3 , 5 } ;
    int target  ;

    for(int i = 0 ; i< n ; i++ )
        cout<<arr[i] <<"  ";

        cout<<endl;
        cout<<"target ="<<endl;
        cin>>target;


    if(Number_of_Occurrences(arr , n , target  ) == -1 )
      cout<<"the target is not exist :  " << endl ;
    else
      cout<<Number_of_Occurrences(arr , n , target  )<<endl;


      //***********************************************************

          cout<<"****** < Q2 > ******\n\n"; //Q2

      float arr2[10] = { 0 , 1 , 2 , 3 , 4 , 5.8 , 2.6 , 9.1 , 3.4 , 7.0 } ;

      for(int i = 0 ; i< 10 ; i++ )
        cout<<arr2[i] <<"  ";
        cout<<endl;

      subtotal (arr2 , 10 ) ;
      for(int i = 0 ; i< 10 ; i++ )
        cout<<arr2[i] <<"  ";
        cout<<endl;

    return 0;
}

int Number_of_Occurrences (int arr[] , int n , int target ){

    int c = -1 ;

for(int i=0 ; i<n ; i++ )
    if(arr[i] == target )
        c = i ;

        return(c) ;
}

void subtotal (float arr[] , int n ){
 for(int i = 1; i<n ; i++ )
     arr[i] += arr[i-1] ;

}
