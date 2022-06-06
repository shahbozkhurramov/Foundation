a = int(input())
print("Sun Mon Tue Wed Thu Fri Sat")
print("%3d %3d %3d %3d %3d %3d %3d"%(a, (a)%31+1, (a+1)%31+1, (a+2)%31+1, (a+3)%31+1, (a+4)%31+1, (a+5)%31+1))