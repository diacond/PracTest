def solution(s):
    answer = True
    stack = []
    for c in s:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if not stack: # 리스트가 비어있다면? 이라는 뜻인가
                return False
            stack.pop()
            
    if not stack:
        return True
    else:
        return False
           