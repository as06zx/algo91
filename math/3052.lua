local t = {}
for i = 1, 10 do
   local n = io.read("*n")
   local v = n % 42
   if t[v] == nil then
      t[v] = true
   end
end

local o = 0
for _ in pairs(t) do
   o = o + 1
end

print(o)