const fs = require('fs');
const util = require('./utils');
const stdin = process.openStdin();

const question = JSON.parse(fs.readFileSync('./data.json', 'utf8'));

var isQuestion = true;
var randomIndex = 0;
var actualQuestion = {};
stdin.addListener("data", (e) => {

    // Limpando o terminal
    if (isQuestion) {
        process.stdout.write('\033c');
        randomIndex = util.getRandomInt(0, question.questoes.length);
        
        actualQuestion = question.questoes[randomIndex];
        console.log('Pergunta (N°): ' + actualQuestion.num);
        console.log(actualQuestion.pergunta);

        isQuestion = false;
    } else {
        console.log('Resposta');
        console.log(actualQuestion.resposta);
        isQuestion = true;
    }
});