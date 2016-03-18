while True:
    s = input()
    if s[0] == '.': break
    r = []
    f = False
    for c in s:
        if c == '(' or c == '[':
            r.append(c)
        elif c == ')':
            if not r or r.pop() != '(':
                print("no")
                break
        elif c == ']':
            if not r or r.pop() != '[':
                print("no")
                break
    else:
        print("yes" if not r else "no")
