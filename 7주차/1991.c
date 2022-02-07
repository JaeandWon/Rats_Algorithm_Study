#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PREORDER 1
#define INORDER 2
#define POSTORDER 3

typedef struct {
    char left, right;
} Tree;
Tree tree[26];

void tour(char root, int type) {
    if (root == '.')
        return;

    if (type == PREORDER) 
        printf("%c", root);

    tour(tree[root - 'A'].left, type);

    if (type == INORDER)
        printf("%c", root);

    tour(tree[root - 'A'].right, type);

    if (type == POSTORDER)
        printf("%c", root);
}
int main()
{
    int nodes;
    char root, left, right;
    scanf("%d", &nodes);

    while (nodes--)
    {
        scanf(" %c %c %c", &root, &left, &right); // %c 앞에 공백 하나 줘야함
        tree[root - 'A'].left = left;
        tree[root - 'A'].right = right;
    }

    tour('A', PREORDER); printf("\n");
    tour('A', INORDER); printf("\n");
    tour('A', POSTORDER); printf("\n");
}