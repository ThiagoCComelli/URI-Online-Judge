a = io.read()
b = io.read()
io.write("MEDIA = ")
io.write(string.format("%.5f",(a*3.5+b*7.5)/11),"\n")