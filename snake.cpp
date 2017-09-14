#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define FrameY 4
#define Frame_height 20
#define Frame_width 20
int i;
struct Snake
{
	int x[100];
	int y[100];
	int length;
	int speed;
};

void GamePosition(HANDLE g_hout, int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(g_hout, pos);
}

void init_snake(struct Snake* snake)
{
	snake->x[0] = FrameX + 2;
	snake->y[0] = FrameY + Frame_height / 2;
	snake->length = 3;
	snake->speed = 300;
	for (i = 1; i < snake->length; i++)
	{
		snake->x[i] = snake->x[i - 1] + 2;
		snake->y[i] = snake->y[i - 1];

	}
}

void move_snake(HANDLE hout, struct Snake* snake)
{
	GamePosition(hout, snake->x[0], snake->y[0]);
	printf("");
	for (i = 1; i < snake->length; i++)
	{
		snake->x[i - 1] = snake->x[i];
		snake->y[i - 1] = snake->y[i];

	}
}

void show_snake(HANDLE hout, struct Snake* snake)
{
	for (i = 0; i < snake->length; i++)
	{
		GamePosition(hout, snake->x[i], snake->y[i]);
		if (i == 0)
			printf("��");
		else if (i == snake->length - 1)
			printf("��");
		else
			printf("��");
	}
}

void start_game()
{
	unsigned char ch = 77;
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	struct Snake s, *snake = &s;
	init_snake(snake);
	while (1)
	{
		a[0] = snake->x[0];
		a[0] = snake->y[0];
		ch = getchar();
		switch (ch)
		{
		case 72:
			move_snake(hout, snake);
			snake->y[snake->length - 1] -= 1;
			break;
		case 80:
			move_snake(hout, snake);
			snake->y[snake->length - 1] += 1;
			break;
		case 75:
			move_snake(hout, snake);
			snake->x[snake->length - 1] -= 2;
			break;
		case 77:
			move_snake(hout, snake);
			snake->x[snake->length - 1] += 2;
			break;
		}
		show_snake(hout, snake);
	}
}

int main()
{
	start_game();
	return 0;
}