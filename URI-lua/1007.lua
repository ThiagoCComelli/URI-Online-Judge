lista = {}
for i=0,3 do
  lista[i] = io.read()
end
io.write("DIFERENCA = ",lista[0]*lista[1]-lista[2]*lista[3],"\n")