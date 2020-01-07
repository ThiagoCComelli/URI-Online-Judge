a = io.read()*2
b = io.read()*3
c = io.read()*5
io.write(string.format("MEDIA = %.1f\n",(a+b+c)/10))