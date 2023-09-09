
 #include "LList.h"

/***************************************************************/
/* Programmer:  Anna Salvati                                   */        
/* Date:  September 5, 2023                                    */        
/* Purpose: Implementation of linked list class                */
/* Input: none                                                 */
/* Output: print function prints all items in the list         */
/***************************************************************/

template <class T>
LList<T> :: LList()
{
  length=0;
  first=NULL;
   
}

template <class T>     
LList<T> :: ~LList()
{ 
  destroy();
    
}

template <class T>        
LList<T> :: LList ( const LList<T> & other)
{
   copy(other);
}

template <class T>        
const LList<T> & LList<T> :: operator= (const LList<T> & other)
{
   if(this !=&other)
   {
     destroy();
     copy(other);
   }
  return *this;
}

template <class T>        
bool LList<T> :: isEmpty()
{
  return first == NULL;
   
}
      
template <class T>        
void LList<T> :: insertItem(T item)
{
   
}
      
template <class T>      
void LList<T> :: deleteItem(T item)
{
   node<T> *p=new node<T>;
  node<T> *r=new node<T>;
   p=first;
   r=first;
   if(p==NULL)
      cout<<"\nThe list is empty"<<endl;
  else if( p->info==item){
    first=p->next;
    delete p;
    length--;
  }
  else{
    while(p!=NULL && p->info!=item){
      r=p;
      p=p->next;
    }
    if(p==NULL){
      cout<<"item is not found.";
    }
    r->next=p->next;
    delete p;
    length --;
  }
  
}

template <class T>
void LList<T> :: destroy()
{
 node<T> *p;

  while(first !=NULL)
    {
      p=first;
      first=first->next;
      delete p;
    }
    length=0;
  
}

template <class T>
void LList<T> :: copy ( const LList<T> & other )
{
    
}

template <class T>        
int LList<T> :: getLength()
{
   return length;
}

template <class T>        
bool LList<T> :: searchItem(T item)
{
   node<T> *p=first;
  while(p!=NULL && p->info <= item)
    {
      if(p->info==item)
        return true;
      p=p->next;
    }
}

template <class T>        
void LList<T> :: printList()
{
  if(first==NULL)
    cout<<"\nEMPTY LIST\n";
  else{
    cout<<"\nLIST";

    node<T> *p=first;
    while(p!=NULL){
      cout<<p->info<<" ";
      p=p->next;
    }
  }
   
}


