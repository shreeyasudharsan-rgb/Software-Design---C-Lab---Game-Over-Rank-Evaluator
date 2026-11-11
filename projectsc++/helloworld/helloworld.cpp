#include <iostream>
using namespace std;

int main()
{
    int finalScore;
    cout << "Enter your score: " << endl;
    cin >> finalScore;

    if (finalScore < 0){
        cout << "Error: Invalid score.";
    } else if (finalScore < 500) {
        cout << "Rank: Rookie";
    } else if (finalScore < 1000) {
        cout << "Rank: Pro";
    } else {
        cout << "Rank: Legend";
    } 

}