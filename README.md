# 🗂️ File Explorer Application (C++ – Linux Console)

## 📘 Objective
The **File Explorer Application** is a **console-based program** written in **C++** that allows users to interact with the **Linux file system**.  
It provides features like listing, navigating, creating, copying, moving, deleting, searching, and managing permissions of files and directories — all through simple text commands.  

This project demonstrates practical use of **C++17’s filesystem library** and **Linux commands integration**.

---

## ⚙️ Features
- 📁 List all files and directories (`ls`)
- 🚀 Navigate through directories (`cd`, `back`)
- 📝 Create and delete files/folders
- 📦 Copy and move files
- 🔍 Search for files
- 🔐 Manage file permissions (`chmod`)
- 🧹 Clean and well-structured C++ code using STL and exception handling

---

## 🧠 Technologies Used
- **C++17 / C++20**
- **Linux Terminal**
- **Filesystem library (`<filesystem>`)**
- **G++ Compiler**
- **Makefile for build automation**

---

## 🏗️ Project Structure
```
FileExplorer/
│
├── main.cpp          # Main source code
└── README.md         # Project documentation

```

## 💻 Setup Instructions

### Step 1: Install the compiler
If not already installed:
```bash
sudo apt update
sudo apt install g++
```

### Step 2: Clone or create the project folder
```bash
mkdir FileExplorer
cd FileExplorer
```

### Step 3: Add files
Place `main.cpp`, `Makefile`, and `README.md` inside this folder.

### Step 4: Compile the project
```bash
make
```

### Step 5: Run the application
```bash
make run
```
Or directly:
```bash
./file_explorer
```

---

## 🧾 Usage Instructions
When you run the program, you’ll see a command prompt that allows you to manage your files easily.

### Available Commands:
| Command | Description | Example |
|----------|--------------|----------|
| `ls` | List files and folders | `ls` |
| `cd <folder>` | Enter directory | `cd Documents` |
| `back` | Go to previous directory | `back` |
| `create <filename>` | Create a file | `create new.txt` |
| `rm <filename>` | Delete a file/folder | `rm old.txt` |
| `copy <src> <dest>` | Copy file | `copy file1.txt folder/` |
| `move <src> <dest>` | Move file | `move data.txt backup/` |
| `search <name>` | Search for a file | `search report.txt` |
| `chmod <file> <perm>` | Change permissions | `chmod file.txt 777` |
| `exit` | Exit the program | `exit` |

---

## 🧩 Example Run
```bash
$ ./file_explorer
Current Directory: /home/user

Available commands:
1. ls
2. cd <foldername>
3. back
4. create <filename>
5. rm <filename>
6. copy <source> <destination>
7. move <source> <destination>
8. search <filename>
9. chmod <filename> <permissions>
10. exit
```
Sample output:
```
$ ls
Documents
Downloads
Pictures
$ cd Documents
$ create notes.txt
$ ls
notes.txt
$ chmod notes.txt 777
$ rm notes.txt
```

---

## 🧑‍💻 Author
**Baishali Behera**  
B.Tech in Computer Science (2022–2026)  
Siksha ‘O’ Anusandhan University  

---

## 🖼️ Screenshots
Include screenshots of:
- Running the application  
- Listing directories (`ls`)  
- Creating and deleting files  
- Using `chmod` or `search`  

Save them in the `/screenshots` folder.

---

## 🏁 Conclusion
This project provides a strong understanding of:
- File management through C++ and Linux APIs  
- Command-line application design  
- Use of modern C++ features like `<filesystem>`  

It’s an ideal mini-project for system programming and OS-level C++ practice.
