#include <fstream>
#include <string>

void const logError(const std::string& errorMessage) {
    std::ofstream logFile("./game.log", std::ios::app);
    if (logFile.is_open()) {
        logFile << errorMessage << std::endl;
    }
}
int main() {
    logError("bon");
    logError("cjd");
    logError("ttg");
}