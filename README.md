
# DONZO 🚀

**DONZO** is your go-to cleanup homie — it scans all your files and sorts them into folders based on their **file extensions** automatically. No more messy desktop stress, just pure organization magic! 🧹✨

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
4. Watch your files magically sort themselves into folders named after their extensions — like `.jpg`, `.mp3`, `.pdf`, etc.

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
 ├── .jpg
 │    └── photo1.jpg
 ├── .pdf
 │    └── report.pdf
 ├── .mp3
 │    └── song.mp3
 ├── .mp4
 │    └── movie.mp4
 └── .txt
      └── notes.txt
```

---

## Features ✨

- Automatically creates folders based on **file extensions**
- Neatly organizes everything in a single command
- Simple command line usage — no setup madness
- Currently works on Linux, Windows support coming soon!

---

Feel free to ask if you want me to hook up sample screenshots or animated GIFs to make this README even more 👌 on GitHub!
