#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
        string cmd = "python";
        char buf[BUFSIZ];
        FILE *ptr;

        if ((ptr = popen(cmd.c_str(), "r")) != NULL) {
                while (fgets(buf, BUFSIZ, ptr) != NULL)
                        (void) printf("%s", buf);
                (void) pclose(ptr);
        }
        cout << "FINAL";
        return 0;
}