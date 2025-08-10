#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enGameOptions {Paper = 1, Stone, Scissors};
struct strGameOver {
	int Rounds = 0, UserWonTimes = 0, ComputerWonTimes = 0, DrawTimes = 0;
	string FinalWinner = "";
};
int GetRounds() {
	int Rounds;
	do {
		cout << "How many rounds 1 to 10 ? ";
		cin >> Rounds;
	} while(Rounds < 1 || Rounds > 10);
	return Rounds;
}
int GetComputerChoice() {
	return (rand() % 3) + 1;
}
enGameOptions GetPlayerChoice() {
	int PlayerChoice;
	do {
		cout << "\nYour Choice: [1]: Paper, [2]: Stone, [3]: Scissors ? ";
		cin >> PlayerChoice;
	} while(PlayerChoice < 1 || PlayerChoice > 3);
	return (enGameOptions)PlayerChoice;
}
string ChoiceName(enGameOptions Option) {
	switch(Option) {
	case enGameOptions::Paper:
		return "Paper";
		break;

	case enGameOptions::Stone:
		return "Stone";
		break;

	case enGameOptions::Scissors:
		return "Scissors";
		break;
	}
	return "";
}
bool UserWinner(enGameOptions PlayerChoice, enGameOptions ComputerChoice) {

	return((PlayerChoice == enGameOptions::Paper && ComputerChoice == enGameOptions::Stone) ||
	       (PlayerChoice == enGameOptions::Stone && ComputerChoice == enGameOptions::Scissors) || (PlayerChoice == enGameOptions::Scissors && ComputerChoice == enGameOptions::Paper));

}
bool ComputerWinner(enGameOptions PlayerChoice, enGameOptions ComputerChoice) {
	return((ComputerChoice == enGameOptions::Paper && PlayerChoice == enGameOptions::Stone) ||
	       (ComputerChoice == enGameOptions::Stone && PlayerChoice == enGameOptions::Scissors) || (ComputerChoice == enGameOptions::Scissors && PlayerChoice == enGameOptions::Paper));
}
bool Draw(enGameOptions PlayerChoice, enGameOptions ComputerChoice) {
	return (PlayerChoice == ComputerChoice);
}
strGameOver RoundStats(enGameOptions PlayerChoice, enGameOptions ComputerChoice, int &Counter, strGameOver &gameover) {
	cout << endl;
	cout << "__________________________Round[" << Counter << "]__________________________" << endl;
	cout << "Player Choice: " << ChoiceName(PlayerChoice) << endl;
	cout << "Computer Choice: " << ChoiceName(ComputerChoice) << endl;

	if (Draw(PlayerChoice, ComputerChoice)) {
    cout << "Round Winner: [Draw!]\n";
    gameover.DrawTimes++;
} else if (UserWinner(PlayerChoice, ComputerChoice)) {
    cout << "Round Winner: [User Wins!]\n";
    gameover.UserWonTimes++;
} else {
    cout << "Round Winner: [Computer Wins!]\n";
    gameover.ComputerWonTimes++;
}

    cout << "_____________________________________________________________" << endl;
	gameover.Rounds = Counter;
	Counter++;
	return gameover;
}
void GameOver(strGameOver gameover);
string FinalWinner(strGameOver gameover) {
    if (gameover.UserWonTimes > gameover.ComputerWonTimes) {
        gameover.FinalWinner = "User Win!";
    } else if (gameover.ComputerWonTimes > gameover.UserWonTimes) {
        gameover.FinalWinner = "Computer Win!";
    } else if (gameover.ComputerWonTimes == gameover.UserWonTimes && gameover.UserWonTimes != 0) {
        gameover.FinalWinner = "Draw!";
    } else {
        gameover.FinalWinner = "No Winner";
    }
    return gameover.FinalWinner;
}
void StartGame();
void GameOver(strGameOver gameover) {
	char answer;
	cout << "\n\n__________________________+++ Game Over +++ __________________________" << endl;
	cout << "" << endl;
	cout << "{Game Results}" << "" << endl;
	cout << "Game Rounds: " << gameover.Rounds << endl;
	cout << "Player Won times: " << gameover.UserWonTimes << endl;
	cout << "Computer Won times: " << gameover.ComputerWonTimes << endl;
	cout << "Draw times: " << gameover.DrawTimes << endl;
    cout << "Final Winner: " << FinalWinner(gameover) << endl;
    cout << "_______________________________________________________________________" << endl;
	cout << "Do you want to play again ? y/n ";
	cin >> answer;
	if(answer == 'y' || answer == 'Y'){
        system("cls");
		StartGame();
    }
}
void StartGame() {
	strGameOver gameover;
	int Rounds = GetRounds();
	int Counter = 1;
	do {
		cout << "\nRound[" << Counter << "] begins:" << endl;
		enGameOptions PlayerChoice = GetPlayerChoice();
		enGameOptions ComputerChoice = (enGameOptions)GetComputerChoice();
		RoundStats(PlayerChoice, ComputerChoice, Counter, gameover);
	} while(Counter <= Rounds);
	GameOver(gameover);
}
int main() {
    srand(time(NULL));
	StartGame();
	return 0;
}