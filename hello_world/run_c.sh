#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 "$CFILE" -o a.out

if [ $? -eq 0 ]; then
    ./a.out
fi
