#include <iostream>
#include <windows.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};


int findDepth(Node* tree) {
    if (tree == nullptr) return 0; //если пустое дерево
    //рекурсивно ищем глубину
    int leftDepth = findDepth(tree->left);
    int rightDepth = findDepth(tree->right);
    
    return max(leftDepth, rightDepth) + 1;//выбираем максимум из двух +1 уровень
}


Node* insert(Node* root, int value) {
    // Если дерево пустое, создаем новый узел и делаем его корнем
    if (root == nullptr) {
    return new Node(value);
    }
    // Если значение меньше, чем значение текущего узла, рекурсивно вставляем его в левое поддерево
    if (value < root->data) {
    root->left = insert(root->left, value);
    }
    // Если значение больше или равно, чем значение текущего узла, рекурсивно вставляем его в правое поддерево
    else {
        root->right = insert(root->right, value);
    }
    return root;
}