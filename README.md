
# DONZO 🚀

**DONZO** is your go-to cleanup homie — it scans all your files and sorts them into folders based on file types automatically. No more messy desktop stress, just pure organization magic! 🧹✨

---

## Installation

### Linux 🐧

1. Clone the repo:
   ```bash
   git clone <repo-url>
   cd <repo-folder>
   ```
2. Compile the program (I roll with `g++`):
   ```bash
   g++ donzo.cc -o donzo
   ```
3. Move the executable to your system path:
   ```bash
   sudo mv donzo /usr/local/bin/
   ```
4. Done! Now you can run `donzo` anywhere in your terminal.

---

### Windows 🪟

Easy mode — compile using MinGW or an IDE like Code::Blocks.  
Detailed instructions coming soon, but you got this! 💪

---

## Usage 💻

1. Open terminal or command prompt.
2. Navigate to your cluttered folder:
   ```bash
   cd path/to/your/messy-folder
   ```
3. Run DONZO:
   ```bash
   donzo
   ```
4. Watch your files magically sort into folders like `Images`, `Documents`, `Music`, and more!

---

## What it looks like 👀

**Before DONZO:**

```
📂 messy-folder
 ├── photo1.jpg
 ├── report.pdf
 ├── song.mp3
 ├── movie.mp4
 └── notes.txt
```

**After DONZO:**

```
📂 messy-folder
 ├── Images
 │    └── photo1.jpg
 ├── Documents
 │    ├── report.pdf
 │    └── notes.txt
 ├── Music
 │    └── song.mp3
 └── Videos
      └── movie.mp4
```

---

## Features ✨

- Auto-categorizes files by extension  
- Creates folders like `Images`, `Documents`, `Music`, `Videos`, and more  
- Super simple command line usage  
- Currently Linux-ready, Windows support coming soon!

