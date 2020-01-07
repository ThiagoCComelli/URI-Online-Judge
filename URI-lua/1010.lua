sum = 0
for i=0,1 do
  a,b,c = io.read("*n","*n","*n")
  sum = sum + (b*c)
end
io.write(string.format("VALOR A PAGAR: R$ %.2f\n",sum))