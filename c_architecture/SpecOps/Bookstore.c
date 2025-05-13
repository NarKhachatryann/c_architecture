#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *name;
    char *author;
    float price;
} book;

typedef struct {
    int books_count;
    book *books;
    int *count;
} bookstore;

void createBookstore(bookstore* store) {
    store -> books = (book*) malloc(10 * sizeof(book));
    store -> books ->author[0] = '\0';
    store -> books ->name[0] = '\0';
}

void addBook(bookstore *store, book new_book, int count) {
    if (store ->books == NULL)
    {
        return;
    }
    if (store ->count == NULL) {
        return;
    }
    if(store == NULL) {
        return;
    }
    int stat = 0;
    int index = 0;
    for (int i = 0; i < store ->books_count; ++i) {
        if (strcmp(store ->books[i].name, new_book.name) == 0 && strcmp(store ->books[i].author, new_book.author) == 0) {
            stat = 1;
            index = i;
            break;
        }
    }    

    if (stat) {
        store -> =
    }
}
void deleteBook(bookstore *store, char *book_name);
int getBookCount(bookstore *store, char *book_name);
void getBookInfo(bookstore *store, char *book_name);
void listBooks(bookstore *store);
void updateBookPrice(bookstore *store, char *book_name, float new_price);
book *searchBook(bookstore *store, char *book_name);



int main() {
    bookstore store = {0}; 
}