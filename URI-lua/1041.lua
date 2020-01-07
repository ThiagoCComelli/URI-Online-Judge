x,y = io.read("*n","*n")
if x==0 and y==0 then
  io.write("Origem\n")
elseif x == 0 then
  io.write("Eixo Y\n")
elseif y == 0 then
  io.write("Eixo X\n")
elseif x > 0 then
  if y > 0 then
    io.write("Q1\n")
  else
    io.write("Q4\n")
  end
else
  if y > 0 then
    io.write("Q2\n")
  else
    io.write("Q3\n")
  end
end