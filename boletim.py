print("Boletim de Notas")

nome = input("Digite o nome do aluno: ")
curso = input("Digite o curso do aluno: ")
disciplina = input("Digite a disciplina: ")
nota = float(input("Digite a nota do aluno: "))

if nota >= 7 and nota <= 10:
    print(f"O aluno {nome} do curso {curso} foi aprovado na disciplina {disciplina} com a nota {nota}.")
else:
    print(f"O aluno {nome} do curso {curso} não foi aprovado na disciplina {disciplina}.")
