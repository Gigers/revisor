/**
 * Função para gerar valores aleatórios
 * @param {int} min 
 * @param {int} max 
 */
function getRandomInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min)) + min;
}

module.exports = {getRandomInt};