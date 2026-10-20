# Antenas de Microfita com Patch Fractal para Aplicações em Sistemas Wireless

Trabalho de Conclusão de Curso em Engenharia Elétrica — **Evandro Abreu de Oliveira**
Universidade Federal do Rio Grande do Norte (UFRN), Centro de Tecnologia, Departamento de Engenharia Elétrica — **2011**

- Orientador: Prof. Dr. Sandro Gonçalves da Silva
- Co-orientadora: Profª. Drª. Cristhianne de Fátima Linhares de Vasconcelos
- Desenvolvido durante o projeto de pesquisa "Antenas de Microfita com Patch Fractal para Aplicações em Sistemas de Comunicações Sem Fio", com apoio do CNPq (bolsa de iniciação científica).

> **Arquivo histórico.** Este repositório preserva o material original de 2011, recuperado de um backup antigo em outubro de 2026. Não há manutenção nem desenvolvimento em andamento.

## Resumo

O estudo de miniaturização de antenas de microfita surge como alternativa para uma gama imensa de aplicações, desde empreendimentos militares, equipamentos médicos, radares ou comunicações sem fio. Este trabalho consiste no projeto de antenas com contornos fractais com o objetivo de demonstrar a viabilidade de sua aplicação na miniaturização de antenas de microfita. É explorada a técnica de modelamento como linha de transmissão e a utilização de softwares para cálculo de dimensões, desenho e análise das estruturas propostas. Ao final é apresentada a avaliação dos resultados alcançados com a aplicação da **curva de Koch** a uma antena de microfita com patch retangular, com **dois níveis de iteração**.

**Palavras-chave:** antenas de microfita, fractais, miniaturização de antenas.

## Conteúdo

| Pasta | O que tem |
|---|---|
| [`tcc/`](tcc/) | Texto final em PDF ([`Evandro_tcc_v2.pdf`](tcc/Evandro_tcc_v2.pdf), 41 páginas) e fonte LaTeX completo com figuras |
| [`apresentacao/`](apresentacao/) | Slides da defesa |
| [`relatorios/`](relatorios/) | Relatório da bolsa de iniciação científica, relatório parcial e notas de atividades |
| [`calculos/`](calculos/) | Programa em C para o cálculo das dimensões do patch retangular (modelo de linha de transmissão) e da alimentação *inset-feed*; `dados.txt` com resultados |
| [`prototipos/`](prototipos/) | Desenhos AutoCAD (DXF/DWG e PDF) do patch base e das iterações 1 e 2 da curva de Koch |

## Observações técnicas

- Os arquivos `.tex` estão na codificação original **Latin-1 (ISO-8859-1)**, como em 2011. Para compilar: `pdflatex modeloTCC-2009.04.03.autordata.tex` dentro de `tcc/` (o modelo usa `inputenc` latin1).
- O programa em `calculos/main.c` foi escrito no Dev-C++ (Windows); compila com qualquer compilador C: `cc main.c -lm -o contas`.
- O material de terceiros consultado no trabalho (artigos IEEE, livros e dissertações) **não** está incluído; ver as referências no TCC.

## Licença

- Texto, figuras, slides, relatórios e desenhos: [CC BY 4.0](LICENSE-CC-BY-4.0.md)
- Código-fonte em `calculos/`: [MIT](LICENSE-MIT)

Ao reutilizar, cite: OLIVEIRA, Evandro Abreu de. *Antenas de Microfita com Patch Fractal para Aplicações em Sistemas Wireless*. Trabalho de Conclusão de Curso (Engenharia Elétrica) — Universidade Federal do Rio Grande do Norte, Natal, 2011.
