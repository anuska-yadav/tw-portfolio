# Installation and Configuration of Git

## 1. Introduction

Before using Git, it must be installed and configured on the computer.

Installation makes Git commands available through the terminal, while configuration sets the identity associated with commits.

## 2. Installing Git

Git can be installed on different operating systems.

### 2.1 macOS

Git can be installed using Homebrew:

```bash
brew install git
```

To verify installation:

```bash
git --version
```

macOS may also provide Git through Xcode Command Line Tools.

### 2.2 Windows

1. Visit https://git-scm.com/
2. Download Git for Windows.
3. Run the installer.
4. Follow the installation instructions.
5. Open Git Bash or Command Prompt.

Verify installation:

```bash
git --version
```

### 2.3 Linux (Ubuntu/Debian)

Update package information:

```bash
sudo apt update
```

Install Git:

```bash
sudo apt install git
```

Verify installation:

```bash
git --version
```

## 3. Configuring Git

After installation, configure your name and email address.

### 3.1 Global Configuration

Global configuration applies to all repositories for the current user.

Set username:

```bash
git config --global user.name "Your Name"
```

Set email:

```bash
git config --global user.email "your-email@example.com"
```

### 3.2 Local Configuration

Local configuration applies only to the current repository.

```bash
git config --local user.name "Your Name"
git config --local user.email "your-email@example.com"
```

Local configuration overrides global configuration for that repository.

### 3.3 System Configuration

System configuration applies to all users on the computer.

```bash
git config --system user.name "Your Name"
git config --system user.email "your-email@example.com"
```

This generally requires administrator privileges.

## 4. Checking Git Configuration

To view all configuration settings:

```bash
git config --list
```

To check a specific setting:

```bash
git config user.name
git config user.email
```

To see where a configuration value comes from:

```bash
git config --show-origin --get user.name
```

## 5. Configuration Levels

| Level | Scope | Option |
|---|---|---|
| System | All users on the computer | `--system` |
| Global | Current user | `--global` |
| Local | Current repository | `--local` |

Priority order:

**Local > Global > System**

## 6. Default Branch Configuration

To set the default initial branch name as `main`:

```bash
git config --global init.defaultBranch main
```

This affects newly initialized repositories.

## 7. Initializing a Repository

Move into the project directory:

```bash
cd project-folder
```

Initialize Git:

```bash
git init
```

This creates a hidden `.git` directory that stores repository information and history.

To check repository status:

```bash
git status
```

## 8. Summary

Git installation makes version control available on the system. Configuration establishes the identity used in commits and can be managed at system, global, or local levels.

After configuration, a user can initialize a repository and begin tracking project changes.