#include <iostream>
#include <string>
#include <vector>
using namespace std;

// TODO 1: Define the base class Athlete
class Athlete {
protected:
    string name;
    int age;
    string sport;

public:
    // TODO 2: Define constructor to initialize name, age, and sport
    Athlete(string n, int a, string s) {
        name = n;
        age = a;
        sport = s;
    }

    // TODO 3: Define printInfo() to display basic athlete info
    void printInfo() {
        cout << "Name: " << name << ",Age: " << age << ",Sport: " << sport << endl;
    }

    // TODO 4: Define train() with a generic message
    void train() {
        cout << "Athlete is doing general training." << endl;
    }
};

// TODO 5: Define class Runner : public Athlete
class Runner : public Athlete {
private:
    double topSpeed;

public:
    // TODO 6: Constructor with initializer list
    Runner(string n, int a, string s, double ts) : Athlete(n, a, s) {
        topSpeed = ts;
    }

    // TODO 7: Override train() with specific message
    void train() {
        cout << "Runner " << name << " is sprinting at " << topSpeed << " km/h." << endl;
    }
};

// TODO 8: Define class Swimmer : public Athlete
class Swimmer : public Athlete {
private:
    string strokeType;

public:
    // TODO 9: Constructor with initializer list
    Swimmer(string n, int a, string s, string st) : Athlete(n, a, s) {
        strokeType = st;
    }

    // TODO 10: Override train() with specific message
    void train() {
        cout << "Swimmer " << name << " is swimming " << strokeType << " stroke." << endl;
    }
};

// TODO 11: Define class BasketballPlayer : public Athlete
class BasketballPlayer : public Athlete {
private:
    int verticalLeap;

public:
    // TODO 12: Constructor with initializer list
    BasketballPlayer(string n, int a, string s, int vL) : Athlete(n, a, s) {
        verticalLeap = vL;
    }

    // TODO 13: Override train() with specific message
    void train() {
        cout << "Basketball player " << name << " is training vertical leap of " << verticalLeap << " inches." << endl;
    }
};

int main() {
    // TODO 14: Create vectors for each athlete type
    vector<Runner> runners;
    vector<Swimmer> swimmers;
    vector<BasketballPlayer> basketballPlayers;

    // TODO 15: Add at least 2 objects to each vector
    runners.push_back(Runner("Bella", 21, "Running", 12.5));
    runners.push_back(Runner("Laila", 21, "Running", 27.0));

    swimmers.push_back(Swimmer("Rawda", 21, "Swimming", "freestyle"));
    swimmers.push_back(Swimmer("Riya", 21, "Swimming", "butterfly"));

    basketballPlayers.push_back(BasketballPlayer("Jim", 30, "Basketball", 35));
    basketballPlayers.push_back(BasketballPlayer("Bob", 28, "Basketball", 33));

    // TODO 16: Loop through runners and call printInfo() and train()
    for (int i = 0; i < runners.size(); i++) {
        runners[i].printInfo();
        runners[i].train();
    }

    // TODO 17: Loop through swimmers and call printInfo() and train()
    for (int i = 0; i < swimmers.size(); i++) {
        swimmers[i].printInfo();
        swimmers[i].train();
    }

    // TODO 18: Loop through basketball players and call printInfo() and train()
    for (int i = 0; i < basketballPlayers.size(); i++) {
        basketballPlayers[i].printInfo();
        basketballPlayers[i].train();
    }

    return 0;
}