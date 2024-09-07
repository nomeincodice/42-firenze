let balloons = document.querySelectorAll('.balloon');
let colors = ['red', 'green', 'blue'];

balloons.forEach(balloon => {
    let size = 200;
    let colorIndex = 0;

    balloon.addEventListener('click', function() {
        if (size >= 410) {
            size = 200;
            colorIndex = 0;
            balloon.style.width = size + 'px';
            balloon.style.height = size + 'px';
            balloon.style.backgroundColor = colors[colorIndex];
        } else {
            size += 10;
            balloon.style.width = size + 'px';
            balloon.style.height = size + 'px';
            colorIndex = (colorIndex + 1) % colors.length;
            balloon.style.backgroundColor = colors[colorIndex];
        }
    });

    balloon.addEventListener('mouseleave', function() {
        if (size > 200) {
            size -= 5;
            balloon.style.width = size + 'px';
            balloon.style.height = size + 'px';
            colorIndex = (colorIndex - 1 + colors.length) % colors.length;
            balloon.style.backgroundColor = colors[colorIndex];
        }
    });
});