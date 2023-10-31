#!/usr/bin/python3
for char in range (97, 123):
    if char != 'q' and char != 'e':
        print("{:c}".format(char), end="")
