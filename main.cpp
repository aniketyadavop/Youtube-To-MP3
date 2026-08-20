#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;  

int main() {
    string url;

    cout << "====================================\n";
    cout << "   YouTube to MP3 Converter (C++)  \n";
    cout << "====================================\n\n";

    cout << "Paste the YouTube link here: ";
    getline(cin, url);

    if (url.empty()) {
        cout << "No link provided. Exiting...\n";
        return 1;
    }

    string command = "yt-dlp.exe -x --audio-format mp3 --audio-quality 0 \"" + url + "\"";

    cout << "\nDownloading and converting to MP3...\n";
    cout << "Please wait (this may take some time)...\n\n";

    int result = system(command.c_str());

    if (result == 0) {
        cout << "\n====================================\n";
        cout << "   SUCCESS! MP3 has been downloaded.\n";
        cout << "   Check the same folder.\n";
        cout << "====================================\n";
    } else {
        cout << "\nSomething went wrong.\n";
        cout << "Make sure yt-dlp.exe and ffmpeg.exe are in this folder.\n";
    }

    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}