# Inspecting Changes in Git

## 1. Introduction

Git provides several commands to inspect the current state of a repository, compare file versions, and examine commit history.

These commands help developers understand what has changed before saving or sharing their work.

## 2. git status

The `git status` command displays the current state of the working directory and staging area.

```bash
git status
```

It identifies:

- Untracked files.
- Modified files.
- Staged changes.
- Files with no pending changes.

### Common File States

| State | Meaning |
|---|---|
| Untracked | File is not being tracked by Git |
| Modified | Tracked file has been changed |
| Staged | Changes are ready for commit |
| Committed | Changes have been recorded in repository history |

## 3. git diff

The `git diff` command compares changes between different versions of files.

### 3.1 Unstaged Changes

Displays modifications in the working directory that have not been staged.

```bash
git diff
```

### 3.2 Staged Changes

Displays modifications that have been added to the staging area.

```bash
git diff --staged
```

It is also possible to use:

```bash
git diff --cached
```

Both commands show staged changes.

### 3.3 Comparing Two Commits

To compare changes between two commits:

```bash
git diff commit1 commit2
```

Example:

```bash
git diff abc123 def456
```

### 3.4 Comparing Branches

To compare two branches:

```bash
git diff main feature
```

This displays the differences between the two branch tips.

## 4. Understanding Diff Output

Consider the following example:

```diff
 This is my Git practice project.
+I am learning Git and GitHub.
-This line will be removed.
```

Meaning:

- Lines beginning with `+` represent added content.
- Lines beginning with `-` represent removed content.
- Lines without these symbols are unchanged context.

Git diff helps identify exactly which lines have been modified.

## 5. git log

The `git log` command displays the commit history.

```bash
git log
```

It provides information such as:

- Commit hash.
- Author.
- Date.
- Commit message.

### 5.1 Compact History

```bash
git log --oneline
```

Displays each commit in a single line.

### 5.2 Graphical History

```bash
git log --oneline --graph --all
```

Displays branches and commits in a graphical representation.

### 5.3 Detailed Commit History

```bash
git log --stat
```

Displays the files changed and the number of insertions and deletions in each commit.

## 6. git show

The `git show` command displays details of a particular commit.

```bash
git show
```

To inspect a specific commit:

```bash
git show <commit-hash>
```

It displays commit information along with the changes introduced by that commit.

## 7. git blame

The `git blame` command shows who last modified each line of a file and in which commit.

```bash
git blame filename
```

It is useful for understanding the history of individual lines in a file.

## 8. git diff vs git show vs git log

| Command | Purpose |
|---|---|
| `git diff` | Compares changes between versions |
| `git show` | Displays details of a commit |
| `git log` | Displays commit history |
| `git blame` | Identifies the last commit that modified each line |
| `git status` | Displays the current repository state |

## 9. Recommended Inspection Workflow

Before committing changes, use:

```bash
git status
git diff
git add .
git diff --staged
git commit -m "Update project files"
```

This workflow helps verify both unstaged and staged changes before creating a commit.

## 10. Conclusion

Inspection commands are essential for understanding repository changes and maintaining a clear development history.

Commands such as `git status`, `git diff`, `git log`, and `git show` help developers track modifications and make informed decisions before committing changes.