#include <iostream>
#include <string> 

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:

    // constructor
    Book(std::string title, std::string author, std::string isbn) {

        this->title = title;
        this->author = author;
        this->isbn = isbn;

    }

    // metoda
    void seeDetails() {
        std::cout << "The title of this book is: " << title << std::endl;
        std::cout << "Written by: " << author << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;

    }

};

int main() {

    Book book1("A Tale of Two Cities", "Charles Dickens", "1234567890");
    book1.seeDetails();
    return 0;

}