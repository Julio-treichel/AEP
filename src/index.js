

var teste = "teste"

function moto(param){    
    document.getElementById('teste').innerHTML = param

}    

// moto(teste)
var query = location.search.slice(1);
var partes = query.split('&');
var data = {};
partes.forEach(function (parte) {
    var chaveValor = parte.split('=');
    var chave = chaveValor[0];
    var valor = chaveValor[1];
    data[chave] = valor;
});

//console.log(data.cilindrada); // Object {lang: "pt", page: "home"}

if(data.combustivel){
 //   moto(teste)
 console.log(data)
//-------------------------------MOTO ETANOL------------------------------------------
    if(data.veiculo=='moto' && data.cilindrada=='100' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto  "
        document.getElementById('dado2').innerHTML = "100cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,280g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='125' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "125cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,300g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='160' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "160cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,341g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='250' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "250cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,426g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='300' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "300"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,460g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='400' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "400cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,600g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='500' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "500cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,647g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='600' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "600cl"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,700g"
    }
//--------------------------------MOTO GASOLINA--------------------------------------
    if(data.veiculo=='moto' && data.cilindrada=='100' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "100cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "0,720g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='125' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "125cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "0,760g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='160' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "160cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "0,790g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='250' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "250cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "0,851g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='300' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "300cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "0,942g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='400' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "400cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "1,193g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='500' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "500cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "1,250g"
    }

    if(data.veiculo=='moto' && data.cilindrada=='600' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Moto"
        document.getElementById('dado2').innerHTML = "600cl"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "1,325g"
    }
//--------------------------------CARRO ETANOL--------------------------------------  
    if(data.veiculo=='carro' && data.cavalo=='1.0' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.0"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "0,871g"
    }

    if(data.veiculo=='carro' && data.cavalo=='1.4' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.4"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "1,302g"
    }

    if(data.veiculo=='carro' && data.cavalo=='1.6' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.6"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "1,330g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.0' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.0"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "1,524g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.2' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.0"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "1,690g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.6' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.6"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "1,812g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.8' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.8"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "2,062g"
    }

    if(data.veiculo=='carro' && data.cavalo=='3.0' && data.combustivel=='etanol'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "3.0"
        document.getElementById('dado3').innerHTML = "Etanol"
        document.getElementById('resultado').innerHTML = "2,135g"
    }
//--------------------------------CARRO GASOLINA--------------------------------------     
    if(data.veiculo=='carro' && data.cavalo=='1.0' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.0"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "1,741g"
    }

    if(data.veiculo=='carro' && data.cavalo=='1.4' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.4"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "2,605g"
    }

    if(data.veiculo=='carro' && data.cavalo=='1.6' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "1.6"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "2,660g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.0' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.0"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "3,049g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.2' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.2"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "3,190g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.6' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.6"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "3,371g"
    }

    if(data.veiculo=='carro' && data.cavalo=='2.8' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "2.8"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "3,517g"
    }

    if(data.veiculo=='carro' && data.cavalo=='3.0' && data.combustivel=='gasolina'){
        document.getElementById('dado1').innerHTML = "Carro"
        document.getElementById('dado2').innerHTML = "3.0"
        document.getElementById('dado3').innerHTML = "Gasolina"
        document.getElementById('resultado').innerHTML = "3,924g"
    }
}

