local n, m = io.read("*n", "*n")
local nums = {}
for i = 1, n do
  nums[i] = io.read("*n")
end

local sums = {}
sums[0] = 0
for i=1, n do
  sums[i] = sums[i-1] + nums[i]
end

for i=1, m do
  local start_idx, end_idx = io.read("*n", "*n")
  local answer = sums[end_idx] - sums[start_idx-1]
  io.write(answer, "\n")
end