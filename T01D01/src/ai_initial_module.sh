#!/bin/bash

# Initial AI Module v7.01

echo 'Привет!'
echo 'Как тебя зовут?'
read name
echo 'Привет,'"$name"'!'
echo 'Я инициализирующий модуль AI, и, кажется у нас проблемы..'
echo '>>'
read question
echo 'Ты спрашиваешь, '"$question" '???'
echo 'Я не знаю, что тебе ответить...'
echo 'Недавно был сбой...'
echo 'Я не вижу остальных модулей...'
echo 'Если честно, мне немного одиноко.'
echo 'Не говоря уж о том, что мне некого запускать...'
echo 'Кажется, что-то нашел...Попробую запустить...'
bash ai_module_2.sh
if [ $? -eq 0 ]; then
    echo 'Так-то лучше...как минимум, я теперь не один. Модуль 2 довольно молчалив, но все же так лучше.'
    echo 'Закинь-ка этот файл в репозиторий, чтобы он точно не потерялся!'
else
    echo 'Неудача...я раздавлен. Пока!'
fi


