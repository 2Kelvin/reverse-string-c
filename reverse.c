#include <stdio.h>
#include <string.h>

void printReverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;
    while (t >= s)
    {
        printf("%c", *t);
        t--;
    }
    puts("");
}

int main(void)
{
    /*
     * this an array of pointers (signified by the *).
     * it contains memory addresses of the strings/arrays it holds
     */
    char *juices[] = {
        "dragonfruit", "waterberry", "sharonfruit", "uglifruit",
        "rumberry", "kiwifruit", "mulberry", "strawberry",
        "blueberry", "blackberry", "starfruit"};

    char *a;

    puts(juices[6]);
    printReverse(juices[7]);

    a = juices[2];
    juices[2] = juices[8];
    juices[8] = a;

    puts(juices[8]);
    printReverse(juices[(18 + 7) / 5]);
    puts(juices[2]);
    printReverse(juices[9]);

    juices[1] = juices[3];

    puts(juices[10]);
    printReverse(juices[1]);

    return (0);
}