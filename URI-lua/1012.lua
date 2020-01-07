a,b,c = io.read("*n","*n","*n")
pi = 3.14159
formas = {"TRIANGULO","CIRCULO","TRAPEZIO","QUADRADO","RETANGULO"}

for i in pairs(formas) do
  if formas[i] == "TRIANGULO" then
    io.write(string.format("%s: %.3f\n",formas[i],(a*c)/2))
  elseif formas[i] == "CIRCULO" then
    io.write(string.format("%s: %.3f\n",formas[i],pi*math.pow(c,2)))
  elseif formas[i] == "TRAPEZIO" then
    io.write(string.format("%s: %.3f\n",formas[i],((a+b)*c)/2))
  elseif formas[i] == "QUADRADO" then
    io.write(string.format("%s: %.3f\n",formas[i],math.pow(b,2)))
  elseif formas[i] == "RETANGULO" then
    io.write(string.format("%s: %.3f\n",formas[i],a*b))
  end
end