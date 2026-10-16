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

<br>

> 🚧 ***Очаквайте скоро...***
>
> Тук ще бъдат добавени полезни съвети когато качим <ins>решенията на практическите задачи</ins> и <ins>обясненията към теоретичните задачи</ins>.

</details>
