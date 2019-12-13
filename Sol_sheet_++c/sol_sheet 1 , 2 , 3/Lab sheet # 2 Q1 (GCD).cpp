#include <iostream>

using namespace std;

/*
 ****************Lab sheet # 2********************
(FUNCTIONS)
CALL BY VALUE AND REFERENCE-RECURSIVE FUNCTIONS

Q2

*/



int GCD1(int a, int b)
{
	// do until the two numbers become equal
	while (a != b)
	{
		// replace larger number by its difference with the smaller number
		if (a > b)
		   a = a - b;
		else
		   b = b - a;
	}

	return a;		// or b (since both are equal)
}
int GCD2 (int a, int b) {
    if (b != 0)
        return GCD2 (b, a % b);
    else
        return a ;
}
int GCD3 (int a , int b )
{
    if (a==b)
        return (a) ;
    else if (a>b)
        GCD3(a-b , b) ;
        else
        GCD3(a , b-a ) ;
}

void test()
{
    cout<<"i \t j  "<<"\t\t\tGCD1 \t GCD2 \t GCD3 \n" ;
    for(int i = 1 ; i<= 50 ; i++  )
        for(int j = 1 ; j<= 50 ; j++  )
           cout<<i<<" \t "<<j<<" \t\t\t"<<GCD1(i,j)<<" \t "<<GCD2(i,j)<<" \t "<<GCD3(i,j)<<endl;
}
int main()
{

   cout<< GCD1(100 , 50) <<endl;
   cout<< GCD2(100 , 50)<<endl; //Program to find GCD of given Numbers using <<Recursion>>
   cout<< GCD3(100 , 50)<<endl; //Program to find GCD of given Numbers using <<Recursion>> (another algorithm )

   test();

    return 0;
}
