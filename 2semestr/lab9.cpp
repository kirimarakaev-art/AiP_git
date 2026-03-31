#include <iostream>
#include <windows.h>
using namespace std;

struct list {
    int field;
    struct list *next;
    struct list *prev;
};

list* init(int a) {
    list *lst = new list;
    lst->field = a;
    lst->next = NULL;
    lst->prev = NULL;
    return lst;
}

list* add(list *lst, int number) {
    list *temp = new list;
    list *p = lst->next;
    lst->next = temp;
    temp->field = number;
    temp->next = p;
    temp->prev = lst;
    if (p != NULL) p->prev = temp;
    return temp;
}

void del(list *head) {
    if (head == NULL) return;

    list *p = head;
    while (p->next != NULL) {
        p = p->next;
    }

    if (p->prev != NULL) {
        list *prevNode = p->prev;
        prevNode->next = NULL;
    }

    delete p; 
}

void print(list *lst) {
    list *p = lst;
    while (p != NULL) {
        cout << p->field << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    list *root = init(10);
    list *n2 = add(root, 20);
    list *n3 = add(n2, 30);

    cout << "Список:" << endl;
    print(root);
    del(root);
    cout << "Список после удаления:" << endl;
    print(root);

    return 0;
}