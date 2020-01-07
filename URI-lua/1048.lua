salary = io.read("*n")
if salary <= 400 then
  ganho = salary*.15
  bonus = 15
  salary = salary+ganho
elseif salary > 400 and salary <= 800 then
  ganho = salary*.12
  bonus = 12
  salary = salary+ganho
elseif salary > 800 and salary <= 1200 then
  ganho = salary*.10
  bonus = 10
  salary = salary+ganho
elseif salary > 1200 and salary <= 2000 then
  ganho = salary*.07
  bonus = 7
  salary = salary+ganho
elseif salary > 2000 then
  ganho = salary*.04
  bonus = 4
  salary = salary+ganho
end
io.write(string.format("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",salary,ganho,bonus))
