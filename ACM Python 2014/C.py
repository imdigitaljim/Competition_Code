from __future__ import print_function
import sys
import math
import itertools
import string

paragraph = []
wc = 0
while(True):
    try:
        z = raw_input()
        z = z.lower()
        a=""
        for y in z:
            if y not in string.punctuation:
                a+=y  
        paragraph.append(a.split())
        wc += len(a.split())
    except:
        break

wcm = 2.0/3.0 * wc

newparagraph = []

for count in range(0, 10000):
    newparagraph = []
    for x in range(0, len(paragraph)):
        newspl = list()
        for a in paragraph[x]:
            if(len(a) > count):
                newspl.append(a)
        newparagraph.append(newspl)
        
    tempwc = 0
    
    for para in newparagraph:
        tempwc += len(para)        
    if(tempwc <= (wcm)):
        break

done = ""
for line in newparagraph:
    done += " ".join(line) + " "

done = done.strip()
print(done)
