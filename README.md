# Capybara CLI

A friendly capybara that says anything you want... right in your terminal.

This is a simple terminal utility, mainly created as a test for adding buckets and packages to **Scoop**. Nothing too serious but capybaras are awesome, aren't they?

---

## Installation

It is available on Scoop, install it like this:

```bash
scoop bucket add capybara https://github.com/RyanM-Ferreira/capybara-cli
scoop install capybara
```

---

## Usage

After installing with Scoop (or compiling from source), just run:

```bash
capybara "your message here"
```

Example output:

```plaintext
    /\__/\_
   /       \
  /    0    \----------_
 | Y                    \  Hello world!
 \______/                \
       \                 |
        |   /-______-|    \
        |   |         \   /
       //__/         //__/
```

If no argument is passed, it defaults to:

```plaintext
Capybara supremacy!
```

---

## Building from Source

To build, run **Premake** in the root directory with your desired arguments. Make sure you have Premake installed.

### Example

```bash
premake5 vs2022
```

For other build options, check the [Premake documentation](https://premake.github.io/docs/Using-Premake).

---

## License

Public domain license. Do whatever you want... just be nice to capybaras.

---

> Done for no particular reason, and maybe a little coffee.
