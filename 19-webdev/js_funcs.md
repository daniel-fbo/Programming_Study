## Funções de JavaScript

alert() = faz aparecer um pop-up, precisa de string como argumento
document.querySelector() = retorna uma lista de objetos que se adequem ao seu argumento (pode ser uma tag ou id por exemplo)
alvo.addEventListener(type,listener[, options]);

**type** :Uma linha de texto que representa o tipo de evento a ser esperado.

**listener** :O objeto que recebe uma notificação quando um evento do tipo especificado ocorre. Esse objeto precisa implementar a interface do EventListener, ou simplesmente executar uma função JavaScript.


> window é toda a janela do navegador (toda a macroestrutura do html), um document é o que está na tela, a página individual
> variáveis JS podem ser de todos os tipos, podem ser objetos
>
> document.querySelector("html").addEventListener("click", function () {
>   alert("Ai! Pare de me cutucar!");
> });
> document.querySelector("html").addEventListener("click", () => {
>  alert("Ai! Pare de me cutucar!");
> });

