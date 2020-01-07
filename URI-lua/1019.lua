time = io.read()
hours = time/3600
time = time%3600
minutes = time/60
seconds = time%60
io.write(string.format("%d:%d:%d\n",hours,minutes,seconds))

