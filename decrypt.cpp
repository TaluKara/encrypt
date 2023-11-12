#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

class Decryptor {
public:
    static void decrypt(const std::string& filename) {
        std::string inputFilePath = filename + ".en";
        std::string outputFilePath = filename + ".txt";

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
            fout.put(decryptChar(ch));
        }

        std::cout << "File decrypted successfully.\n";
        std::filesystem::remove(inputFilePath);
    }

private:
    static char decryptChar(char ch) {
        return ch - 3;
    }
};

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: decrypt <filename>\n";
        return 1;
    }

    Decryptor::decrypt(argv[1]);
    return 0;
}
