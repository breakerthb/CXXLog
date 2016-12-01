#include <iostream>

#include "log.h"

using namespace std;

int main()
{
    log_open("main.log");

    log_debug("This is a bug : %s", "bug bug bug ...");

    log_error("This is a error : %s", "erro erro erro ...");

    return 0;
}
