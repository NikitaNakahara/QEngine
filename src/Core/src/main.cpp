#include <iostream>

#include <QMD/qmd.hpp>

int main() {
    qmd::QMDParser parser = qmd::QMDParser(MODE_EQMD);
    qmd::QMDFactory factory = qmd::QMDFactory(MODE_EQMD);

    factory.create("/home/nikita/Рабочий стол/dev-cpp/QEngine/build/src/Core/hello.eqmd");
    std::cout << parser.parse("/home/nikita/Рабочий стол/dev-cpp/QEngine/build/src/Core/hello.eqmd");

    return 0;
}