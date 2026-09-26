# 🎵 YouTube to MP3 Converter (C++)

A lightweight, cross-platform command-line tool written in C++ that downloads and converts YouTube videos to high-quality MP3 audio files using [`yt-dlp`](https://github.com/yt-dlp/yt-dlp) and [`FFmpeg`](https://ffmpeg.org/).

---

## 🚀 Features

- **Highest Audio Quality**: Extracts best available audio and encodes at best quality (`--audio-quality 0` / VBR ~320kbps).
- **Cross-Platform Ready**: Works on Windows, Linux, and macOS with platform-aware command execution.
- **Simple & Interactive**: Paste the link and let the program handle extraction and conversion.
- **Portable on Windows**: Includes pre-configured binaries (`yt-dlp.exe` and `ffmpeg.exe`) for out-of-the-box usage.

---

## 📋 Prerequisites

### Windows (Pre-bundled)
If you are using the Windows repository bundle, the required binaries (`yt-dlp.exe`, `ffmpeg.exe`, `ffprobe.exe`) are already included in the root folder.

### Linux & macOS
Make sure you have `yt-dlp` and `ffmpeg` installed and accessible in your system `PATH`:

#### Linux (Debian / Ubuntu / Arch):
```bash
# Install FFmpeg
sudo apt update && sudo apt install ffmpeg -y    # Debian / Ubuntu
# sudo pacman -S ffmpeg                         # Arch Linux

# Install yt-dlp
sudo wget https://github.com/yt-dlp/yt-dlp/releases/latest/download/yt-dlp -O /usr/local/bin/yt-dlp
sudo chmod a+rx /usr/local/bin/yt-dlp
```

#### macOS (via Homebrew):
```bash
brew install yt-dlp ffmpeg
```

---

## 🛠️ Compilation

To compile the C++ source code manually:

### Windows (MinGW / GCC)
```powershell
g++ -O3 main.cpp -o main.exe
```

### Linux / macOS (g++ / Clang)
```bash
g++ -O3 main.cpp -o youtube-to-mp3
```

---

## 💻 Usage

1. **Run the executable**:
   - **Windows**:
     ```powershell
     .\main.exe
     ```
   - **Linux / macOS**:
     ```bash
     ./youtube-to-mp3
     ```

2. **Enter the YouTube link**:
   ```text
   ====================================
      YouTube to MP3 Converter (C++)  
   ====================================

   Paste the YouTube link here: https://www.youtube.com/watch?v=dQw4w9WgXcQ
   ```

3. **Output**:
   - The tool will download and convert the stream into `.mp3`.
   - The resulting MP3 file is saved directly in the working directory.

---

## 📂 Project Structure

```text
Youtube-To-MP3/
├── main.cpp         # Main C++ application source code
├── main.exe         # Compiled Windows executable
├── yt-dlp.exe       # yt-dlp Windows binary
├── ffmpeg.exe       # FFmpeg audio conversion engine
├── ffprobe.exe      # Multimedia stream analyzer
├── ffplay.exe       # Media player binary
└── README.md        # Project documentation
```

---

## 🔧 Troubleshooting & Tips

- **Update `yt-dlp`**: YouTube changes its extraction mechanisms periodically. If a download fails, update `yt-dlp`:
  ```bash
  # Windows
  .\yt-dlp.exe -U

  # Linux / macOS
  yt-dlp -U
  ```
- **Conversion Fails**: Ensure `ffmpeg` is installed and reachable either in the same directory or via your system's `PATH`.

---

## 👤 Author

- **Aniket Yadav** ([@aniketyadavop](https://github.com/aniketyadavop))
