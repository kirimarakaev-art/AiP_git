#include <iostream>
#include <windows.h>
using namespace std;

struct item
{
    char name [10];
    item *next;
};

item *Add(item *head, char newname[10])
{
    item *tmp = new item;  
    if (head==0)  
    {
        strcpy(tmp->name, newname);  
        tmp -> next = 0;
        return tmp;  
    }
    else  
    {  
        strcpy(tmp->name, newname); tmp->next = head;
        head=tmp;
        return head;
    }
}
void Print (item *head)  
{  
    item *x;  
    x=head;  
    while (x!=0)  
    {  
        cout<<x->name<<'\n';  
        x=x->next;
    }  
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    item *head = 0;
    head = Add(head,"Ibragimova");
    head = Add(head,"Medvedev");
    head = Add(head,"Zubarev");
    Print(head);  
    return 0;
}
