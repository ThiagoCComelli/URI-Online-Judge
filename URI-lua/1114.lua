while true do
  if io.read("*n") == 2002 then
    io.write("Acesso Permitido\n")
    break
  else
    io.write("Senha Invalida\n")
  end
end

  