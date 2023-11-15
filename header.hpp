#include <iostream>
#include <fstream>
#include <memory>
#include <vector>

class Book{
    private:
        std::string author;
        std::string title;
    public:
        Book(const std::string& author, const std::string& title) : author(author), title(title) {};
        void displayBookInfo();
};

class FileReader{

};