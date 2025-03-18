#include <stdlib.h>
#include <stdio.h>
#define ROW 15
#define COL 11
typedef struct {
    int x; 
    int y;
} Point;						/*定義Point來表示座標*/

Point pt(int, int);
int Wake1(int[][ROW], Point, Point);
int Wake2(int[][ROW], Point, Point);
void Print1(int[][ROW]);
void Print2(int[][ROW]);

int main(void) { 
    int maze1[COL][ROW] = {
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
    int maze2[COL][ROW] = {
	 	{0,0,0,0,0,1,1,0,0,0,1,1,1,1,1},
		 {1,0,0,0,1,1,0,1,1,1,0,0,1,1,1},
		 {0,1,1,0,0,0,0,1,1,1,1,0,0,1,1},
		 {1,1,0,1,1,1,1,0,1,1,0,1,1,0,0},
		 {1,1,0,1,0,0,1,0,1,1,1,1,0,0,1},
		 {1,1,1,0,0,1,1,1,0,0,0,0,1,1,0},
		 {0,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
		 {0,0,1,1,0,1,1,1,1,1,1,1,1,0,1},
		 {1,1,0,0,0,1,1,1,1,1,1,1,1,0,0},
		 {0,0,1,1,1,1,1,0,0,0,1,1,1,1,1},
		 {0,1,0,0,1,1,1,1,1,0,1,1,1,1,1}};
		 
	int choose = 0;
	printf("選擇迷宮1 or 2:\n");
	scanf("%d",&choose);
	Point start1, end1;
	Point start2, end2;
	
	switch (choose) {
		case 1:
			    start1.x=0;
				start1.y=0;
				end1.x=10;
				end1.y=14;
			    if(!Wake1(maze1, start1, end1)) {
			        printf("\n沒有找到出口\n");
			    }
			    Print1(maze1);
			    break;
		case 2:
			    start2.x=2;
				start2.y=0;
				end2.x=8;
				end2.y=14;
			    if(!Wake1(maze2, start2, end2)) {
			        printf("\n沒有找到出口\n");
			    }
			    Print2(maze2);
			    break;
	}
    return 0; 
}

Point pt(int x, int y) {
    Point p = {x, y};
    return p;						/*創建座標*/
}

int Wake1(int maze1[][ROW], Point start1, Point end1) {
	if(start1.x > COL || start1.y > ROW){
		return 1;
	}
    if(maze1[start1.x][start1.y] == 0) {
   	maze1[start1.x][start1.y] = 2;/*走過的標示為2*/
        if(maze1[end1.x][end1.y] == 0 &&
            (Wake1(maze1, pt(start1.x, start1.y + 1), end1) || 			/*右*/
            Wake1(maze1, pt(start1.x + 1, start1.y + 1), end1) ||		/*右下*/
            Wake1(maze1, pt(start1.x + 1, start1.y), end1) ||			/*下*/
            Wake1(maze1, pt(start1.x + 1, start1.y - 1), end1) ||		/*左下*/
            Wake1(maze1, pt(start1.x, start1.y - 1), end1) ||			/*左*/
			Wake1(maze1, pt(start1.x - 1, start1.y - 1), end1) || 		/*左上*/
            Wake1(maze1, pt(start1.x - 1, start1.y), end1) ||			/*上*/
			Wake1(maze1, pt(start1.x - 1, start1.y + 1), end1)))		/*右上*/
			{					/*判斷8個方向*/
                maze1[start1.x][start1.y] = 2;					/*如果[start.x][start.y]為0將該位置標記為2*/
        }
    }
    return maze1[end1.x][end1.y];									/*回傳函式，表示是否找到路徑*/   
}

int Wake2(int maze2[][ROW], Point start2, Point end2) {
	if(start2.x > COL || start2.y > ROW){
		return 1;
	}
    if(maze2[start2.x][start2.y] == 0) {
   	maze2[start2.x][start2.y] = 2;/*走過的標示為2*/
        if(maze2[end2.x][end2.y] == 0 &&
            (Wake1(maze2, pt(start2.x, start2.y + 1), end2) || 			/*右*/
            Wake1(maze2, pt(start2.x + 1, start2.y + 1), end2) ||		/*右下*/
            Wake1(maze2, pt(start2.x + 1, start2.y), end2) ||			/*下*/
            Wake1(maze2, pt(start2.x + 1, start2.y - 1), end2) ||		/*左下*/
            Wake1(maze2, pt(start2.x, start2.y - 1), end2) ||			/*左*/
			Wake1(maze2, pt(start2.x - 1, start2.y - 1), end2) || 		/*左上*/
            Wake1(maze2, pt(start2.x - 1, start2.y), end2) ||			/*上*/
			Wake1(maze2, pt(start2.x - 1, start2.y + 1), end2)))		/*右上*/
			{					/*判斷8個方向*/
                maze2[start2.x][start2.y] = 2;					/*如果[start.x][start.y]為0將該位置標記為2*/
        }
    }
    return maze2[end2.x][end2.y];									/*回傳函式，表示是否找到路徑*/   
}

void Print1(int maze1[][ROW]) {
    int i = 0, j = 0;
    for(i = 0; i < COL; i++) { 
        for(j = 0; j < ROW; j++){
			switch(maze1[i][j]) {
	            case 0 :
					printf("(     )");		/*印出路徑*/
					break;
	            case 1 :
					printf("(#####)");		/*印出牆壁*/
					break;
				case 2:
					printf("(%2d,%2d)",i,j);
			}
        }
        printf("\n"); 
    } 
}
void Print2(int maze2[][ROW]) {
    int i = 0, j = 0;
    for(i = 0; i < COL; i++) { 
        for(j = 0; j < ROW; j++){
			switch(maze2[i][j]) {
	            case 0 :
					printf("(     )");		/*印出路徑*/
					break;
	            case 1 :
					printf("(#####)");		/*印出牆壁*/
					break;
				case 2:
					printf("(%2d,%2d)",i,j);
			}
        }
        printf("\n"); 
    } 
}
