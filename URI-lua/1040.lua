a,b,c = io.read("*n","*n","*n")
list = {a,b,c}
table.sort(list)
for i=1,#list do
  io.write(list[i],"\n")
end
io.write("\n")
io.write(a,"\n")
io.write(b,"\n")
io.write(c,"\n")
