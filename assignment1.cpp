// Example program
#include <iostream>
#include <string>

using namespace std;


class List {
    public:
        int item;
        List *next;
};

List *head = NULL;

void add(int item) {
    List *new_list = new List;
    new_list->item = item;
    List *temp = head;
    if(temp == NULL)
    {
        //cout << "empty" << endl;
        head = new_list;
    }
    else
    {
        while(temp->next != NULL)
        {
            //cout << "checkout" << endl;
            temp = temp->next; 
        }
        temp->next = new_list;
        new_list->next = NULL;
    }
}

int get(int pos) 
{
    List *temp = head;
    int item = 0;
    if(temp == NULL)
    {
        //cout << "empty" << endl;
    }
    else
    {
        for(int i = 0; i < pos-1; i++)
        {
            //cout << "checkout" << endl;
            temp = temp->next; 
        }
        item = temp->item;
    }
    return item;
}

void set(int pos, int val) 
{
        List *temp = head;
        for(int i = 0; i < pos-1; i++)
        {
            //cout << "checkout" << endl;
            temp = temp->next; 
        }
        temp->item = val;    
}

void insert(int pos, int val) 
{
    List *new_list = new List;
    new_list->item = val;
    List *temp = head;
    for(int i = 0; i < pos-1; i++)
    {
        //cout << "checkout" << endl;
        temp = temp->next; 
    }
    
    new_list->next = temp->next->next;
    temp->next = new_list;
}

int main()
{
   add(3);
   add(4);
   add(5);
   add(6);
   add(7);
   List *temp = head;
   insert(1,9);
   while(temp != NULL)
   {
       //cout << "checkot" << endl;
        cout << temp->item << " " << endl;
        temp = temp->next;
   }
   cout << "pos: " << get(4) << endl;
   cout << "pos: " << get(5) << endl;
   set(5,10);
   cout << "pos: " << get(5) << endl;
   
}
