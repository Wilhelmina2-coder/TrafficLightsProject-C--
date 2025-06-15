#include <iostream>
#include <string>
using namespace std;

int main() {
    string location;
    int redTime, yellowTime, greenTime;

    cout << "Enter traffic light location: ";
    getline(cin, location);  // Get full line input for location

    cout << "Enter red light duration (in seconds): ";
    cin >> redTime;

    cout << "Enter yellow light duration (in seconds): ";
    cin >> yellowTime;

    cout << "Enter green light duration (in seconds): ";
    cin >> greenTime;

    cin.ignore();

    cout << "\n--- Traffic Light Simulation at " << location << " ---\n";
    cout << "Red light ON for " << redTime << " seconds.\n";
    cout << "[STOP 🚫]\n";

    cout << "Green light ON for " << greenTime << " seconds.\n";
    cout << "[GO ✅]\n";

    cout << "Yellow light ON for " << yellowTime << " seconds.\n";
    cout << "[CAUTION ⚠️]\n";

    int totalTime = redTime + yellowTime + greenTime;

    if (totalTime < 10) {
    cout << "⚠️ Warning: Total cycle time is too short!\n";
    cout << "Suggestion: Increase red, yellow, or green light durations for safe transitions.\n";
} else if (totalTime > 180) {
    cout << "⚠️ Warning: Total cycle time is too long!\n";
    cout << "Suggestion: Reduce duration to avoid pedestrian impatience or gridlock.\n";
} else {
    cout << "✅ Cycle time is within normal range.\n";
}

