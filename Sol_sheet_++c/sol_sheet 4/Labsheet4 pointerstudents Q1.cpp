#include <iostream>

using namespace std;

int main()
{
    int x1 , x2 ;
    int *pt1 = &x1, *pt2 = &x2 ;

    cout<< "please enter x1 (variable)\n";
    cin>>x1;
    cout<< "please enter x2 (variable)\n";
    cin>>x2;

    cout<<" COUT  *pt1 : "<<*pt1<<endl;
    cout<<" COUT  *pt2 : "<<*pt2<<endl;
    cout<<" COUT   pt1 : "<<pt1<<endl;
    cout<<" COUT   &x1 : "<<&x1<<endl;
    cout<<" COUT   pt2 : "<<pt2<<endl;
    cout<<" COUT   &x2 : "<<&x2<<endl;
    cout<<" COUT  &pt1 : "<<&pt1<<endl;
    cout<<" COUT  &pt2 : "<<&pt2<<endl;
    return 0;
}
