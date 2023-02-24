#else block for loop

"""for i in range(1,5):
    print(i)
else:
    print("The loop is over and else block print")
print("Done")"""


#case1

"""For x in range(10):
    print("Hello world",x)
    print(0/10)
else:
    print("else block")
print("done")"""

#CASE2

for x in range(10):
    print("pratap",x)
    if(x==4):
     break
else:
    print("else block")
print("done")


#case3

import os
for x in range(6):
    print("Gagan:",x)
    os._exit(0)
else:
    print("else block")
