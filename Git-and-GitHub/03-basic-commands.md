# Basic Git Commands

## 1. Introduction

Git provides several commands to manage repositories, track changes, and maintain project history.

This chapter covers the essential commands used in everyday Git workflows.

## 2. Creating a Repository

### 2.1 git init

Initializes a new Git repository in the current directory.

```bash
git init
```

It creates a hidden `.git` directory containing repository metadata.

### 2.2 git clone

Creates a local copy of an existing remote repository.

```bash
git clone <repository-url>
```

Example:

```bash
git clone https://github.com/user/project.git
```

## 3. Checking Repository Status

### git status

Displays the current state of the working directory and staging area.

```bash
git status
```

It helps identify:
- Modified files.
- Untracked files.
- Staged changes.
- Changes not yet committed.

## 4. Adding Changes

### 4.1 git add

Moves changes from the working directory to the staging area.

Add a specific file:

```bash
git add filename
```

Add all changes in the current directory:

```bash
git add .
```

Add all tracked-file modifications and deletions, along with untracked files:

```bash
git add -A
```

## 5. Committing Changes

### git commit

Records staged changes in the repository history.

```bash
git commit -m "Commit message"
```

Example:

```bash
git commit -m "Add introduction to Git"
```

A good commit message should briefly describe the changes made.

## 6. Viewing Commit History

### 6.1 git log

Displays the commit history.

```bash
git log
```

### 6.2 git log --oneline

Displays commits in a compact format.

```bash
git log --oneline
```

### 6.3 git log --graph

Displays commit history as a graph.

```bash
git log --oneline --graph --all
```

## 7. Comparing Changes

### 7.1 git diff

Displays unstaged changes.

```bash
git diff
```

### 7.2 git diff --staged

Displays changes that have been staged but not committed.

```bash
git diff --staged
```

### 7.3 git show

Displays information about a particular commit, including its changes.

```bash
git show
```

To inspect a specific commit:

```bash
git show <commit-hash>
```

## 8. Branch Commands

### 8.1 git branch

Lists local branches.

```bash
git branch
```

### 8.2 git branch branch-name

Creates a new branch.

```bash
git branch feature
```

### 8.3 git switch

Switches to another branch.

```bash
git switch feature
```

Create and switch to a new branch:

```bash
git switch -c feature
```

## 9. Remote Repository Commands

### 9.1 git remote -v

Displays configured remote repositories.

```bash
git remote -v
```

### 9.2 git remote add

Adds a remote repository.

```bash
git remote add origin <repository-url>
```

### 9.3 git push

Uploads local commits to a remote repository.

```bash
git push
```

For the first push of a new branch:

```bash
git push -u origin main
```

### 9.4 git pull

Fetches remote changes and integrates them into the current branch.

```bash
git pull
```

### 9.5 git fetch

Downloads remote updates without integrating them into the current branch.

```bash
git fetch
```

## 10. Removing Files

### 10.1 git rm

Removes a file from the working directory and stages its deletion.

```bash
git rm filename
```

### 10.2 git rm --cached

Removes a file from Git tracking but keeps it in the working directory.

```bash
git rm --cached filename
```

## 11. Basic Git Workflow

A typical Git workflow follows these steps:

```bash
git init
git status
git add .
git commit -m "Initial commit"
git log --oneline
```

For uploading changes:

```bash
git push
```

## 12. Summary

Git commands help initialize repositories, stage changes, create commits, inspect history, manage branches, and synchronize work with remote repositories.

Regular practice of these commands builds a strong foundation for using Git effectively.