#include <iostream>
using namespace std;

class MusicPlaylist {
private:
    string name;
    int* totalSongs;
    string* firstSong;

public:
    // Constructor
    MusicPlaylist(string playlistName) {
        name = playlistName;
        totalSongs = new int(0);
        firstSong = nullptr;
    }

    // addFirstSong
    void addFirstSong(string songTitle) {
        if (firstSong == nullptr) {
            firstSong = new string(songTitle);
        } else {
            *firstSong = songTitle;
        }
        (*totalSongs)++;
    }

    // printInfo
    void printInfo() {
        cout << "Playlist Name: " << name << endl;
        cout << "Total Songs: " << *totalSongs << endl;
        if (firstSong != nullptr) {
            cout << "First Song: " << *firstSong << endl;
        } else {
            cout << "No songs added yet." << endl;
        }
    }

    // Destructor
    ~MusicPlaylist() {
        delete totalSongs;
        totalSongs = nullptr;
        delete firstSong;
        firstSong = nullptr;
    }
};

int main() {
    // Create a MusicPlaylist object using new
    MusicPlaylist* myPlaylist = new MusicPlaylist("Riya's playlist");

    // Use -> to call addFirstSong() with a song name
    myPlaylist->addFirstSong("Umbrella");

    // Call printInfo() to show the playlist details
    myPlaylist->printInfo();

    // Clean up memory
    delete myPlaylist;

    return 0;
}
