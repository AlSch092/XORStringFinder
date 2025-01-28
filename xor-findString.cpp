//This is AI generated code, it has been tested to ensure it works correctly
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>

// Function to check if a character is valid (letters, numbers, or specified symbols)
bool isValidChar(char c) 
{
    std::string validSymbols = " !@#$%^&*()_+-=[]{};':\"?.,<>/";
    return std::isalnum(c) || validSymbols.find(c) != std::string::npos;
}

// Function to check if a string is valid
bool isValidString(const std::string& str) 
{
    for (char c : str) 
    {
        if (!isValidChar(c)) 
        {
            return false;
        }
    }
    return true;
}

// Function to attempt XOR decryption with all possible keys (0–255)
void findPlaintextStrings(const std::vector<uint8_t>& input) 
{
    for (int key = 1; key < 256; ++key) 
    {
        std::string result;
        for (uint8_t byte : input) 
        {
            char decryptedChar = byte ^ key;
            result += decryptedChar;
        }
        if (isValidString(result)) 
        {
            std::cout << "Possible plaintext (key = " << key << "): " << result << std::endl;
        }
    }
}

// Parse hex input as a vector of bytes
std::vector<uint8_t> parseHexInput(const std::string& input) 
{
    std::vector<uint8_t> bytes;
    std::stringstream ss(input);
    std::string token;
    while (ss >> token) 
    {
        try 
        {
            // Convert hex string to byte
            uint8_t byte = static_cast<uint8_t>(std::stoul(token, nullptr, 16));
            bytes.push_back(byte);
        }
        catch (...) 
        {
            std::cerr << "Invalid hex value: " << token << std::endl;
            exit(1);
        }
    }
    return bytes;
}

// Parse string input into a vector of bytes
std::vector<uint8_t> parseStringInput(const std::string& input) 
{
    std::vector<uint8_t> bytes(input.begin(), input.end());
    return bytes;
}

int main(int argc, char* argv[]) 
{
    if (argc != 3) 
    {
        std::cerr << "Usage: " << argv[0] << " <--string|--hex> <input>" << std::endl;
        std::cerr << "  --string: Treat the input as a plaintext string" << std::endl;
        std::cerr << "  --hex:    Treat the input as a space-separated list of hex bytes (e.g., '78 75 7C 7C 7F 30 67 7F 62 7C 74')" << std::endl;
        return 1;
    }

    std::string mode = argv[1];
    std::string input = argv[2];
    std::vector<uint8_t> inputBytes;

    std::cout << "Starting search on input: " << input << std::endl;

    if (mode == "--string") 
    {
        inputBytes = parseStringInput(input);
    }
    else if (mode == "--hex") 
    {
        inputBytes = parseHexInput(input);
    }
    else 
    {
        std::cerr << "Invalid mode: " << mode << std::endl;
        std::cerr << "Use '--string' or '--hex' to specify the input type." << std::endl;
        return 1;
    }

    // Find plaintext strings
    findPlaintextStrings(inputBytes);

    return 0;
}