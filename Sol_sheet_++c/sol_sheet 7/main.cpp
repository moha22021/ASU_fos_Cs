#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


/*                    Lab sheet # 7
                          <Files>
*/

void constructFile () ; //1
void readfile(char fname[]) ; //2
int countWords(char fname[]) ; //3
void separateIntoFiles(char fname[]); //4 a,b,c
void iostream_commands();//for learn (setfill, width,setf, precision,.....)

int main()
{
    char path[] ="allFile.txt" ;
    constructFile ();
    readfile(path);
    cout<<countWords(path)<<endl;
    separateIntoFiles(path);
    //iostream_commands(); // just-> for learn

    return 0;
}

void constructFile ()
{

    /*ofstream f("allFile.txt" ) ;
if(f.fail())
    {
        cout<<" Erorr - allFile.txt is not opened  "<<endl;
        //cerr<<" Erorr - allFile.txt is not opened  "<<endl;  //cerr is perfect but u can command by cout
        return ;
    }
    or->>
    ofstream f ;
    f.open ("allFile.txt" ) ;*/


    fstream f("allFile.txt" , ios::out);
    string str ;
    float val ;

    if(f.fail())
    {
        cout<<" Erorr - allFile.txt is not opened  "<<endl;
        //cerr<<" Erorr - allFile.txt is not opened  "<<endl;  //cerr is perfect but u can command by cout
        return ;
    }

        while(cin>>str)
        {
            f<<str<<" ";
            if(str=="#")
                break;
        }
        f<<"\n";


        while(cin>>val)
        {
            f<<val<<" ";
            if(val==0)
                break;
        }
        f.close();
}
void readfile(char fname[] )
{
    fstream f(fname , ios::in) ;  //ifstream f(fname);
    string str ;
    if(f.fail())
        {
        cerr<<" Erorr - allFile.txt is not opened  "<<endl;
        return  ;
        }

    while(!f.eof()) //eof -> return  end of file (0)
    {
        f>>str;
        //getline(f , str) ; //run by using getline ;
        cout<<str<<endl ;
    }
        f.close();
}
int countWords(char fname[])
{

     fstream f(fname , ios::in) ;  //ifstream f(fname);
     if(f.fail())
        {
        cerr<<" Erorr - allFile.txt is not opened  "<<endl;
        return 0 ;
        }

        int c=-1; //because '#' is counted
        string str ;

        while(!f.eof() && str!="#") //eof -> return  end of file (0)
        {
          f>>str;
          c++;
        }
        f.close();
        return(c);
}
void separateIntoFiles(char fname[])
{
    fstream f (fname , ios::in);
    fstream f1("words.txt" , ios::out);
    fstream f2("numbers.txt" , ios::out);
    if(f)
        if(f.fail() || f1.fail() || f2.fail())
    {
        cout<<" Erorr - allFile.txt is not opened  "<<endl;
        //cerr<<" Erorr - allFile.txt is not opened  "<<endl;  //cerr is perfect but u can command by cout
        return ;
    }

    string str ;
    bool flag =0 ;
    while(!f.eof())
    {
        f>>str;

        if(str=="#")
        {
            flag = 1 ;
            f>>str;
            cout<<endl;
        }

        if( flag == 0)
            f1<<str<<" ";

            if (str !="0" && flag == 1 )
                f2<<setw(10)<<str<<"\n";

                //f2<< setfill('0');
                //f2<< setw(10) <<str<<"\n";

                //f2<< setfill('-')<< setw(10) <<str<<"\n";
	            //f2<< setfill('*')<< setw(10) <<str<<"\n";
               // f2<< setfill('@')<< setw(10) <<str<<"\n";
    }
    f.close();
    f1.close();
    f2.close();

}
void iostream_commands()//for learn (setfill, width,setf, precision,.....)
{

	    cout<<"USING setw() ..............\n";
	    cout<< setw(10) <<11<<"\n";
	    cout<< setw(10) <<2222<<"\n";
	    cout<< setw(10) <<33333<<"\n";
	    cout<< setw(10) <<4<<"\n";

	    cout<<"USING setw() & setfill() [type- I]...\n";
	    cout<< setfill('0');
	    cout<< setw(10) <<11<<"\n";
	    cout<< setw(10) <<2222<<"\n";
	    cout<< setw(10) <<33333<<"\n";
	    cout<< setw(10) <<4<<"\n";

	    cout<<"USING setw() & setfill() [type-II]...\n";
	    cout<< setfill('-')<< setw(10) <<11<<"\n";
	    cout<< setfill('*')<< setw(10) <<2222<<"\n";
	    cout<< setfill('@')<< setw(10) <<33333<<"\n";
	    cout<< setfill('#')<< setw(10) <<4<<"\n";


}








