<div align="center">

# 🔗 Единични указатели. Символни низове

![Theory](https://img.shields.io/badge/theory-6-blue?style=for-the-badge)
![Easy](https://img.shields.io/badge/easy-3-brightgreen?style=for-the-badge)
![Medium](https://img.shields.io/badge/medium-4-yellow?style=for-the-badge)
![Bonus](https://img.shields.io/badge/bonus-2-orange?style=for-the-badge)

</div>

| Ниво | Значение |
| :--: | :------- |
| 🟢 | ***Easy***: директно прилагане на материала |
| 🟡 | ***Medium***: трябва да се комбинират няколко идеи |
| 🌟 | ***Bonus***: изисква изобретателност и има ограничения |

---

<details>
<summary><h2>📘 Теоретични задачи</h2></summary>

<details>
<summary><h3>🔹 Задача 1 · <ins>Какво ще изведе програмата?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int* p;
    *p = 10;
    std::cout << *p << std::endl;
}
```

</details>

<details>
<summary><h3>🔹 Задача 2 · <ins>Какво ще изведе програмата?</ins></h3></summary>

```cpp
#include <iostream>

void addFive(int& x)
{
    x += 5;
}

int main()
{
    int num = 10;
    addFive(num);
    std::cout << num << std::endl;
}
```

</details>

<details>
<summary><h3>🔹 Задача 3 · <ins>Какво ще изведе програмата?</ins></h3></summary>

```cpp
#include <iostream>

void swap(int* a, int& b)
{
    int temp = *a;
    *a = b;
    b = temp;
}

int main()
{
    int x = 3, y = 7;
    swap(&x, y);
    std::cout << x << " " << y << std::endl;
}
```
</details>

<details>
<summary><h3>🔸 Задача 4 · <ins>Какво ще изведе програмата?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int* p = arr + 1;
    std::cout << *(p + 2) << " " << p[-1] << " " << (arr + 4) - p << std::endl;
}
```

</details>

<details>
<summary><h3>🔸 Задача 5 · <ins>Какво ще изведе програмата?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    char str[] = "fmi\0sofia";
    std::cout << str << " " << sizeof(str) << std::endl;
}
```

</details>

<details>
<summary><h3>🔸 Задача 6 · <ins>Какво ще изведе програмата?</ins></h3></summary>

```cpp
#include <iostream>

int main()
{
    char str[] = "Hello";
    char* p = str;
    p += 2;
    *p = 'L';
    std::cout << str << " " << p << " " << *(p + 1) << std::endl;
}
```
</details>

</details>

---

<details>
<summary><h2>💻 Практически задачи</h2></summary>

<br>

> 📌 **Бележка:** във всички задачи низовете са с <ins>**най-много 1024 символа**</ins>.
>
> ⚠️ ~~`<cstring>`~~ и ~~`std::string`~~ са <ins>**забранени**</ins>. Всички помощни функции се пишат ръчно.

<br>

![Easy](https://img.shields.io/badge/level-Easy-brightgreen?style=flat-square)

<details>
<summary><h3>🟢 Задача 1 · Палиндром с два указателя</h3></summary>

Напишете функция, която проверява дали даден низ е ***палиндром***, като <ins>**игнорира**</ins> всички символи, които не са букви, и <ins>**не прави разлика**</ins> между малки и главни букви.

> ⚠️ Използвайте два указателя — единият тръгва от началото, другият от края. ~~Копиране в нов масив~~ не е решение.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
A man, a plan, a canal: Panama!
```

**📤 Изход:**

```text
true
```

---

**📥 Вход:**

```text
Hello, olleH!?x
```

**📤 Изход:**

```text
false
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 2 · Указатели към минимума и максимума</h3></summary>

Напишете функциите

```cpp
int* findMin(int* arr, unsigned size);
int* findMax(int* arr, unsigned size);
```

които връщат ***указател*** към най-малкия и към най-големия елемент. След това в `main` разменете двата елемента ***чрез получените указатели*** и отпечатайте масива.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
5
3 9 1 7 4
```

**📤 Изход:**

```text
3 1 9 7 4
```

</details>

</details>

<details>
<summary><h3>🟢 Задача 3 · Подниз</h3></summary>

Напишете функция, която проверява дали даден низ ***се съдържа*** в друг низ.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
introduction to programming
gram
```

**📤 Изход:**

```text
true
```

---

**📥 Вход:**

```text
introduction to programming
Intro
```

**📤 Изход:**

```text
false
```

</details>

</details>

<br>

![Medium](https://img.shields.io/badge/level-Medium-yellow?style=flat-square)

<details>
<summary><h3>🟡 Задача 4 · Компресиране на низ</h3></summary>

Напишете функция, която приема низ и записва в друг низ компресирания му вариант: всяка поредица от еднакви символи се заменя със символа и броя повторения. Ако поредицата е с дължина 1, броят не се пише.

Ако компресираният низ <ins>не е по-къс</ins> от оригиналния, в резултата се записва оригиналният низ.

> 📌 Входът съдържа само букви.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
aaabccddddddddddddx
```

**📤 Изход:**

```text
a3bc2d12x
```

---

**📥 Вход:**

```text
abcdde
```

**📤 Изход:**

```text
abcdde
```

</details>

</details>

<details>
<summary><h3>🟡 Задача 5 · Най-често срещана дума</h3></summary>

Напишете функция, която приема символен низ и връща ***най-често срещаната дума*** в него. Думите са разделени с интервали.

> 📌 Разликата между <ins>**малки и главни букви се игнорира**</ins>. При равенство се връща думата, която се среща първа.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
The cat and the dog and THE bird
```

**📤 Изход:**

```text
the
```

</details>

</details>

<details>
<summary><h3>🟡 Задача 6 · Намиране и заместване</h3></summary>

Въвеждат се три реда: текст, ***търсен*** низ и низ ***заместител***. Напишете:

- `const char* myStrstr(const char* text, const char* pattern)` — връща указател към първото срещане на `pattern` в `text` или `nullptr`;
- функция, която записва в нов масив текста, в който ***всички*** срещания на търсения низ са заменени със заместителя.

> 📌 Търсеният и заместващият низ <ins>**могат да са с различна дължина**</ins>.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
the cat sat on the mat
the
a
```

**📤 Изход:**

```text
a cat sat on a mat
```

</details>

</details>

<details>
<summary><h3>🟡 Задача 7 · Шифър на Вижнер (Vigenère)</h3></summary>

Въвеждат се текст и ключ (само малки латински букви). Всяка буква от текста се ***отмества*** напред в азбуката с толкова позиции, колкото е поредната буква от ключа (`a` = 0, `b` = 1, ...). Ключът се повтаря циклично.

- регистърът на буквите ***се запазва***;
- символите, които не са букви, ***остават същите*** и <ins>**не преместват**</ins> позицията в ключа.

Напишете функции за ***шифриране*** и ***дешифриране*** на място.

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
Hello, World!
key
```

**📤 Изход:**

```text
Rijvs, Uyvjn!
Hello, World!
```

> 💡 *Защо:* `H + k = H + 10 = R`, `e + e = e + 4 = i`, `l + y = l + 24 = j` *(превърта се)*, ...

</details>

</details>

<br>

![Bonus](https://img.shields.io/badge/level-Bonus-orange?style=flat-square)

<details>
<summary><h3>🌟 Задача 8 · Умножение на големи числа</h3></summary>

Въвеждат се две неотрицателни цели числа като ***низове*** (до 500 цифри всяко). Напишете функции, които ***събират*** и ***умножават*** числата и записват резултата като низ.

> ⚠️ Числата не се събират в нито един целочислен тип. Резултатът <ins>**не трябва**</ins> да съдържа водещи нули (освен ако не е `0`).

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
123456789
987654321
```

**📤 Изход:**

```text
1111111110
121932631112635269
```

---

**📥 Вход:**

```text
99999999999999999999
0
```

**📤 Изход:**

```text
99999999999999999999
0
```

</details>

</details>

<details>
<summary><h3>🌟 Задача 9 · Обръщане на реда на думите</h3></summary>

Напишете функция, която ***обръща реда на думите*** в изречение. В резултата:

- думите са разделени с ***точно един*** интервал;
- няма интервали в началото и в края.

> ⚠️ Функцията работи <ins>**на място**</ins> с ***O(1) допълнителна памет***. ~~Помощен масив~~ е забранен.
>
> 💡 *Подсказка:* какво става, ако обърнете целия низ, а после всяка дума поотделно?

<details>
<summary><b>📥 Вход / 📤 Изход</b></summary>

<br>

**📥 Вход:**

```text
   the sky   is    blue  
```

**📤 Изход:**

```text
blue is sky the
```

</details>

</details>

</details>
