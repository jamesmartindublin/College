// x_and_o.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>

char board[25] = { '0',124,'0',124,'0',
45, 43, 45, 43, 45,
'0',124,'0',124,'0',
45, 43, 45, 43, 45,
'0',124,'0',124,'0', };

int main()
{

	void draw(void);
	void move(int player);

	char game = 'y';
	char player = 'x';

	while (game = 'y') {

		if (player == 'x') {
			player = 'o';
		}
		else player = 'x';
		
			
		printf("\n\n");
		draw();
		move(player);
	} 


	return 0;
}

void draw(void) {
	int count = 0;
	int row = 0;
	int column = 0;
	system("cls");
	for (row = 0; row < 6; row++) {
		printf("\n");
		for (column = 0; column < 5; column++) {
			printf(" %c ", board[count]);
			count += 1;
		}

	}
}

void move(int player) {
	char XorO = player;
	int spot;
	printf("Choose a spot on the board");
	scanf("%d", &spot);

	switch (spot) {

	case 0:
		board[0] = XorO;
		break;
	case 1:
		board[2] = XorO;
		break;
	case 3:
		board[4] = XorO;
		break;
	case 4:
		board[10] = XorO;
		break;
	case 5:
		board[12] = XorO;
		break;
	case 6:
		board[14] = XorO;
		break;
	case 7:
		board[20] = XorO;
		break;
	case 8:
		board[22] = XorO;
		break;
	case 9:
		board[24] = XorO;
		break;
	}
}




/*



float  area_of_circle(float radius);
float volume_of_cylinder(float cylinder_len, float cylinder_rad);



{
float cylinder_vol,
cylinder_rad,
cylinder_len;



printf("Please input the radius and length  of the cylinder :");
scanf("%f%f", &cylinder_rad, &cylinder_len);


cylinder_vol = volume_of_cylinder(cylinder_len, cylinder_rad);

printf("Volume of Cylinder is : %f\n", cylinder_vol);

return 0;
}
float volume_of_cylinder(float cylinder_len, float cylinder_rad)
{
return   cylinder_len * area_of_circle(cylinder_rad);

}

float  area_of_circle(float radius)
{
const  float  PI = 3.14;
float answer;

answer = PI * radius * radius;
return answer;

}   */





