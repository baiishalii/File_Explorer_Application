🗂️ File Explorer Application (C++ – Linux Console)
📘 Objective : The File Explorer Application is a console-based program written in C++ that interacts with the Linux file system to perform essential file and directory management tasks.
It helps users list, navigate, manipulate, search, and manage permissions of files and folders using simple text commands.

⚙️ Features
✅ List files and directories
✅ Navigate between folders (cd, back)
✅ Create, delete, copy, and move files or directories
✅ Search files by name
✅ Manage file permissions (chmod)

🧠 Technologies Used
C++17 (for filesystem and input/output)
Linux terminal
G++ Compiler
Filesystem library (<filesystem>)
Standard Template Library (STL)

🏗️ Project Structure
FileExplorer/
│
├── main.cpp          # Main source code
├── README.md         # Documentation
└── screenshots/      # Include screenshots of output

💻 Setup Instructions
1️⃣ Install g++ if not already
sudo apt update
sudo apt install g++

2️⃣ Compile the program
g++ main.cpp -o file_explorer -lstdc++fs
(If you’re using C++20 or newer, -lstdc++fs may not be needed.)

3️⃣ Run the program
./file_explorer

🧾 Usage Instructions
When you run the program, you’ll see a simple menu-based or command-driven interface.
Example commands:
Command	Description
ls	List all files and folders
cd <folder>	Change directory
back	Go up one level
copy <source> <destination>	Copy a file
move <source> <destination>	Move a file
rm <filename>	Delete a file or folder
create <filename>	Create a new empty file
search <keyword>	Search for files
chmod <filename> <permissions>	Change permissions (e.g., chmod file.txt 644)
exit	Exit the program
🧩 Example Run
$ ./file_explorer
Current directory: /home/user

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


Example:
ls
cd Documents
create test.txt
copy test.txt ../Desktop/
chmod test.txt 777
rm test.txt

🛠️ Code Highlights
Uses <filesystem> for directory iteration and manipulation.
Exception handling for file operations.
Simple input parsing for commands.
Modular design with functions for each operation.

🧑‍💻 Author:
Baishali Behera
B.Tech Computer Science (2022–2026)
Siksha ‘O’ Anusandhan University

Place them inside the /screenshots folder.
