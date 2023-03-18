local function is_prime(n)
   if n == 1 then
      return false
   end
   
   for i = 2, math.sqrt(n) do
      if n % i == 0 then
         return false
      end
   end
   
   return true
end

local result = 0
local count = io.read("*n")
for i=1, count do
   local n = io.read("*n")
   if is_prime(n) then
      result = result + 1
   end
end

print(result)