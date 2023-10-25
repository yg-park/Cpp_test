﻿#include <iostream>

using namespace std;

int maze[7][7] = {
	{1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,1,1,1,1,1,1}
};

int maze2[7][7] = {
	{1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{1,1,1,1,1,1,1}
};

int cur_row;
int cur_col;
int dir;
int i, j, a, b;

void Forward(int dir, int i, int j);
void Forward2(int dir, int i, int j);
void left();
void right();
//void maze_Init();		// 하드코딩을 삼가려 하였으나
						// maze 초기화 함수가 제대로 동작하지 않아 하드코딩했습니다. 

int main()
{
	left();
	right();
	
	return 0;
}

void Forward(int dir, int i, int j)
{
	maze[i][j] = 1; 
	
	switch (dir)
	{
	case 2:
		i--;
		maze[i][j] = 2;
		break;

	case 3:
		j--;
		maze[i][j] = 3;
		break;

	case 4:
		j++;
		maze[i][j] = 4;
		break;

	case 5:
		i++;
		maze[i][j] = 5;
		break;
	}

	cur_row = i;
	cur_col = j;
}

void Forward2(int dir, int i, int j)
{
	maze2[i][j] = 1;

	switch (dir)
	{
	case 2:
		i--;
		maze2[i][j] = 2;
		break;

	case 3:
		j--;
		maze2[i][j] = 3;
		break;

	case 4:
		j++;
		maze2[i][j] = 4;
		break;

	case 5:
		i++;
		maze2[i][j] = 5;
		break;
	}

	cur_row = i;
	cur_col = j;
}

void left()
{
	cur_row = 5;
	cur_col = 5;

	dir = 3;  // 상2 좌3 우4 하5
	
	while (1)  
	{
		a = cur_row;  
		b = cur_col;

		switch (dir)  
		{
		case 2:       
			if (maze[a][b - 1] == 0)
				dir = 3;
			else
				if (maze[a - 1][b] == 0)
					dir = 2;
				else
					if (maze[a][b + 1] == 0)
						dir = 4;

			break;
		case 3:      
			if (maze[a + 1][b] == 0)
				dir = 5;
			else
				if (maze[a][b - 1] == 0)
					dir = 3;
				else
					if (maze[a - 1][b] == 0) 
						dir = 2;
			break;

		case 4:      
			if (maze[a - 1][b] == 0)
				dir = 2;
			else
				if (maze[a][b + 1] == 0) 
					dir = 4;
				else
					if (maze[a + 1][b] == 0)
						dir = 5;

			break;
		case 5:      
			if (maze[a][b + 1] == 0)
				dir = 4;
			else
				if (maze[a + 1][b] == 0)
					dir = 5;
				else
					if (maze[a][b - 1] == 0)
						dir = 3;

			break;
		}
		printf("(%d, %d)", cur_row, cur_col);
		printf("->");
		Forward(dir, a, b);
		

		if (maze[3][3] != 0)
			break;
	}
	printf("(%d, %d)", cur_row, cur_col);
	printf("\n");
	
}

void right()
{
	cur_row = 5;
	cur_col = 1;

	dir = 4;

	while (1)
	{
		i = cur_row;
		j = cur_col;

		switch (dir)
		{
		case 2:
			if (maze2[i][j + 1] == 0)
				dir = 4;
			else
				if (maze2[i - 1][j] == 0)
					dir = 2;
				else
					if (maze2[i][j - 1] == 0)
						dir = 3;
					else
						dir = 5;

			break;
		case 3:
			if (maze2[i - 1][j] == 0)
				dir = 2;
			else
				if (maze2[i][j - 1] == 0)
					dir = 3;
				else
					if (maze2[i + 1][j] == 0)
						dir = 5;
					else
						dir = 4;
			break;

		case 4:
			if (maze2[i + 1][j] == 0)
				dir = 5;
			else
				if (maze2[i][j + 1] == 0)
					dir = 4;
				else
					if (maze2[i - 1][j] == 0)
						dir = 2;
					else
						dir = 3;

			break;
		case 5:
			if (maze2[i][j - 1] == 0)
				dir = 3;
			else
				if (maze2[i + 1][j] == 0)
					dir = 5;
				else
					if (maze2[i][j + 1] == 0)
						dir = 4;
					else
						dir = 2;

			break;
		}
		printf("(%d, %d)", cur_row, cur_col);
		printf("->");
		Forward2(dir, i, j);


		if (maze2[3][3] != 0)
			break;
	}
		printf("(%d, %d)", cur_row, cur_col);
	printf("\n");
	
}