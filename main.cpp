#include <iostream>
#include <json/json.h>

/**
 *

-DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake
 * */
int main() {
    Json::Value root;
    root["one"] = "one";
    root["tow"] =2;
    std::cout << root.toStyledString() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
