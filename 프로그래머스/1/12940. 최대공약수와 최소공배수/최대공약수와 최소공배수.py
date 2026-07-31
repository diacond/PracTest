def solution(n, m):
    a, b = n, m
    
    # 유클리드 호제법??
    while b > 0:
        a, b = b, a % b
    
    gcd = a 
    
    # 3. 공식(두 수의 곱 // 최대공약수)
    lcm = (n * m) // gcd
    
    return [gcd, lcm]