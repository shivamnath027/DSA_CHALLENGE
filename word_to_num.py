x = input("Enter: ")
y = x.split(" ")
for i in range(0,len(y)):
    y[i] = y[i].lower()
z=[]
for i in y:
    if i == 'one':
        z.append("1")
    elif i== 'two':
        z.append("2")
    elif i== 'three':
        z.append("3")
    elif i== 'four':
        z.append("4")
    elif i == 'five':
        z.append('5')
    elif i== 'six':
        z.append('6')
    elif i== 'seven':
        z.append('7')
    elif i== 'eight':
        z.append('8')
    elif i== 'nine':
        z.append('9')
    elif i=='zero':
        z.append('0')
        
ans = "".join(z)
print(int(ans))