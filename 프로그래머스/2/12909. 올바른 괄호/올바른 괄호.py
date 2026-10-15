def solution(s):
    answer = True
    stack = []
    for c in s:
        if c == '(':
            stack.append('c')
        elif c == ')':
            if not stack:
                return False
            stack.pop()
    if not stack:
        return True
    else:
        return False
           