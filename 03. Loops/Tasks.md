<div align="center">

# 🔁 Цикли

![Theory](https://img.shields.io/badge/theory-5-blue?style=for-the-badge)
![Easy](https://img.shields.io/badge/easy-5-brightgreen?style=for-the-badge)
![Medium](https://img.shields.io/badge/medium-5-yellow?style=for-the-badge)
![Bonus](https://img.shields.io/badge/bonus-2-orange?style=for-the-badge)

</div>

| Ниво | Значение |
| :--: | :------- |
| 🟢 | ***Easy***: директно прилагане на материала |
| 🟡 | ***Medium***: трябва да се комбинират няколко идеи |
| 🌟 | ***Bonus***: изисква изобретателност и има ограничения |

<details>
<summary><h2>📘 Теоретични задачи</h2></summary>

<details>
<summary><h3>🔹 Задача 1 · <ins>Каква е разликата между двата цикъла?</ins></h3></summary>

<table>
<tr><th>Цикъл с <code>break</code></th><th>Цикъл с <code>continue</code></th></tr>
<tr>
<td>

```cpp
#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
            break;

        std::cout << i;
    }
}
```

</td>
<td>

```cpp
#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
            continue;

        std::cout << i;
    }
}
```

</td>
</tr>
</table>

</details>

<details>
<summary><h3>🔹 Задача 2 · <ins>Колко пъти ще се отпечата нещо?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2) break;
            std::cout << i << j << " ";
        }
    }
}
```

</details>

<details>
<summary><h3>🔸 Задача 3 · <ins>Ще се отпечата ли „End“?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int i = 0;
    while (i < 5)
    {
        continue;
        i++;
    }
    std::cout << "End";
}
```
</details>

<details>
<summary><h3>🔸 Задача 4 · <ins>Какви числа ще се отпечатат?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int x = 0;
    do
    {
        std::cout << x;
        if (x) break;
    } while (x++);
}
```

</details>

<details>
<summary><h3>🔸 Задача 5 · <ins>Какво ще отпечата програмата?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int n = 0;
    while (n = 3)
    {
        std::cout << n;
        if (--n == 0)
            break;
    }
}
```

</details>

</details>

---

<details>
<summary><h2>💻 Практически задачи</h2></summary>

<br>

> ⚠️ **Внимание:** задачите могат и трябва да бъдат решени <ins>**само със знанията досега**</ins>: примитивни типове данни, оператори, условни конструкции и цикли.
>
> ⛔ **Забранено:** ~~масиви~~ · ~~стрингове~~ · ~~побитови операции~~

<br>

