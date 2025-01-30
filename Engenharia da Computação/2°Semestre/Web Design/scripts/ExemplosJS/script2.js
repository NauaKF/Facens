function Somar()
{
    z = Number(document.getElementById("idnum1").value) + Number(document.getElementById("idnum2").value);

    window.alert("Soma= "+z);
    console.log("Soma= "+z);
    document.getElementById("idparagrafo").textContent = "Soma= "+z
}