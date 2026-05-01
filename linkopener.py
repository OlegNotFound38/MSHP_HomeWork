import webbrowser

letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

print("Здарова, эта прога, чтоб удобнее открывать ссылки для дз. Ты мне говоришь дату и скок заданий. В твоем баузере я открою все ссылки.")
print("Я не знаю как работает try(), поэтому если ты будешь вводить всякую хрень и прога крашнется, или (что вероятнее) депортирует тебя на 404-сайт, сам будешь с этим разбираться. Для начала нажми Enter")
input()

data = input("Введи дату через дефиз в формате день-месяц-год:\n")
count_tasks = int(input("Сколько в домашке заданий?\n"))

print('Вот твои ссылки. Удачи')
for i in range(count_tasks):
    link = f"https://github.com/OlegNotFound38/MSHP_HomeWork/blob/main/{data}/HomeWork/Task{letters[i]}/Task{letters[i]}.cpp"
    webbrowser.open(link)