#include<iostream>
#include<vector>

using namespace std;

class Candidate {
    string name;
    int votes = 0;

public:
    void get() {
        cout << "Enter candidate's name: ";
        cin >> name;
    }

    void countVote() {
        votes++;
    }

    void print() {
        cout << "Candidate: " << name << ", Votes: " << votes << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of candidates: ";
    cin >> n;

    vector<Candidate> candidates(n);

    for(int i = 0; i < n; i++) {
        candidates[i].get();
    }

    string ch;
    do {
        int vote;
        cout << "Enter the candidate number you want to vote for: ";
        cin >> vote;
        if(vote > 0 && vote <= n) {
            candidates[vote-1].countVote();
        } else {
            cout << "Invalid candidate number!" << endl;
        }

        cout << "Press y to continue voting, any other key to stop: ";
        cin >> ch;
    } while(ch == "y" || ch == "Y");

    for(int i = 0; i < n; i++) {
        candidates[i].print();
    }

    return 0;
}