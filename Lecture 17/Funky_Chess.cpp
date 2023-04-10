#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int n;
int grid[N][N] = {0};
int Total_Places_Knight_can_Move = 0;
int Maximum_Places_Where_Knight_Was_Able_To_Travel = 0;

int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};


void Input_Grid() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				Total_Places_Knight_can_Move++;
			}
		}
	}
}

void Knight(int x, int y, int count) {

	Maximum_Places_Where_Knight_Was_Able_To_Travel =
	    max(Maximum_Places_Where_Knight_Was_Able_To_Travel, count);


	//x,y--->(0,0)--->8 moves hain to travel:

	for (int i = 0; i < 8; i++) {

		int x_coordinate = x + dx[i];
		int y_coordinate = y + dy[i];

		if (x_coordinate >= 0 and x_coordinate<N and y_coordinate >= 0
		        and y_coordinate < N and
		        grid[x_coordinate][y_coordinate] == 1) {

			grid[x_coordinate][y_coordinate] = 0;//visisted

			Knight(x_coordinate, y_coordinate, count + 1);

			grid[x_coordinate][y_coordinate] = 1;//Backtracking: unvisited

		}

	}

}

int main() {
	cin >> n;
	Input_Grid();

	//Knight jo hain vo 0,0 par khada hain:

	//I will make changes in my grid array only.
	//Kyuki 0,0 har path ka part hain:
	grid[0][0] = 0;

	//count variable ye batayega ki ye current path me hum kitne
	//boxes par jaapaaye.

	Knight(0, 0, 1);//count=1 isliye kiya kyuki aapne pehla box (0,0) usko consider kiya.

	cout << Total_Places_Knight_can_Move - Maximum_Places_Where_Knight_Was_Able_To_Travel;

}

//grid[i][j]=0 iska matlab visited hain
//1: non visisted