![Easy](https://img.shields.io/badge/level-Easy-brightgreen?style=flat-square)

<details>
<summary><h3>🟢 Задача 1 · Решения на x + y = n</h3></summary>

Въведете ***естествено*** число `n` и изведете всички ***естествени*** решения на уравнението `x + y = n`.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
4
```

**📤 Изход:**

```text
x = 1 y = 3
x = 2 y = 2
x = 3 y = 1
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 2 · Общи делители</h3></summary>

Въведете ***две*** числа и отпечатайте всички техни ***общи делители***, подредени <ins>**в обратен ред**</ins> (от най-големия към най-малкия).

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `28 21` | `7 1` |
| `60 30` | `30 15 10 6 5 3 2 1` |
| `19 17` | `1` |

</details>

</details>

<details>
<summary><h3>🟢 Задача 3 · Перфектно число</h3></summary>

Едно естествено число е ***перфектно***, ако е равно на сумата от своите ***собствени делители*** (всички делители без самото число).

Проверете дали въведено число `N` е перфектно.

> 💡 *Пример:* `6 = 1 + 2 + 3`

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `6`  | `Perfect` |
| `28` | `Perfect` |
| `12` | `Not perfect` |

</details>

</details>

<details>
<summary><h3>🟢 Задача 4 · Квадрат с диагонал</h3></summary>

По дадено число `N` изведете квадрат от ***N × N*** символа, в който:

| Позиция | Символ |
| :------ | :----: |
| по ***главния диагонал*** | `0` |
| ***над*** диагонала | `+` |
| ***под*** диагонала | `-` |

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
4
```

**📤 Изход:**

```text
0+++
-0++
--0+
---0
```

---

**📥 Вход:**

```text
3
```

**📤 Изход:**

```text
0++
-0+
--0
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 5 · Цифра на позиция</h3></summary>

Въведете ***число*** и ***позиция***. Отпечатайте цифрата на тази позиция, като броите <ins>**отдясно наляво, започвайки от 1**</ins>.

Ако позицията е ***невалидна***, изведете подходящо съобщение.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `1234567 5` | `3` |
| `1234 5` | `Dont have digit on index 5` |

</details>

</details>

<br>

![Medium](https://img.shields.io/badge/level-Medium-yellow?style=flat-square)

<details>
<summary><h3>🟡 Задача 6 · От двоична в десетична бройна система</h3></summary>

Въведете число, записано в ***двоична*** бройна система, и го преобразувайте в ***десетична***.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `1110111000111` | `7623` |
| `101` | `5` |

</details>

</details>

<details>
<summary><h3>🟡 Задача 7 · Автоморфно число</h3></summary>

Числото `N` е ***автоморфно***, ако квадратът му `N²` <ins>**завършва на самото число**</ins> `N`.

Проверете дали въведено естествено число `N` е автоморфно.

> 💡 *Пример:* `25² = 625`, а `625` завършва на `25`.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `25` | `Automorphic` |
| `76` | `Automorphic` |
| `13` | `Not automorphic` |

</details>

</details>

<details>
<summary><h3>🟡 Задача 8 · Хипотезата на Колац (3n + 1)</h3></summary>

За дадено ***положително*** число `N` повтаряйте:

| Ако `N` е… | Тогава |
| :--------- | :----- |
| ***четно*** | `N = N / 2` |
| ***нечетно*** | `N = 3 * N + 1` |

Процесът спира, когато `N` стане `1`.

Отпечатайте ***редицата***, ***броя стъпки*** и ***най-голямата*** достигната стойност.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
6
```

**📤 Изход:**

```text
Sequence: 6 3 10 5 16 8 4 2 1
Steps: 8
Max value: 16
```

</details>

</details>

<details>
<summary><h3>🟡 Задача 9 · Съкращаване на дроб</h3></summary>

Въведете ***числител*** и ***знаменател***. Изведете <ins>**несъкратимата**</ins> дроб.

> ⚠️ Внимавайте със ***знака***: минусът се изписва пред дробта.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `84 36` | `7/3` |
| `-4 6` | `-2/3` |

</details>

</details>

<details>
<summary><h3>🟡 Задача 10 · Най-често срещана цифра</h3></summary>

Въведете ***естествено*** число и изведете ***най-често срещаната*** цифра в него.

Ако има няколко такива цифри, изведете <ins>**по-голямата**</ins>.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

| 📥 Вход | 📤 Изход |
| :-----: | :------: |
| `44173884` | `4` |
| `112233` | `3` |
| `56789` | `9` |

</details>

</details>

<br>

## 🌟 Бонус задачи

> 🔥 *За тези, които искат предизвикателство. Обърнете внимание на <ins>**ограниченията**</ins>!*

<details>
<summary><h3>🌟 Бонус 1 · Двете най-големи числа</h3></summary>

Въведете цяло положително число `n` и след това `n` цели числа. Отпечатайте ***най-голямото*** и ***второто по големина***.

> ❗ `n >= 2`. <ins>**Валидирайте входа!**</ins>

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
10
9 1 4 5 10 99 34 0 44 1
```

**📤 Изход:**

```text
99 44
```

---

**📥 Вход:**

```text
5
4 1 3 3 1
```

**📤 Изход:**

```text
4 3
```

</details>

</details>

<details>
<summary><h3>🌟 Бонус 2 · Липсващото число</h3></summary>

Въведете число `N`. На следващите `N - 1` реда се въвеждат всички числа от `1` до `N` ***без едно***.

Изведете ***пропуснатото*** число.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
4
1
4
3
```

**📤 Изход:**

```text
2
```

---

**📥 Вход:**

```text
5
3
5
1
2
```

**📤 Изход:**

```text
4
```

</details>

</details>

</details>
