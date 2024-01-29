#include<iostream>
using namespace std;

int main() {
    cout<<"Welcome to Rock, Paper and Scissor game!"<<endl;
    cout<<"Please use following characters to play game:"<<endl<<endl;
    cout<<"Rock: r ot R"<<endl;
    cout<<"Paper: p or P"<<endl;
    cout<<"Scissor: s or S"<<endl<<endl;

    int total_round = 10;
    int points_per_round = 2;

    cout<<"Each round has "<<points_per_round<<" points."<<endl;
    int total_points = total_round * points_per_round;

    int points = 0;

    char user_input;

    int current_round = 1;

    int computer_input;

    while (current_round<=total_round) {
        cout<<endl<<"Round: "<<current_round<<endl;
        cout<<"Total Points: "<<points<<endl;
        cout<<"Rock, Paper or Scissor: ";
        cin>>user_input;

        computer_input = rand() % 3;

        if (user_input == 'r' || user_input == 'R') {
            if (computer_input == 1) {
                cout<<endl<<"Computer input: Rock";
                cout<<endl<<"Tie!";
            } else if(computer_input == 2) {
                cout<<endl<<"Computer input: Paper";
                cout<<endl<<"Computer win!";
            } else {
                cout<<endl<<"Computer input: Scissor";
                cout<<endl<<"You win!!!";
                points+=points_per_round;
            }
            current_round++;
        } else if (user_input == 'p' || user_input == 'P') {
            if (computer_input == 1) {
                cout<<endl<<"Computer input: Rock";
                cout<<endl<<"You win!!!";
                points+=points_per_round;
            } else if(computer_input == 2) {
                cout<<endl<<"Computer input: Paper";
                cout<<endl<<"Tie!";
            } else {
                cout<<endl<<"Computer input: Scissor";
                cout<<endl<<"Computer win!";
            }
            current_round++;
        } else if (user_input == 's' || user_input == 'S') {
            if (computer_input == 1) {
                cout<<endl<<"Computer input: Rock";
                cout<<endl<<"Computer win!";
            } else if(computer_input == 2) {
                cout<<endl<<"Computer input: Paper";
                cout<<endl<<"You win!!!";
                points+=points_per_round;
            } else {
                cout<<endl<<"Computer input: Scissor";
                cout<<endl<<"Tie!";
            }
            current_round++;
        } else {
            cout<<endl<<"Invalid input!";
        }
	cout<<endl;
    }

    cout<<endl<<"Total Points: "<<points<<endl;
    cout<<endl<<"Game over!"<<endl;
}
