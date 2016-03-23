#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTH 41
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTH];
    float price;
};

char * s_gets(char *st, int n) {
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);

    if (ret_val) {
        find = strchr(st, '\n'); // look for newline
        if (find)                // if the address is not NULL
            *find = '\0';        // place a null character there
        else
            while (getchar() != '\n')
                continue;        // dispose  of rest of line
    }

    return ret_val;
}

int main(void) {
    struct book libaray[MAXBKS];
    int count = 0, i;

    puts("Please enter the book title");
    while (count < MAXBKS && s_gets(libaray[count].title, MAXTITL) != NULL && libaray[count].title[0] != '\0') {
        puts("Please enter the book author");
        s_gets(libaray[count].author, MAXAUTH);
        puts("Please enter the book price");
        scanf("%f", &libaray[count++].price);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("Enter the next title.");
    }

    if (count > 0 ) {
        puts("Here is the list of your books");
        for (i=0; i<count; i++)
            printf("%s by %s: $%.2f\n", libaray[i].title, libaray[i].author, libaray[i].price);
    }

    return 0;
}