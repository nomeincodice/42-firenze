const leftOperandInput = document.getElementById('left-operand');
const operatorSelect = document.getElementById('operator');
const rightOperandInput = document.getElementById('right-operand');
const submitButton = document.getElementById('submit');


function calculate(leftOperand, operator, rightOperand) {
    
    if (isNaN(leftOperand) || isNaN(rightOperand)) {
        throw new Error('Invalid input: please enter numbers only');
    }

    
    if (leftOperand < 0 || rightOperand < 0) {
        throw new Error('Invalid input: please enter positive numbers only');
    }

    
    let result;
    switch (operator) {
        case '+':
            result = leftOperand + rightOperand;
            break;
        case '-':
            result = leftOperand - rightOperand;
            break;
        case '*':
            result = leftOperand * rightOperand;
            break;
        case '/':
            if (rightOperand === 0) {
                throw new Error('Cannot divide by zero!');
            }
            result = leftOperand / rightOperand;
            break;
        case '%':
            if (rightOperand === 0) {
                throw new Error('Cannot divide by zero!');
            }
            result = leftOperand % rightOperand;
            break;
        default:
            throw new Error('Invalid operator');
    }

    return result;
}


function handleError(error) {
    alert(`Error: ${error.message}`);
    console.error(error);
}


submitButton.addEventListener('click', (event) => {
    event.preventDefault();

    try {
       
        const leftOperand = parseInt(leftOperandInput.value);
        const operator = operatorSelect.value;
        const rightOperand = parseInt(rightOperandInput.value);

        
        const result = calculate(leftOperand, operator, rightOperand);

        
        alert(`Result: ${result}`);
        console.log(`Result: ${result}`);
    } catch (error) {
        handleError(error);
    }
});

function displayMessage() {
    console.log('Please, use me…');
    alert('Warning: You\'re not using the calculator! ⏰');
}

setInterval(displayMessage, 30000);