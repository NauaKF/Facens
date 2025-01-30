//document.getElementyById("idparagrafo")

var x = document.getElementById("idparagrafo")
x.textContent = "Bom dia!";
x.style.backgroundColor = "lightblue"


function Verificar()
{
    y = document.getElementById("idnum"); //pega o objeto
    if(parseInt(y.value) > 0)
    {
        window.alert("Número Positivo");
        y.style.backgroundColor = "lightgreen";
        document.getElementById("idparagrafo").textContent = "Número Positivo " +y.value;
    }
    else if (Number(y.value) < 0)
        {
        window.alert("Número Negativo");
        y.style.backgroundColor = "red";
        document.getElementById("idparagrafo").textContent = "Número Negativo " +y.value;
    }
}

function Validar()
{
    let num = Number(document.getElementById("idnum").value);
    if(num == 0)
    {
        window.alert("Número Nulo "+num);
        console.log("Número nulo "+num);
        document.getElementById("idparagrafo").textContent = "Número nulo "+num
    }
}