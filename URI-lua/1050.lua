list = {[61]="Brasilia",[71]="Salvador",[11]="Sao Paulo",[21]="Rio de Janeiro",[32]="Juiz de Fora",[19]="Campinas",[27]="Vitoria",[31]="Belo Horizonte"}
n = io.read("*n")
if list[n] == nil then
  io.write("DDD nao cadastrado\n")
else
  io.write(string.format("%s\n",list[n]))
end
