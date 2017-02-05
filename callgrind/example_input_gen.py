import random
import sys
import string
n = int(sys.argv[1])
s = ""
for i in range(n):
    s += random.choice(string.ascii_letters)
print s
