days = io.read()
years = days/365
months = (days%365)/30
days = (days%365)%30
io.write(string.format("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days))
