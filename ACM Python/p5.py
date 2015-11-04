from __future__ import print_function

def takeStep(x, y, steps):
    
    if grid[x][y]==BLOCKED:
        return
    if(grid[x][y] == -10):
        grid[x][y] = steps
        totalSteps = steps
    if(grid[x][y] <= steps):
        return
    else:
        grid[x][y] = steps
    s = steps
    
    takeStep(x+1, y, s+1)
    takeStep(x-1, y, s+1)
    takeStep(x, y+1, s+1)
    takeStep(x, y-1, s+1)


def takeFinalSteps(x, y, steps, kk, n):

        if(kk >= 2):
            if(x+1 < n and grid[x+1][y] == -50):
                print("SN", end="")
                kk -= 2
            if(x > 0 and grid[x-1][y] == -50):
                print("NS", end="")
                kk -= 2
            if(y+1 < n and grid[x][y+1] == -50):
                print("EW", end="")
                kk -= 2
            if(y > 0 and grid[x][y-1] == -50):
                print("WE", end="")
                kk -= 2
            
        if(x+1 < N and grid[x+1][y] == steps+1):
            print("S", end="")
            takeFinalSteps(x+1,y,steps+1,kk,n)
        elif(x > 0 and grid[x-1][y] == steps+1):
            print("N", end="")
            takeFinalSteps(x-1,y,steps+1,kk,n)
        elif(y+1 < N and grid[x][y+1] == steps+1):
            print("E", end="")
            takeFinalSteps(x,y+1,steps+1,kk,n)
        elif(y > 0 and grid[x][y-1] == steps+1):
            print("W", end="")
            takeFinalSteps(x,y-1,steps+1,kk,n)
    

kk = input()
crap = input()
N = int(kk)
K = int(crap)

BLOCKED = -1
#print(str(N) + " " + str(K))

grid = []
for x in range(0, N):
    grid.append([0 for y in range(0,N)])


currPos = []
for x in range(0, N):
        line = raw_input()
        for y in range(0,len(line)):
            if(line[y]=='S'):
                grid[x][y]=-100
                currPos = [x,y]
            elif(line[y]=='I'):
                grid[x][y]=-50
            elif(line[y]=='E'):
                grid[x][y]=-10
            elif(line[y]==' '):
                grid[x][y]=9999
            elif(line[y]=='#'):
                grid[x][y]=BLOCKED

#for line in grid:
#    print(line)
start = currPos

grid[currPos[0]][currPos[1]] = 0
#print()
totalSteps = 0

    
    
takeStep(currPos[0]+1,currPos[1], 1)
takeStep(currPos[0]-1,currPos[1], 1)
takeStep(currPos[0],currPos[1]+1, 1)
takeStep(currPos[0],currPos[1]-1, 1)


#for line in grid:
#    print(line)
output = " "

    
step = 0
currPos = start
#print(K)
takeFinalSteps(currPos[0],currPos[1], 0, K,N)


print(output)



