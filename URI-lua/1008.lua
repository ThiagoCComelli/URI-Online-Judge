number = io.read()
hours = io.read()
price = io.read()
io.write(string.format("NUMBER = %d\nSALARY = U$ %.2f\n",number,hours*price))