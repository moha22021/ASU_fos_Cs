#include <iostream>

using namespace std;
/*
 ****************Lab sheet # 2********************
(FUNCTIONS)
CALL BY VALUE AND REFERENCE-RECURSIVE FUNCTIONS

Q1

*/


int fact(int n)
{
    if (n==1)
        return (1) ;
    else
        return ( n* fact(n-1)) ;

}

int sum_fact(int n)
{
    int sum = 0 ;
    while (n!=0){
    sum+=fact(n);
    n--;
}
     return sum ;


}

int main()
{
    int n=3 ;
    cout<<fact(3)<<endl;
    cout<<sum_fact(4)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
