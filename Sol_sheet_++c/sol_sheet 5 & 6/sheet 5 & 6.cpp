#include <iostream>
using namespace std;

struct node
{
    int val ;
    node* next ;
};
node *head = NULL ;


/*Lab sheet # 5 */
void Append(int val) ; //1. Inserting nodes at end of linked list
void display (); //2.Display the contents of the linked list
void re_move(int val) ; //3.Delete a node from the linked list

void insert_at_pos(int val , int pos) ;


/*Lab sheet #6 */
void re_verse() ; //2. reverse a linked list
void sort_list(int n ) ; //4. Sort the elements of a linked list
int count_nom_tim(int nom ); //1. counts the number of times a given int occurs in a Linked List
void remove_dup(int nom ) ; //3. Remove duplicates from a linked list



int main()
{
int n = 0  ;
Append(10 ) ; n++ ; //0
Append(15 ) ; n++ ; //1
Append(100) ; n++ ; //2
Append(10 ) ; n++ ; //3
Append(30 ) ; n++ ; //4
Append(70 ) ; n++ ; //5
Append(2  ) ; n++ ; //6
display ();
cout<<"\n\n" ;

insert_at_pos( 20 , 1 ) ; n++ ;
display ();
cout<<"\n\n" ;

re_move(100) ; n-- ;
display () ;
cout<<"\n\n" ;

re_move(111) ;
display ();
cout<<"\n\n" ;

re_verse() ;
display ();
cout<<"\n\n" ;

sort_list( n ) ;
display ();
cout<<"\n\n" ;


cout<<"count of nom 10 =   "<< count_nom_tim(10 )<<endl ;
remove_dup (10) ;
display ();
cout<<"\n\n" ;

    return 0;
}
void Append(int val)
{
    node *newnode = new node ;
    newnode->val = val ;
    newnode->next = NULL ;

    if (head == NULL){
       head = newnode ;
       return;

    }
       else
       {
       node *temp = head ;
      while( temp->next != NULL )
            temp = temp->next ;

        temp->next = newnode ;


       }
    }
void re_move(int val)
{
    if(head == NULL)
        return;
    node *temp , *rev ;
    rev = temp = head ;

    if(head->val == val )     //special case

      {
      head = temp->next ;
      delete temp ;
      return ;
      }

    while(temp->val != val && temp->next != NULL )
        {
        rev  = temp ;
        temp = temp->next ;
        }

        if( temp->val == val  )
        {
        rev->next = temp->next ;
        delete temp ;
        }
}
void insert_at_pos(int val , int pos)
{
    node* newnode = new node ;
    newnode ->val = val ;
    newnode->next = NULL ;

    if(pos == 0 )    //special case
    {
        newnode->next = head ;
        head = newnode ;
        return ;
    }
    node *temp = head ;
    for(int i=0 ; i< pos-1 && temp->next != NULL ; i++)
        temp = temp->next ;

     newnode->next = temp->next ;
     temp->next = newnode;
}
void re_verse()
{
    if(head == NULL)
        return ;
    node *prev = NULL , *curr = head  , *next = NULL ;

    while (curr!= NULL)
    {
        next = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = next ;
    }
    head = prev ;
}

void sort_list(int n )
{
    node *prev , *curr ;
    prev = curr = head ;
    for(int i=0  ; i<n ; i++ ){
        prev = curr = head ;
        for(int j=0 ; j<n-i-1 ; j++ ){

            curr= curr->next ;
            if(curr->val < prev->val )
                swap(curr->val , prev ->val) ;
            prev =curr ;
      }
    }
}
int count_nom_tim( int nom )
{
    node *curr = head  ;
    int c = 0 ;
    if (head == NULL )
        return(0) ;
    while(curr != NULL )
    {
        if(curr->val == nom )
            c++ ;
            curr = curr->next ;
    }
    return(c);
}

void remove_dup(int nom )
{
     int n = count_nom_tim( nom ) ;
     for(int i = 0 ; i<n  ; i++ )
        re_move(nom) ;

}
void display ()
{
    node *temp = head ;

    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next ;
    }
}


