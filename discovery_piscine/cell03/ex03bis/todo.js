$(document).ready(function() {
  const $ftList = $('#ft_list');
  const $newTodoButton = $('#new_todo');

  function createTodoItem(text) {
    const $todoItem = $('<div>').addClass('todo-item').text(text);
    $todoItem.on('click', function() {
      if (confirm(`Vuoi rimuovere "${text}" dalla lista?`)) {
        $todoItem.remove();
        saveTodoList();
      }
    });
    $ftList.prepend($todoItem);
    saveTodoList();
  }

  function saveTodoList() {
    const todoList = $ftList.children().map(function() {
      return $(this).text();
    }).get();
    const cookie = `todoList=${JSON.stringify(todoList)}`;
    document.cookie = cookie;
  }

  function loadTodoList() {
    const cookie = document.cookie;
    if (cookie) {
      const todoList = JSON.parse(cookie.split('=')[1]);
      $.each(todoList, function(index, value) {
        createTodoItem(value);
      });
    }
  }

  loadTodoList();

  $newTodoButton.on('click', function() {
    const todoText = prompt('Inserisci nella lista:');
    if (todoText !== '' && todoText !== null) {
      createTodoItem(todoText);
    }
  });
});