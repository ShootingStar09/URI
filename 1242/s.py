while True:
    try:
        l = ['BS','SB','FC','CF']
        cont = 0
        n = input()
        cont = 0
        while len(n) > 1 :
            bol = False
            for i in range(len(n)):
                if n[i:i+2] in l:
                    n = n[0:i] + n[i+2::]
                    cont+=1
                    bol = True
            if not bol:
                break
        print(cont)
    except EOFError:
        break
