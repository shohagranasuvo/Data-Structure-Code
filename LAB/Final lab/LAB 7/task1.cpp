#include <bits/stdc++.h>
using namespace std;

class node {
public:
    string songName;
};

class music {
public:
    string name;
    music* next;

    music(string name) {
        this->name = name;
        this->next = NULL;
    }

    music* addSong(music* head, string song) {
        if (head == NULL) {
            music* newMusic = new music(song);
            return newMusic;
        } else {
            music* curr = head;
            music* newMusic = new music(song);

            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = newMusic;

            return head;
        }
    }

    void removeSong(music*& head, string title) {
        if (head == NULL) {
            cout << "Playlist is empty!" << endl;
            return;
        }

        if (head->name == title) {
            music* temp = head;
            head = head->next;
            delete temp;
            cout << "Song deleted: " << title << endl;
            return;
        }

        music* pre = head;
        music* curr = head->next;

        while (curr != NULL && curr->name != title) {
            pre = curr;
            curr = curr->next;
        }

        if (curr == NULL) {
            cout << "Song not found: " << title << endl;
            return;
        }

        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
        cout << "Song deleted: " << title << endl;
    }

    void searchMusic(music* head, string title) {
        music* curr = head;
        while (curr != NULL && curr->name != title) {
            curr = curr->next;
        }

        if (curr != NULL) {
            cout << "The song found: " << title << endl;
        } else {
            cout << "The song not found: " << title << endl;
        }
    }

    void display(music* head) {
        music* curr = head;

        if (curr == NULL) {
            cout << "Playlist is empty!" << endl;
            return;
        }

        while (curr != NULL) {
            cout << "Music name: " << curr->name << endl;
            curr = curr->next;
        }
    }
};

int main() {
    music* head = NULL;
    music playlist("");

    
    head = playlist.addSong(head, "loving life");
    playlist.addSong(head, "GOOD VIVE");
    playlist.addSong(head, "ALO");
    playlist.addSong(head, "WHY SO ALON");

    
    cout << "Playlist:" << endl;
    playlist.display(head);

  
    cout << endl << "Search result for 'Song2':" << endl;
    playlist.searchMusic(head, "Song2");


    cout << endl << "Removing 'Song3':" << endl;
    playlist.removeSong(head, "Song3");


    cout << endl << "Playlist after removal:" << endl;
    playlist.display(head);

    return 0;
}
