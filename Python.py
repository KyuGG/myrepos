fin = open("text1.txt")

str = fin.readline()
if(str[0] != "0"):
    str = str[str.find(" ")+1:]
    str = str[str.find(" ")+1:]
    year = int(str[:str.find(" ")])
    print (year)
    print(str)


fin.close()