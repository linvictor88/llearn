#include "str_blob.hpp"

using namespace linb;
int main() {
    StrBlob b1;
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");

    std::cout << "b1 output: " << std::endl;
    b1.output();
    std::cout << "b2 output: " << std::endl;
    b2.output();
    return 0;
}
