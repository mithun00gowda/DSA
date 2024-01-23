#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
void processLog(const std::string& filename) {
    // Prefix "bytes_" to the filename to create the output file name
    std::string outputFilename = "bytes_" + filename;

    // Open the input log file
    std::ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return;
    }

    // Initialize counters
    int numLargeResponses = 0;
    long long totalBytesLargeResponses = 0;

    // Open the output file
    std::ofstream outputFile(outputFilename);

    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create output file." << std::endl;
        inputFile.close();
        return;
    }

    // Read and process each line in the input file
    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::vector<std::string> tokens(istream_iterator<string>{iss}, istream_iterator<string>());

        // Extract the response size (bytes) from the log record
        long long bytesSent = std::stoll(tokens.back());

        // Check if response size is larger than 5000 bytes
        if (bytesSent > 5000) {
            numLargeResponses++;
            totalBytesLargeResponses += bytesSent;
        }
    }

    // Write results to the output file
    outputFile << numLargeResponses << '\n';
    outputFile << totalBytesLargeResponses << '\n';

    // Close files
    inputFile.close();
    outputFile.close();
}

int main() {
    // Example usage
    std::string filename = "hosts_access_log_00.txt";
    processLog(filename);

    return 0;
}