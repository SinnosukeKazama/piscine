#include<stdio.h>
struct p { int x; int y; };
//³•ûŒ`‚Ìˆê•Ó‚Ì’·‚³‚ğ•Ô‚·
int width(char map[][9], int h, struct p s)
{
	int i;
	int j;

	i = 0;
	j = s.x;
	while (i < h)
	{
		while (j < 9)
		{
			if (map[i][j] == 'o' || j == 8)
			{
				return (j);
			}
			++j;
		}
		++i;
	}
	return (0);
}
int hight(char map[][9], int h, struct p s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < h+1)
	{
		if (map[i][j] == 'o' || i == width(map, 2, s))
			return (i);
		++i;
	}
	return (0);
}


void loop(char map[][9])
{
	struct p start = { 0,0 };
	int w;
	int h;
	int i;

	i = 0;
	while (i < 9)
	{
		printf("w: %d, h: %d\n",width(map, 2, start), hight(map, 2, start));
		++start.x;
		++start.y;
		++i;
	}
	
}
int main(void)
{
	const char map[][9] =
	{
		"..o......",
		"........."
	};
	loop(map);
}