const ftList = document.getElementById('ft_list');
const newTodoButton = document.getElementById('new_todo');


function createTodoItem(text) {
  const todoItem = document.createElement('div');
  todoItem.className = 'todo-item';
  todoItem.textContent = text;
  todoItem.addEventListener('click', () => {
    if (confirm(`Vuoi rimuovere "${text}" dalla lista?`)) {
      todoItem.remove();
      saveTodoList();
    }
  });
  ftList.prepend(todoItem);
  saveTodoList();
}


function saveTodoList() {
  const todoItems = ftList.children;
  const todoList = [];
  for (let i = 0; i < todoItems.length; i++) {
    todoList.push(todoItems[i].textContent);
  }
  const cookie = `todoList=${JSON.stringify(todoList)}`;
  document.cookie = cookie;
}


function loadTodoList() {
  const cookie = document.cookie;
  if (cookie) {
    const todoList = JSON.parse(cookie.split('=')[1]);
    for (let i = 0; i < todoList.length; i++) {
      createTodoItem(todoList[i]);
    }
  }
}


loadTodoList();


newTodoButton.addEventListener('click', () => {
  const todoText = prompt('Inserisci nella lista:');
  if (todoText !== '' && todoText !== null) {
    createTodoItem(todoText);
  }
});