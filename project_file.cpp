#include <iostream>
#include <string>
using namespace std;

/* ---------- Node Structure ---------- */
struct Song {
    string name;
    Song* next;
};

/* ---------- Head Pointer ---------- */
Song* head = NULL;

/* ---------- Add Song at End ---------- */
void addSong(string songName) {
    Song* newSong = new Song();
    newSong->name = songName;
    newSong->next = NULL;

    if (head == NULL) {
        head = newSong;
        cout << "Song Added: " << songName << endl;
        return;
    }

    Song* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newSong;

    cout << "Song Added: " << songName << endl;
}

/* ---------- Delete First Song ---------- */
void deleteSong() {
    if (head == NULL) {
        cout << "Playlist is empty. No song to delete.\n";
        return;
    }

    Song* temp = head;
    head = head->next;
    cout << "Deleted Song: " << temp->name << endl;
    delete temp;
}

/* ---------- Display Playlist ---------- */
void displayPlaylist() {
    if (head == NULL) {
        cout << "Playlist is empty.\n";
        return;
    }

    Song* temp = head;
    cout << "\n--- Current Playlist ---\n";
    while (temp != NULL) {
        cout << temp->name << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

/* ---------- MAIN FUNCTION ---------- */
int main() {
    int choice;
    string name;

    while (1) {
        cout << "\n===== MUSIC PLAYLIST =====\n";
        cout << "1. Add Song\n";
        cout << "2. Delete Song\n";
        cout << "3. Display Playlist\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter song name: ";
                cin.ignore();
                getline(cin, name);
                addSong(name);
                break;

            case 2:
                deleteSong();
                break;

            case 3:
                displayPlaylist();
                break;

            case 4:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }
}