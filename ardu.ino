//этот код можно потестить и без питонопроги
//просто открыть монитор порта и покидать ему всякие строчки

#include <GParser.h>    //https://github.com/GyverLibs/GParser
#include <parseUtils.h>
#include <unicode.h>
#include <url.h>

char strser[20]; //строка прилетает как массив символов, сделал его с запасом

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.setTimeout(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //если что-то прилетело, то...
  if (Serial.available()) {
    //читаем прилетевшее до спецсимвола в конце и записываем в массив. Говорим, что максимум 20 символов
    //в am сохраняется число прилетевших символов
    int am = Serial.readBytesUntil('\n', strser, 20);

    //на всякий случай записываем "пустоту" после этих символов, а то там может оставаться всякая белиберда
    strser[am] = NULL;
    
    /*
    //создаем парсер (объект data типа Гпарсер) и говорим, что разделитель ЗПТ, а данные брать из strser
    GParser data(strser, ',');

    //вызываем функцию сплит, чтоб побить на слова, в am сохраняется кол-во получившихся слов
    am = data.split();

    //Для теста пуляем назад первое слово
    Serial.println(data[0]);
    */

    //Для теста пуляю строчку назад
    Serial.println(strser);
    }
}
