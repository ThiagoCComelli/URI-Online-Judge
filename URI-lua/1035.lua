a,b,c,d = io.read("*n","*n","*n","*n")
if b > c and d > a and c + d > a + b and c >= 0 and d >= 0 and a%2 == 0 then
  io.write("Valores aceitos\n")
else
  io.write("Valores nao aceitos\n")
end