#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Player{
public:
	int x, y;
	bool winner = false;
	void write(int x, int y);
	void makeMove();
	void makeMove(int x, int y);

};

class Board{
public:
	int x, y;	// maybe should be an array
	bool checkMove();

};
//void makeMove(Player p, int x, int y);
void randMove();

int main()
{
	ofstream sharedFile;
	sharedFile.open("memory.txt");

	Player p1;
	Player p2;

	p1.makeMove();
}

void Player::makeMove(int x, int y)
{
	// human plays
	string inputX, inputY;
	cout << "Input x and y coordinate or enter cp to let computer decide: \n";
	cin >> inputX >> inputY;
	// computer plays
	if (inputX == "cp" || inputY == "cp")
	{
		randMove();
	}
	// string -> int
	int xx = stoi(inputX);
	int yy = stoi(inputY);

	// write to file?
	this->write(xx, yy);
};

void Player::write(int x, int y)
{

}