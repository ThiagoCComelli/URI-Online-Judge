name = io.read()
salary = io.read()
sales = io.read()
io.write(string.format("TOTAL = R$ %.2f\n",salary+sales*.15))