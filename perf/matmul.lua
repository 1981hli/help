matrix={}

matrix.new=function(dim)
  local A={}
  for i=1,dim do table.insert(A,{}) end
  return A
end

matrix.random=function(dim)
  local A=matrix.new(dim)
  local random=math.random
  for i=1,dim do
    for j=1,dim do
      A[i][j]=math.sin(math.sin(i+1.1)/math.cos(j-1.1))
    end
  end
  return A
end

matrix.mul=function(A,B)
  local dim=#A
  local C=matrix.new(dim)
  for i=1,dim do
    for j=1,dim do
      C[i][j]=0
      for s=1,dim do
        C[i][j]=C[i][j]+A[i][s]*B[s][j]
      end
    end
  end
  return C
end

t=matrix.random(100)
print(t[10][10])
for i=1,1000 do
  matrix.mul(t,t)
end
