#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int map[60][60];
int visited[60][60];
int x_w, y_w;

void set_arr(int w_x, int h_y)
{
    for (int i = 0; i < 60; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            visited[i][j] = 0;
        }
    }
}

int DFS(int x, int y)
{
    if (x <= -1 || y <= -1 || x >= x_w || y >= y_w)
        return 0;
    if (map[x][y] == 0 || visited[x][y] == 1)
        return 0;

    visited[x][y] = 1;

    DFS(x - 1, y - 1);
    DFS(x - 1, y);
    DFS(x - 1, y + 1);
    DFS(x, y - 1);
    DFS(x, y + 1);
    DFS(x + 1, y - 1);
    DFS(x + 1, y);
    DFS(x + 1, y + 1);

    return 1;
}
int main()
{
    while (1)
    {
        int num_land = 0;
        set_arr(x_w, y_w);

        scanf("%d %d", &y_w, &x_w);

        if (x_w == 0 && y_w == 0)
            break;

        for (int i = 0; i < x_w; i++)
        {
            for (int j = 0; j < y_w; j++)
            {
                scanf("%d", &map[i][j]);
            }
        }

        for (int i = 0; i < x_w; i++)
        {
            for (int j = 0; j < y_w; j++)
            {
                if (DFS(i, j))
                    num_land++;
            }
        }

        printf("%d\n", num_land);
    }
}