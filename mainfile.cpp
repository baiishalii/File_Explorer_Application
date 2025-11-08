#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

namespace fs = std::filesystem;

void list_directory(const fs::path &current) {
    std::cout << "Contents of " << current << ":\n";
    for (const auto &entry : fs::directory_iterator(current)) {
        std::cout << entry.path().filename();
        if (fs::is_directory(entry)) {
            std::cout << " [DIR]";
        }
        std::cout << "\n";
    }
}

void change_directory(fs::path &current, const std::string &dir) {
    fs::path newPath = current / dir;
    if (fs::exists(newPath) && fs::is_directory(newPath)) {
        current = fs::canonical(newPath);
    } else {
        std::cout << "Directory not found!\n";
    }
}

void create_file(const fs::path &filePath) {
    std::ofstream file(filePath);
    if (file) {
        std::cout << "File created: " << filePath << "\n";
    } else {
        std::cout << "Failed to create file!\n";
    }
}

void create_directory(const fs::path &dirPath) {
    if (fs::create_directory(dirPath)) {
        std::cout << "Directory created: " << dirPath << "\n";
    } else {
        std::cout << "Failed to create directory!\n";
    }
}

void delete_item(const fs::path &target) {
    if (!fs::exists(target)) {
        std::cout << "Item does not exist!\n";
        return;
    }
    if (fs::is_directory(target)) {
        fs::remove_all(target);
    } else {
        fs::remove(target);
    }
    std::cout << "Deleted: " << target << "\n";
}

int main() {
    fs::path current_path = fs::current_path();
    std::string command;
    
    std::cout << "Simple File Manager\n";
    std::cout << "Current directory: " << current_path << "\n\n";
    
    // Example usage:
    list_directory(current_path);
    
    // You can add interactive command handling here
    return 0;
}
