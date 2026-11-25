
#!/bin/bash

tests=(
    "1 2 3"
    "--simple 1 2 3"
    "1 2 3 --bench"
    "--simple --bench 1 2 3"
    "--simple"
    "--unknown 1 2"
    "1 a 2"
    "2147483648"
    "-2147483648"
    "1 1"
    "1 2 --simple 3"
    "999999999999999999"
)

for test in "${tests[@]}"
do
    echo "=============================="
    echo "TEST: $test"
    ./push_swap $test
    echo "EXIT: $?"
done

