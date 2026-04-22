#include <iostream>
#include <windows.h>
#include "lab12.h"
using namespace std;



int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Node* root = nullptr;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 2);
    root = insert(root, 70);
    root = insert(root, 26);
    cout << "Глубина дерева: " << findDepth(root) << endl;
    return 0;
}