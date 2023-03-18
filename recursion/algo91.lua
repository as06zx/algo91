local function recursion(str, left, right, count)
    count = count + 1
    if left >= right then
       return 1, count
    elseif str:sub(left,left) ~= str:sub(right,right) then
       return 0, count
    else
       return recursion(str, left+1, right-1, count)
    end
 end
 
 local function isPalindrome(s)
    return recursion(s, 1, #s, 0)
 end
 
 local input_count = io.read()
 local inputs = {}
 for i=1, input_count do
    inputs[i] = io.read() 
    local bool, count = isPalindrome(inputs[i])
   print(("%d %d"):format(bool, count))
 end