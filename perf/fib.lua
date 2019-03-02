fib=function(n)
  if n==1 or n==2 then
    return 1
  else
    return fib(n-2)+fib(n-1)
  end
end

print(fib(45))
