#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;  

int main() {
    string url;
    int choice = 0;

    cout << "====================================\n";
    cout << "   YouTube Downloader (MP3 / MP4)   \n";
    cout << "====================================\n\n";

    cout << "Paste the YouTube link here: ";
    getline(cin, url);

    if (url.empty()) {
        cout << "No link provided. Exiting...\n";
        return 1;
    }

    cout << "\nSelect Download Format:\n";
    cout << "1. MP3 (Audio Only)\n";
    cout << "2. MP4 (Video)\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;
    cin.ignore();

    string command;
    #if defined(_WIN32) || defined(_WIN64)
        string ytdlp = "yt-dlp.exe";
    #else
        string ytdlp = "yt-dlp";
    #endif

    if (choice == 1) {
        command = ytdlp + " -x --audio-format mp3 --audio-quality 0 \"" + url + "\"";
        cout << "\nDownloading and converting to MP3...\n";
    } else if (choice == 2) {
        command = ytdlp + " -f \"bestvideo[ext=mp4]+bestaudio[ext=m4a]/best[ext=mp4]/best\" \"" + url + "\"";
        cout << "\nDownloading MP4 Video...\n";
    } else {
        cout << "Invalid choice. Exiting...\n";
        return 1;
    }

    cout << "Please wait (this may take some time)...\n\n";

    int result = system(command.c_str());

    if (result == 0) {
        cout << "\n====================================\n";
        cout << "   SUCCESS! Download completed.\n";
        cout << "   Check the same folder.\n";
        cout << "====================================\n";
    } else {
        cout << "\nSomething went wrong.\n";
        cout << "Make sure yt-dlp and ffmpeg are available on your system.\n";
    }

    cout << "\nPress Enter to exit...";
    cin.get();
    cout << "Coded by Aniket.\n";
    return 0;
}