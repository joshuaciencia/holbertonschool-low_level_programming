#!/usr/bin/python3

class MyList(list):
    def print_sorted(self):
        l = self[:]
        l.sort()
        print(l)
