Algoritmo "Sequ�ncia de Fibonacci AVA1"

    Var  // Vari�veis
        term_1, term_2, next_term: inteiro
        term_limit, term_counter: inteiro

    Inicio  // In�cio do Programa
        term_1 <- 34
        term_2 <- 55
        term_limit <- 1000
        term_counter <- 2

        escreva("===== Mil primeiros termos da sequ�ncia de Fibonacci =====")
        escreva(term_1)
        escreva(term_2)

        Enquanto term_counter <= term_limit faca
            next_term <- term_1 + term_2
            escreva(next_term)
            term_1 <- term_2
            term_2 <- next_term
            term_counter <- term_counter + 1
        FimEnquanto

        // Feito por Gustavo R.

Fimalgoritmo // Fim do Programa
