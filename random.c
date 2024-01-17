/*
 * Name: Jaime Nguyen
 * Lab 0: Introduction to git & GitHub
 * Description: Function body for randchar()
 */

#include <stdlib.h>

char randchar() {
    return (char)('A' + rand() % 26);
}