#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m'

for SIZE in 100 500
do
    echo "======================================"
    echo "          TESTING $SIZE NUMBERS"
    echo "======================================"

    PASS=0
    FAIL=0
    TOTAL=0
    MIN=999999
    MAX=0

    for i in $(seq 1 20)
    do
        ARG=$(shuf -i 1-1000000 -n "$SIZE" | tr '\n' ' ')

        ./push_swap $ARG > /tmp/push_swap_result.txt
        STATUS=$?

        if [ $STATUS -ne 0 ]; then
            echo -e "${RED}TEST $i: CRASH / ERROR${NC}"
            FAIL=$((FAIL + 1))
            continue
        fi

        OPS=$(wc -l < /tmp/push_swap_result.txt)
        TOTAL=$((TOTAL + OPS))

        [ "$OPS" -lt "$MIN" ] && MIN=$OPS
        [ "$OPS" -gt "$MAX" ] && MAX=$OPS

        if [ "$SIZE" -eq 100 ] && [ "$OPS" -lt 700 ]; then
            echo -e "${GREEN}TEST $i: $OPS operations - PASS${NC}"
            PASS=$((PASS + 1))
        elif [ "$SIZE" -eq 500 ] && [ "$OPS" -le 5500 ]; then
            echo -e "${GREEN}TEST $i: $OPS operations - PASS${NC}"
            PASS=$((PASS + 1))
        else
            echo -e "${RED}TEST $i: $OPS operations - FAIL${NC}"
            FAIL=$((FAIL + 1))
        fi
    done

    echo "--------------------------------------"
    echo "Passed: $PASS / 20"
    echo "Failed: $FAIL / 20"
    echo "Average: $((TOTAL / 20))"
    echo "Minimum: $MIN"
    echo "Maximum: $MAX"
    echo "--------------------------------------"
done

rm -f /tmp/push_swap_result.txt
