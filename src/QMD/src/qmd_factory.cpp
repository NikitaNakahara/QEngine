#include <QMD/qmd.hpp>

namespace qmd
{
    QMDFactory::QMDFactory(int mode) {

    }

    void QMDFactory::create(std::string path) {
        write(createFile(path));
    }

    std::ofstream QMDFactory::createFile(std::string path) {
        return std::ofstream(path);
    }

    void QMDFactory::write(std::ofstream stream) {
        stream << "Hello, world";
    }
} // namespace qmd
