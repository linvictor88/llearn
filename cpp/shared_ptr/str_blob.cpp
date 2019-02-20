#include "str_blob.hpp"

namespace linb {

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}

StrBlob::StrBlob(std::initializer_list<std::string> i1) : data(std::make_shared<std::vector<std::string>>(i1)) {}

void StrBlob::check(size_type i, const std::string &msg) const {
    if (i >= data->size())
        throw std::out_of_range(msg);
}

std::string& StrBlob::front() {
    check(0, "front on empty StrBlob");
    data->front();
}

std::string& StrBlob::back() {
    check(0, "back on empty StrBlob");
    data->back();
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back(); 
}

void StrBlob::output() {
    for (std::vector<std::string>::const_iterator it = data->begin();
         it != data->end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

}
