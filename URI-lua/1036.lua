a,b,c = io.read("*n","*n","*n")
x = math.pow(b,2)-(4*a*c)
if x > 0 then
  if a > 0 then
    x = math.sqrt(x)
    x1 = (-b+x)/(2*a)
    x2 = (-b-x)/(2*a)
    io.write(string.format("R1 = %.5f\nR2 = %.5f\n",x1,x2))
  else
    io.write("Impossivel calcular\n")
  end
elseif x < 0 then
  io.write("Impossivel calcular\n")
else
  x1 = (-b+x)/(2*a)
  x2 = (-b-x)/(2*a)
  io.write(string.format("R1 = %.5f\nR2 = %.5f\n",x1,x2))
end