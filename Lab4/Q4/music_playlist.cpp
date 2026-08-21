#include <iostream>
using namespace std;

class Song{
    private:
        string song_name;
        string artist_name;
        int duration;

    public:
        Song(string song,string artist,int time){
            song_name = song;
            artist_name = artist;
            duration = time;
        }

        friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2) {
    cout << "Song 1: " << s1.song_name << " by " << s1.artist_name
         << " (" << s1.duration << " sec)" << endl;
    cout << "Song 2: " << s2.song_name << " by " << s2.artist_name
         << " (" << s2.duration << " sec)" << endl;

    if (s1.duration > s2.duration)
        cout << s1.song_name << " is longer than " << s2.song_name << endl;
    else if (s2.duration > s1.duration)
        cout << s2.song_name << " is longer than " << s1.song_name << endl;
    else
        cout << "Both songs have the same duration." << endl;
}

int main() {
    Song s1("Losers","Tame Impala",200);
    Song s2("Monopoly", "IDK", 100);

    compareSongs(s1,s2);
    return 0;
}