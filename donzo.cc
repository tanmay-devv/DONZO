#include <iostream>
#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;

int main() {
    fs::path current_dir = fs::current_path();
    std::vector<std::string> extensions_found;

    std::cout << "Scanning" << current_dir << "\n\n";

    //2
    for (const auto& entry : fs::directory_iterator(current_dir)) {
        if (entry.is_regular_file()) {
            std::string ext = entry.path().extension().string();

            if (!ext.empty()) {
                bool already_exists = false;
                for (const auto& known_ext : extensions_found) {
                    if (known_ext == ext) {
                        already_exists = true;
                        break;
                    }
                }
                if (!already_exists) {
                    extensions_found.push_back(ext);
                }
            }
        }
    }

    //3
    for (const auto& ext : extensions_found) {
        std::string dir_name = ext.substr(1);
        fs::path dir_path = current_dir / dir_name;

        if (!fs::exists(dir_path)) {
            fs::create_directory(dir_path);
            std::cout << "Created Directories: " << dir_name << "\n";
        }
    }

    //4
    for (const auto& entry : fs::directory_iterator(current_dir)) {
        if (entry.is_regular_file()) {
            std::string ext = entry.path().extension().string();
            if (!ext.empty()) {
                std::string dir_name = ext.substr(1);
                fs::path dest_dir = current_dir / dir_name;
                fs::path dest_path = dest_dir / entry.path().filename();

                try {
                    fs::rename(entry.path(), dest_path);
                    std::cout << "Yanked: " << entry.path().filename() 
                              << " → " << dir_name << "/\n";
                } catch (const fs::filesystem_error& e) {
                    std::cerr << "Can't move: " << entry.path().filename() 
                              << ": " << e.what() << "\n";
                }
            }
        }
    }

    std::cout << "\nDONZO'Z\n";
    return 0;
}
