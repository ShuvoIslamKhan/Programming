#include <iostream>
using namespace std;

/*class Book {
  public:
    string title;
    string author;
    int pages;
    Book(string name){
      cout << name << '\n';
    }
};

int main() {

  Book book1("Harry Potter");
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.pages = 500;

  Book book2("Lord of the Rings");
  book2.title = "Lord of the Rings";
  book2.author = "Tolkein";
  book2.pages = 700;


  return 0;
}
*/
class Book {
  public:
    string title;
    string author;
    int pages;
    Book(){
      title = "no title";
      author = "no author";
      pages = 0;
    }
    Book(string aTitle, string aAuthor, int aPages){
      title = aTitle;
      author = aAuthor;
      pages = aPages;
    }
};

int main() {

  Book book1("Harry Potter", "JK Rowling", 500);
  Book book2("Lord of the Rings", "Tolkein", 700);
  Book book3;
  cout << book3.title;
  return 0;
}
