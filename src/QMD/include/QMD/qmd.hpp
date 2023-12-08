#pragma once

#include <string>
#include <fstream>

#define MODE_QMD 1
#define MODE_EQMD 2

namespace qmd {
    class QMDParser {
    public:
        QMDParser(int mode);
        ~QMDParser() = default;

        std::string parse(std::string path);

    private:
        int mMode = 0;
        std::ifstream openFile(std::string path);
        std::string read(std::ifstream stream);
    };

    class QMDFactory {
    public:
        QMDFactory(int mode);
        ~QMDFactory() = default;

        void create(std::string path);

    private:
        int mMode = 0;

        std::ofstream createFile(std::string path);
        void write(std::ofstream stream);
    };
} // namespace qmd