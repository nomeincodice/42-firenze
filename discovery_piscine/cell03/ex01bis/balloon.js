let balloons = $('.balloon');
let colors = ['red', 'green', 'blue'];

balloons.each(function() {
    let size = 200;
    let colorIndex = 0;

    $(this).on('click', function() {
        if (size >= 420) {
            size = 200;
            colorIndex = 0;
            $(this).css({
                'width': size + 'px',
                'height': size + 'px',
                'background-color': colors[colorIndex]
            });
        } else {
            size += 10;
            $(this).css({
                'width': size + 'px',
                'height': size + 'px',
                'background-color': colors[(colorIndex + 1) % colors.length]
            });
            colorIndex = (colorIndex + 1) % colors.length;
        }
    });

    $(this).on('mouseleave', function() {
        if (size > 200) {
            size -= 5;
            $(this).css({
                'width': size + 'px',
                'height': size + 'px',
                'background-color': colors[(colorIndex - 1 + colors.length) % colors.length]
            });
            colorIndex = (colorIndex - 1 + colors.length) % colors.length;
        }
    });
});