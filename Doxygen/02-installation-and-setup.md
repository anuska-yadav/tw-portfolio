# 2. Installation and Setup

## 2.1 Introduction

Before generating documentation, Doxygen must be installed and configured on the system.

Doxygen is available for Windows, macOS, and Linux. The installation process differs depending on the operating system.

## 2.2 Installing Doxygen on Windows

1. Visit the [official Doxygen download page](https://www.doxygen.nl/download.html).
2. Download the Windows installer.
3. Run the downloaded installer.
4. Follow the installation instructions.
5. Complete the installation process.

After installation, open Command Prompt or PowerShell to verify that Doxygen is available.

## 2.3 Installing Doxygen on macOS

Doxygen can be installed on macOS using Homebrew, a package manager for macOS.

Open the Terminal and execute:

```bash
brew install doxygen
```

Wait for the installation to complete.

## 2.4 Installing Doxygen on Linux

On Debian-based Linux distributions such as Ubuntu, Doxygen can be installed using the APT package manager.

Open the Terminal and execute:

```bash
sudo apt-get install doxygen
```

Enter the password when prompted and wait for the installation to finish.

## 2.5 Verifying the Installation

After installing Doxygen, verify that it has been installed successfully.

Open the terminal or command prompt and execute:

```bash
doxygen --version
```

If the installation is successful, the command displays the installed Doxygen version.

For example:

```text
1.x.x
```

The exact version depends on the installed release.

## 2.6 Installation Summary

| Operating System | Installation Command / Method |
|---|---|
| Windows | Download and run the official installer |
| macOS | `brew install doxygen` |
| Linux (Debian/Ubuntu) | `sudo apt-get install doxygen` |

## 2.7 Conclusion

Doxygen can be installed on different operating systems using the appropriate installation method. Once installed and verified, it is ready to be used for generating software documentation.

---

## Reference

- [Doxygen Download Page](https://www.doxygen.nl/download.html)
- [Doxygen Official Manual](https://www.doxygen.nl/manual/)

---