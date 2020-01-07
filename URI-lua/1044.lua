list = {io.read("*n","*n")}
table.sort(list)
if list[2]%list[1] == 0 then
  io.write("Sao Multiplos\n")
else
  io.write("Nao sao Multiplos\n")
end