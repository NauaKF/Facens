var botao = document.getElementById("idbotao");
botao.addEventListener('click', CalcularMedia);

function CalcularMedia(){
    //window.alert("Entrando na função de cálculo");

    var array = document.getElementsByName("notas");
    var soma = 0, media, i;

    for(i=0; i<array.length; i++)
    {
        soma = soma + Number(array[i].value);
    }
        media = soma/array.length;
        document.querySelector("p").textContent = media.toFixed(2);
    }