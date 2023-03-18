
local n = io.read("*n")
local p = {}
for i=1, n do
   p[i] = io.read("*n")
end

local high_num = 0
for i=1, n do
   if p[i] > high_num then
      high_num = p[i]
   end
end

local avg = 0
for i=1, n do
   p[i] = p[i] / high_num * 100
   avg = avg + p[i]
end

print(avg/n)