import json

with open('faturamento.json', 'r') as file:
    faturamento = json.load(file)

#Calculando o faturamento
menor_faturamento = min(faturamento.values())
maior_faturamento = max(faturamento.values())

# Calculando a media mensal do faturamento
faturamento_total = sum([valor for valor in faturamento.values() if valor > 0])
dias_com_faturamento = len([valor for valor in faturamento.values() if valor > 0])
media_faturamento = faturamento_total / dias_com_faturamento

# Numero de dias com faturamento acima da media
dias_acima_da_media = len([valor for valor in faturamento.values() if valor > media_faturamento])

# Printando resultados
print("Menor faturamento: R$ {:.2f}".format(menor_faturamento))
print("Maior faturamento: R$ {:.2f}".format(maior_faturamento))
print("Número de dias com faturamento acima da média: {}".format(dias_acima_da_media))
