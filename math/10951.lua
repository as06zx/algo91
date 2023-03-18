for line in io.lines() do
    a, b = line:match("(%d+)%s+(%d+)")
    print(0 + a + b)
  end