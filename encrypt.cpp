#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

class Encryptor {
public:
    static void encrypt(const std::string& filename) {
        std::string inputFilePath = filename + ".txt";
        std::string outputFilePath = filename + ".en";

        if (!std::filesystem::exists(inputFilePath)) {
            std::cerr << "Error: File '" << inputFilePath << "' does not exist.\n";
            return;
        }

        std::ifstream fin(inputFilePath, std::ios::binary);
        std::ofstream fout(outputFilePath, std::ios::binary);

        if (!fin || !fout) {
            std::cerr << "Error opening files.\n";
            return;
        }

        char ch;
        while (fin.get(ch)) {
            fout.put(encryptChar(ch));
        }

        std::cout << "File encrypted successfully.\n";
        std::filesystem::remove(inputFilePath);
    }

private:
    static char encryptChar(char ch) {
        return ch + 3;
    }
};

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: encrypt <filename>\n";
        return 1;
    }

    Encryptor::encrypt(argv[1]);
    return 0;
}
