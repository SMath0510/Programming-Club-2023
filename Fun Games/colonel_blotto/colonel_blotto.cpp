#include <bits/stdc++.h>
using namespace std;

vector<int> allocateSoldiers(int totalSoldiers, int totalTowers, int player) {
    vector<int> allocations;
    int remainingSoldiers = totalSoldiers;

    for (int i = 0; i < totalTowers - 1; ++i) {
        int maxAllocation = min(remainingSoldiers, totalSoldiers - (totalTowers - i - 1));
        int allocation;

        cout << "Player " << player << ", enter the number of soldiers for Tower " << i + 1 << " (1-" << maxAllocation << "): ";
        cin >> allocation;

        while (allocation < 1 || allocation > maxAllocation) {
            cout << "Invalid input. Please enter a number between 1 and " << maxAllocation << ": ";
            cin >> allocation;
        }

        allocations.push_back(allocation);
        remainingSoldiers -= allocation;
    }

    allocations.push_back(remainingSoldiers);
    return allocations;
}

int compareTowerConfigurations(const vector<int>& config1, const vector<int>& config2, int totalTowers) {
    int count = 0;

    for (int i = 0; i < totalTowers; ++i) {
        if (config1[i] > config2[i]) {
            count++;
        }
    }

    return count;
}

void playGame() {
    int totalSoldiers, totalTowers, totalPlayers;

    cout << "Enter the total number of soldiers: ";
    cin >> totalSoldiers;

    cout << "Enter the total number of towers: ";
    cin >> totalTowers;

    cout << "Enter the number of players: ";
    cin >> totalPlayers;

    // Store tower configurations for each player
    vector<vector<int>> playerAllocationsList;

    for (int player = 0; player < totalPlayers; ++player) {
        cout << "\nPlayer " << player + 1 << "'s turn:\n";
        vector<int> playerAllocations = allocateSoldiers(totalSoldiers, totalTowers, player + 1);
        playerAllocationsList.push_back(playerAllocations);
    }

    // Count wins for each player
    vector<int> playerWins(totalPlayers, 0);

    for (int player1 = 0; player1 < totalPlayers; ++player1) {
        for (int player2 = player1 + 1; player2 < totalPlayers; ++player2) {
            // Compare tower configurations and determine the winner of the pairwise comparison
            int comparisonResult = compareTowerConfigurations(playerAllocationsList[player1], playerAllocationsList[player2], totalTowers);

            if (comparisonResult > totalTowers / 2) {
                playerWins[player1]++;
            } else {
                playerWins[player2]++;
            }
        }
    }

    cout << "\nRound Results:\n";
    for (int player = 0; player < totalPlayers; ++player) {
        cout << "Player " << player + 1 << " wins " << playerWins[player] << " pairwise comparisons.\n";
    }

    // Find the round winner
    int roundWinner = max_element(playerWins.begin(), playerWins.end()) - playerWins.begin() + 1;
    cout << "\nPlayer " << roundWinner << " is the winner of the round!\n";
}

int main() {
    playGame();
    return 0;
}
