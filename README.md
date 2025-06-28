# Capybara
This Program is a terminal utilitary that makes a capybara say something that you wrote

## Running
After installing it with scoop, or compiling it from the source simply run capybara (argument)
```bash
capybara argument
```
```
    /\__/\_
   /       \
  /    0    \----------_
 | Y                    \  argument
 \______/                \
       \                 |
        |   /-______-|    \
        |   |         \   /
       //__/         //__/

```
If no arguments are provided it will simply say "Capybara supremacy!"
```
    /\__/\_
   /       \
  /    0    \----------_
 | Y                    \  Capybara supremacy!
 \______/                \
       \                 |
        |   /-______-|    \
        |   |         \   /
       //__/         //__/

```

## building
To build just run premake with the proper arguments on the root directory, if you don't know what arguments to you use, see the premake documentention, and you need to have premake installed.

Exemple:
```
premake5 vs2022
```

## Something There
Just a test to add buckets and packages to the scoop. Nothing interesting to see here.

```bash
scoop bucket add capybara https://github.com/RyanM-Ferreira/capybara-cli bucket
scoop install capybara
```
