local c = io.read("*n")

for i=1, c do
  local x,y = io.read("*n", "*n")
  print(("Case #%d: %d + %d = %d"):format(i, x, y, x+y))
end