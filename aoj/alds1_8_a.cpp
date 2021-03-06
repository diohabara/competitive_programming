#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

// key，親，左の子，右の子の情報を持った構造体Nodeを設定
struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;  // ポインタ構造体Nodeのroot，NILを設定

void insert(int k)
{
    Node *y = NIL;  // yをNIL(zの親候補)
    Node *x = root;  // xをrootとする(現在の節点)
    Node *z;  // これから挿入するつもりの節点

    // zのメモリ領域を確保し，key, left, rightを設定する
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    // x(現在の節点)に関する処理
    // xがleafになるまで続ける
    while(x != NIL) {
        y = x;  // zの親としてxをyに代入
        if (z->key < x->key) {
            // xをxの左の子とする
            x = x->left;
        } else {
            // xをxの右の子とする
            x = x->right;
        }
    }

    // y(zの親候補)に関する処理
    z->parent = y;  // zの親をyとする
    if (y == NIL) {  // yがNIL(xがNIL)ならばrootはz
        root = z;
    } else {  // そうでないとき
        if (z->key < y->key) {
            // yの左の子をzとする
            y->left = z;
        } else {
            // yの右の子をzとする
            y->right = z;
        }
    }
}

void inorder(Node *u)
{
    // 中間順巡回
    if (u == NIL) {
        return;
    }
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u)
{
    // 先行順巡回
    if (u == NIL) {
        return;
    }
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main()
{
    int n, i, x;
    string com;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert") {
            scanf("%d", &x);
            insert(x);
        } else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}