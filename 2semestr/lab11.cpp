#include <iostream>
#include <windows.h>
using namespace std;

const int MAX_SIZE = 100;

struct Stack {
    int top;
    int elements[MAX_SIZE];
};


void init(Stack *stk) {
 stk->top = -1;
}

void push(Stack *stk, int value) {
 if (stk->top < MAX_SIZE - 1) {
    stk->top++;
    stk->elements[stk->top] = value;
 } else {
    cout << "Стек полон, невозможно добавить элемент!" << endl;
 }
}

int pop(Stack *stk) {
    if (stk->top >= 0) {
    int popped_element = stk->elements[stk->top];
    stk->top--;
    return popped_element; 
    } else {
    cout << "Стек пуст, невозможно удалить элемент!" << endl;
    return -1; 
    }
}

// Функция для проверки, пуст ли стек
bool isEmpty(Stack *stk) {
    return (stk->top == -1);
}

void printStack(Stack *stk) {
    if (isEmpty(stk)) { 
    cout << "Стек пуст!" << endl;
    return;
    }
    cout << "Элементы стека:" << endl;
    for (int i = stk->top; i >= 0; i--) {
    cout << stk->elements[i] << endl; 
    }
}


int main(){
    SetConsoleOutputCP(CP_UTF8);

    Stack stk;
    init(&stk); 
    push(&stk, 5); 
    push(&stk, 10);
    push(&stk, 15);
    pop(&stk);
    printStack(&stk);
    return 0;
}