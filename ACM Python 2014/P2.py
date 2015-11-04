

while(True):
    try:
        z = raw_input()

        z = z.split()
        
        k = int(z[0])
        arr = [int(x) for x in z[1:]]
        
        output = ""
        for index in range(0, len(arr)):
            if(index == 0):
                for i in range(0, arr[index]):
                    output += "1" + " "
            else:
                offset = arr[index] - arr[index-1]
                for i in range(0, offset):
                    output += str((index+1)) + " "
        print(output)
    except:
        break
