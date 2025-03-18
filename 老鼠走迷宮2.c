#include <stdlib.h>
#include <stdio.h>
#define ROW 15
#define COL 11
typedef struct {
    int x;
    int y;
} Point;      

Point pt(int, int);
int Wake(int[][ROW], Point, Point);
void Print(int[][ROW]);

int main(void) {
    int maze[COL][ROW] = {
            {0,1,0,0,0,1,1,0,0,0,1,1,1,1,1},
            {1,0,0,0,1,1,0,1,1,1,0,0,1,1,1},
            {0,1,1,0,0,0,0,1,1,1,1,0,0,1,1},
            {1,1,0,1,1,1,1,0,1,1,0,1,1,0,0},
            {1,1,0,1,0,0,1,0,1,1,1,1,1,1,1},
            {0,0,1,1,0,1,1,1,0,1,0,0,1,0,1},
            {0,1,1,1,1,0,0,1,1,1,1,1,1,1,1},
            {0,0,1,1,0,1,1,0,1,1,1,1,1,0,1},
            {1,1,0,0,0,1,1,0,1,1,0,0,0,0,0},
            {0,0,1,1,1,1,1,0,0,0,1,1,1,1,0},
            {0,1,0,0,1,1,1,1,1,0,1,1,1,1,0}};

    Point start, end;
    start.x=0;
    start.y=0;
    end.x=10;
    end.y=14;
    if(!Wake(maze, start, end)) {
        printf("\nNOT FIND\n");
    }
    Print(maze);

    return 0;
}

Point pt(int x, int y) {
    Point p = {x, y};
    return p;
}

int Wake(int maze[][ROW], Point start, Point end) {
    if(!maze[start.x][start.y]) {
        maze[start.x][start.y] = 1;
        if(!maze[end.x][end.y] &&
	        !(Wake(maze, pt(start.x, start.y + 1), end) ||
	        Wake(maze, pt(start.x + 1, start.y + 1), end) ||
	        Wake(maze, pt(start.x + 1, start.y), end) ||
	        Wake(maze, pt(start.x + 1, start.y - 1), end) ||
	        Wake(maze, pt(start.x, start.y - 1), end) ||
	        Wake(maze, pt(start.x - 1, start.y - 1), end) ||
	        Wake(maze, pt(start.x - 1, start.y+1), end)) ||
	        Wake(maze, pt(start.x - 1, start.y), end))
        {  
            maze[start.x][start.y] = 0;
        }
    }

    return maze[end.x][end.y]; 

}

void Print(int maze[][ROW]) {
    int i = 0, j = 0;
    for(i = 0; i < COL; i++) {
        for(j = 0; j < ROW; j++)
            switch(maze[i][j]) {
            case 0 :
                printf("(     )");
                break;
                case 1 :
                    printf("(#####)"); 
                    break;
                case 2:
                    printf("(%d, %d)", i, j);
        }
        printf("\n");
    }
}
