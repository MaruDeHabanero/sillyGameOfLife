#include <bits/stdc++.h>

using namespace std;

const int sizeOfGrid = 20;
vector<vector<int>> grid(sizeOfGrid, vector<int>(sizeOfGrid));

void fill(){
	for (int x = 0; x < grid.size(); x++)
	{
		for (int y = 0; y < grid.size(); y++)
		{
			grid[x][y] = rand() % 2;
		}
	}
}

void draw(){
	
}

int main()
{
	srand(time(NULL));
	
	fill();
	

	while(true){
		draw();
	}
}