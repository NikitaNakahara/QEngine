#include <QMD/qmd.hpp>

#include <iostream>

namespace qmd
{
    QMDParser::QMDParser(int mode) :mMode(mode) {

    }

    std::string QMDParser::parse(std::string path) {
        return read(openFile(path));
    }

    std::ifstream QMDParser::openFile(std::string path) {
        std::ifstream stream = std::ifstream(path);
        if (stream.is_open()) {
            return stream;
        } else {
            std::cout << "not opened";
            return std::ifstream();
        }
    }

    std::string QMDParser::read(std::ifstream stream) {
        std::string str;
        std::string result;

        while (std::getline(stream, str)) {
            result += str + '\n';
        }

        return result;
    }
} // namespace qmd
