n = io.read("*n")
if n >= 0 and n <= 25 then
  io.write("Intervalo [0,25]\n")
elseif n > 25 and n <= 50 then
  io.write("Intervalo (25,50]\n")
elseif n > 50 and n <= 75 then
  io.write("Intervalo (50,75]\n")
elseif n > 75 and n <= 100 then
  io.write("Intervalo (75,100]\n")
else
  io.write("Fora de intervalo\n")
end
