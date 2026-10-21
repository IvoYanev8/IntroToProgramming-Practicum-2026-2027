<div align="center">

# Типове данни, променливи и аритметични операции

![Theory](https://img.shields.io/badge/theory-6-blue?style=for-the-badge)
![Easy](https://img.shields.io/badge/easy-5-brightgreen?style=for-the-badge)
![Medium](https://img.shields.io/badge/medium-5-yellow?style=for-the-badge)
![Bonus](https://img.shields.io/badge/bonus-3-orange?style=for-the-badge)

</div>

| Ниво | Значение |
| :--: | :------- |
| 🟢 | ***Easy***: директно прилагане на материала |
| 🟡 | ***Medium***: трябва да се комбинират няколко операции |
| 🌟 | ***Bonus***: изисква изобретателност и има ограничения |

<details>
<summary><h2>📘 Теоретични задачи</h2></summary>

<details>
<summary><h3>🔹 Задача 1 · <ins>Какво ще отпечата следният код?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int a = 8;
    bool b = 0;
    bool c = 5;

    std::cout << a * b + c;
}
```

<details>
<summary><b>💡 Обяснение</b></summary>

<br>

- `b = 0` → `false` → `0`
- `c = 5` → `true` → `1` *(всяка ненулева стойност е `true`)*

**Изчисление:**

```text
8 * 0 + 1 = 1
```

> ✅ **Изход:** `1`

</details>

</details>

<details>
<summary><h3>🔹 Задача 2 · <ins>Какво ще отпечата следният код?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int a = 9;
    double b = 2;

    std::cout << a / b << " " << a / 2 << " " << a % 2;
}
```

<details>
<summary><b>💡 Обяснение</b></summary>

<br>

| Израз   | Изчисление | Резултат | Защо |
| :-----: | :--------: | :------: | :--- |
| `a / b` | `9 / 2.0`  | **`4.5`** | `b` е `double`, затова `a` автоматично се преобразува към `double` |
| `a / 2` | `9 / 2`    | **`4`**   | И двете стойности са `int` → ***целочислено деление*** |
| `a % 2` | `9 % 2`    | **`1`**   | `%` връща ***остатъка*** от целочислено деление |

> ✅ **Изход:** `4.5 4 1`

</details>

</details>

<details>
<summary><h3>🔹 Задача 3 · <ins>Каква стойност ще има <code>expr</code>?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int a = 5, b = 10, c = 3;

    bool expr = (a > b) || (b > c && c < a);

    std::cout << expr;
}
```

<details>
<summary><b>💡 Обяснение</b></summary>

<br>

```text
a > b → false
b > c → true
c < a → true

true && true  → true
false || true → true
```

> ✅ **Изход:** `1`

</details>

</details>

<details>
<summary><h3>🔸 Задача 4 · <ins>Изчислете стойността на <code>result</code></ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int a = 7;
    double b = 2.0;
    bool c = 2;

    double result = a / b + c * 3 - a % 3;

    std::cout << result;
}
```

<details>
<summary><b>💡 Обяснение</b></summary>

<br>

| Израз   | Стойност |
| :-----: | :------- |
| `a / b` | `7 / 2.0 =` **`3.5`** |
| `c`     | `true` → **`1`** |
| `c * 3` | **`3`** |
| `a % 3` | **`1`** |

**Следователно:**

```text
3.5 + 3 - 1 = 5.5
```

> ✅ **Изход:** `5.5`

</details>

</details>

<details>
<summary><h3>🔸 Задача 5 · <ins>Какво ще отпечата следният код и защо?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int x = 7, y = 2;

    bool expr = !(x < y) && (y != 0 || x > 10);

    std::cout << expr;
}
```

<details>
<summary><b>💡 Обяснение</b></summary>

<br>

```text
x < y    → false
!(false) → true

y != 0   → true
```

> ⚡ ***Short-circuit:*** при `||` вторият операнд (`x > 10`) **не се проверява**, защото първият вече е `true`.

```text
true && true → true
```

> ✅ **Изход:** `1`

</details>

</details>

<details>
<summary><h3>🔸 Задача 6 · <ins>Какво ще отпечата следният код?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int a = 4, b = 8, c = 12;

    bool expr = ((a + b) > c) && (b - a < 5) || (c % 2 == 0);

    std::cout << expr;
}
```

<details>
<summary><b>💡 Обяснение</b></summary>

<br>

> ⚠️ `&&` има <ins>**по-висок приоритет**</ins> от `||`, затова изразът се чете като `(... && ...) || (...)`.

```text
(a + b) > c  →  12 > 12 → false
false && ... → false   (дясната страна не се проверява)

c % 2 == 0   →  12 % 2 == 0 → true

false || true → true
```

> ✅ **Изход:** `1`

</details>

</details>

</details>
<details>
<summary><h2>💻 Практически задачи</h2></summary>

<br>

![Easy](https://img.shields.io/badge/level-Easy-brightgreen?style=flat-square)

<details>
<summary><h3>🟢 Задача 1 · Вход и изход</h3></summary>

Създайте програма, която:

1. Отпечатва `Hello, C++`.
2. Въвежда три **цели** числа:
   - брой ябълки 🍎
   - брой круши 🍐
   - брой банани 🍌
3. Извежда:

```text
Don’t forget to buy X apples, Y pears and Z bananas!
```

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
5
6
3
```

**📤 Изход:**

```text
Hello, C++
Don’t forget to buy 5 apples, 6 pears and 3 bananas!
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 2 · Лице и обиколка</h3></summary>

Въведете две ***реални*** числа: дължина и широчина на правоъгълник.
Изведете неговата **обиколка** и **лице**.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
10 3
```

**📤 Изход:**

```text
Perimeter = 26
Area = 30
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 3 · Валутен конвертор</h3></summary>

Въведете сума в евро и изчислете:

| Валута | Курс |
| :----- | :--- |
| 💵 долари | `1 € = 1.1 $` |
| 💴 йени   | `1 € = 145 ¥` |

> 📌 **Изискване:** курсовете трябва да бъдат <ins>***константи***</ins> (`const`).

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
10
```

**📤 Изход:**

```text
dollars = 11
yen = 1450
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 4 · Делител ли е?</h3></summary>

Въведете две **цели** числа.
Проверете дали ***първото*** е делител на ***второто*** и изведете `true` или `false`.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `5 5`   | `true`   |
| `2 9`   | `false`  |

</details>

</details>

<details>
<summary><h3>🟢 Задача 5 · Сглобяване на число</h3></summary>

Въведете три **цифри** и ги сглобете в ***трицифрено число***.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `2 3 7` | `237` |

</details>

</details>

<br>

![Medium](https://img.shields.io/badge/level-Medium-yellow?style=flat-square)

<details>
<summary><h3>🟡 Задача 6 · Разделяне на цифри</h3></summary>

Въведете положително <ins>**трицифрено**</ins> число и изведете:

- единиците
- десетиците
- стотиците
- тяхната ***сума***

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
234
```

**📤 Изход:**

```text
units = 4
tens = 3
hundreds = 2
sum = 9
```

</details>

</details>

<details>
<summary><h3>🟡 Задача 7 · Работа с последна цифра</h3></summary>

Въведете две естествени <ins>**двуцифрени**</ins> числа `a` и `b` и изведете:

- произведението им
- ***последната цифра*** на произведението
- дали последната цифра е ***нечетна***

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
15 25
```

**📤 Изход:**

```text
Prod: 375
Last digit: 5
Is odd: true
```

</details>

</details>

<details>
<summary><h3>🟡 Задача 8 · Маскиране на код 🔒</h3></summary>

Въведете произволен <ins>**8-цифрен**</ins> код.
Отпечатайте само ***последните 3 цифри***, а останалите заменете със `*`.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `87654321` | `*****321` |

</details>

</details>

<details>
<summary><h3>🟡 Задача 9 · Конвертор на време ⏱️</h3></summary>

Въведете брой **секунди** и ги преобразувайте в:

`дни` · `часове` · `минути` · `секунди`

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `3600` | `0 days, 1 hours, 0 minutes, 0 seconds` |

</details>

</details>

<details>
<summary><h3>🟡 Задача 10 · Пресичане на интервали</h3></summary>

Въведете два интервала: **`[a; b]`** и **`[c; d]`**.

Изведете:

- `true`, ако ***се пресичат***
- `false`, ако ***не се пресичат***

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
1 3
4 6
```

**📤 Изход:**

```text
false
```

</details>

</details>

<br>

## 🌟 Бонус задачи

<details>
<summary><h3>🌟 Бонус 1 · Четирицифрен палиндром 🔁</h3></summary>

Въведете <ins>**четирицифрено**</ins> число.

Изведете:

- `true`, ако е ***палиндром***
- `false`, ако не е

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `2662`  | `true`   |
| `1277`  | `false`  |

</details>

</details>

<details>
<summary><h3>🌟 Бонус 2 · Абсолютна стойност без <code>if</code></h3></summary>

Въведете **цяло** число и изведете ***абсолютната му стойност***.

> ⛔ **Забранено:** ~~`if`~~ · ~~`std::abs`~~

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `-123`  | `123`    |

</details>

</details>

<details>
<summary><h3>🌟 Бонус 3 · По-голямото от две числа без <code>if</code></h3></summary>

Въведете **2 различни цели** числа и изведете ***по-голямото от тях***.

> ⛔ **Забранено:** ~~`if`~~

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `15` `20` | `20`    |

</details>
</details>

<details>
<summary><h3>🌟 Бонус 4 · Таксиметрова компания 🚕</h3></summary>

Въведете изминатите **километри** и изчислете ***цената***.

| 🧾 Тарифа | Цена |
| :-------- | :--- |
| първите 5 км | **2.50 лв./км** |
| следващите километри | **1.50 лв./км** |
| при сума над 20 лв. | **+10%** |
| такса за заявка *(винаги)* | **+3 лв.** |

> ⛔ **Забранено:** ~~`if`~~ · ~~`switch`~~ · ~~тернарен оператор~~

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `4`     | `13`     |

</details>

</details>

</details>

<details>
<summary><h2>✅ Полезни съвети</h2></summary>

<a id="tip0"></a>

## 📍 0. Декларирайте променливите близо до мястото на използване

> 💡 Добра практика е променливите да се декларират <ins>**възможно най-близо**</ins> до мястото, където се използват, а ***не всички наведнъж*** в началото на програмата.

<table>
<tr><th>⚠️ Не е препоръчително</th><th>✅ Добра практика</th></tr>
<tr>
<td>

```cpp
int a, b, sum, prod;

std::cin >> a >> b;
sum = a + b;
std::cout << sum;

prod = a * b;
std::cout << prod;
```

</td>
<td>

```cpp
int a, b;
std::cin >> a >> b;

int sum = a + b;
std::cout << sum;

int prod = a * b;
std::cout << prod;
```

</td>
</tr>
</table>

---

<a id="tip1"></a>

## ➕ 1. Използвайте `unsigned` за естествени числа

Когато условието казва, че се въвеждат ***естествени числа*** (или по контекст стойността ***не може*** да е отрицателна), може да използвате `unsigned` вместо `int`.

```cpp
unsigned age;
std::cin >> age;
```

> ⚠️ **Внимание:** не избирайте `unsigned` <ins>само защото</ins> „числата са положителни“. Ако в `unsigned` попадне отрицателна стойност, тя ***не става грешка***, а се превръща в огромно положително число:
>
> ```cpp
> unsigned x = 0;
> x = x - 1;   // x става 4294967295, а не -1!
> ```
>
> В повечето случаи `int` остава ***по-добрият избор***, освен ако условието изрично не изисква неотрицателни стойности.

---

<a id="tip2"></a>

## 🔄 2. Размяна на стойностите на две променливи

| Метод | Четимост | Безопасност | Препоръка |
| :---- | :------: | :---------: | :-------: |
| Трета променлива | ⭐⭐⭐ | ✅ | 👍 **да** |
| XOR `^` | ⭐ | ✅ | 🤏 рядко |
| Събиране/изваждане | ⭐ | ⚠️ overflow | 🚫 избягвайте |

<details>
<summary><b>👍 Чрез трета променлива</b></summary>

<br>

```cpp
int a = 5;
int b = 10;

int temp = a; // Запазваме стойността на a
a = b;
b = temp;
```

</details>

<details>
<summary><b>🤏 Чрез XOR (<code>^</code>)</b></summary>

<br>

```cpp
int a = 5;
int b = 10;

a = a ^ b;
b = a ^ b;
a = a ^ b;
```

> ⚠️ Използва се ***рядко*** в съвременния C++. По-четими са вариантът с трета променлива и `std::swap()`.

</details>

<details>
<summary><b>🚫 Чрез събиране и изваждане</b></summary>

<br>

```cpp
int a = 5;
int b = 10;

a = a + b;
b = a - b;
a = a - b;
```

> ⚠️ При големи числа `a + b` може да ***препълни*** типа (overflow).

</details>

---

<a id="tip3"></a>

## 🔢 3. Вземане на цифрите на четирицифрено число

```cpp
int num = 1234;

int units     = num % 10;          // единици  → 4
int tens      = (num / 10) % 10;   // десетици → 3
int hundreds  = (num / 100) % 10;  // стотици  → 2
int thousands = num / 1000;        // хиляди   → 1
```

| Операция | Какво прави |
| :------: | :---------- |
| `% 10` | ***взима*** последната цифра |
| `/ 10` | ***маха*** последната цифра |

> 💡 За числа с ***произволен брой цифри*** ще разгледаме по-общ подход по-късно в курса.

---

<a id="tip4"></a>

## ⚖️ 4. Проверка дали число е четно

```cpp
int number = 12;

bool isEven = (number % 2 == 0);
```

| `isEven` | Значение |
| :------: | :------- |
| `true` | числото е ***четно*** |
| `false` | числото е ***нечетно*** |

> ⚠️ За ***нечетно*** проверявайте с `number % 2 != 0`, <ins>**не**</ins> с `number % 2 == 1`. При отрицателни числа `-3 % 2` е `-1`, затова `== 1` ще даде грешен отговор *(вижте [съвет 7](#tip7))*.

---

<a id="tip5"></a>

## ➗ 5. Проверка дали едно число е делител на друго

```cpp
b % a == 0
```

> ✅ Ако изразът е `true`, то ***`a` е делител на `b`***.

---

<a id="tip6"></a>

## 🪄 6. Използвайте константи вместо „magic numbers“

> 💡 Именуваните константи правят кода ***по-лесен*** за четене, поддръжка и промяна. Ако стойността се смени, я променяте <ins>**само на едно място**</ins>.

<table>
<tr><th>⚠️ Не е препоръчително</th><th>✅ Добра практика</th></tr>
<tr>
<td>

```cpp
#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << number * 3.14;
}
```

</td>
<td>

```cpp
#include <iostream>

constexpr double PI_CONST = 3.14;

int main()
{
    int number;
    std::cin >> number;

    std::cout << number * PI_CONST;
}
```

</td>
</tr>
</table>

---

<a id="tip7"></a>

## ➖ 7. Операторът `%` с отрицателни числа

> 📏 В C++ остатъкът (`%`) има ***същия знак като първия операнд***.

| Израз | Резултат |
| :---: | :------: |
| `-3 % 2` | **`-1`** |
| `3 % -2` | **`1`** |
| `-3 % -2` | **`-1`** |

</details>
