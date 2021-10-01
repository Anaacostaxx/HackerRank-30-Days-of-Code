import sys


arr = []
for arr_i in range(6):
   arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
   arr.append(arr_t)

#print(arr)
hour_glass_sums = []
for a in range(0, 4):
  for b in range(0, 4):
    
    hour_glass = []
    for i in range(0, 3):
      for j in range(0, 3):
        #print("i: "+str(i) + "  j: " + str(j))
        
        if (i == 1 and j == 0):
          hour_glass.append(0)
        elif (i == 1 and j == 2):
          hour_glass.append(0)
        else:
          hour_glass.append(arr[i + a][j + b])
    
    #print(hour_glass)
    hour_glass_sums.append(sum(hour_glass))


print(max(hour_glass_sums))
