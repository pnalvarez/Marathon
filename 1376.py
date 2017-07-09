import sys
H,R,C,B=map(int,raw_input().split())
M=(1,0), (0,1),(-1, 0),(0,-1)
l=[map(int,r.split())for r in sys.stdin]
n=[r[:]for r in l[:]]
def D(r,c):
 x=l[r][c]
 a=[l[r+mr][c+mc]for mr,mc in M if 0<=r+mr<R and 0<=c+mc<C]
 if x==0and H-1in a:n[r][c]=H-1
 elif x-1in a:n[r][c]=x-1
 else:n[r][c]=x
G=range
for i in G(B):
 for r in G(R):
  for c in G(C):D(r,c)
 l=[r[:] for r in n[:]]
for r in l:print' '.join(map(str,r))