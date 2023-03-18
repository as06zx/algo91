local n = io.read("*n")
for i=1, n do
  local x,y = io.read("*n", "*n")
  local z = x+y
  
  io.write(z, "\n")
end