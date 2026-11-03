# Undoing Changes in Git

## 1. Introduction

Git provides several commands to undo mistakes and restore previous versions of files.

The appropriate command depends on the state of the changes:

- Unstaged changes.
- Staged changes.
- Committed changes.
- Changes already pushed to a remote repository.

Understanding these differences helps prevent accidental data loss.

## 2. Discarding Unstaged Changes

### git restore

The `git restore` command discards unstaged modifications in a tracked file.

```bash
git restore filename
```

This restores the file to its state in the index (staging area).

To discard unstaged changes in all tracked files:

```bash
git restore .
```

**Important:** This permanently discards the selected unstaged modifications.

## 3. Unstaging Changes

If a file has been added to the staging area but has not yet been committed, it can be unstaged using:

```bash
git restore --staged filename
```

This removes the file's changes from the staging area but keeps the modifications in the working directory.

Example:

```bash
git add README.md
git restore --staged README.md
```

The file remains modified, but it is no longer staged.

## 4. Using git reset

The `git reset` command moves the current branch pointer to another commit and can also modify the staging area or working directory.

### 4.1 Soft Reset

```bash
git reset --soft HEAD~1
```

- Moves the current branch pointer back by one commit.
- Keeps changes staged.
- Does not discard working-directory changes.

### 4.2 Mixed Reset

```bash
git reset HEAD~1
```

This is the default reset mode.

- Moves the branch pointer back by one commit.
- Resets the staging area.
- Keeps changes in the working directory.

Explicit form:

```bash
git reset --mixed HEAD~1
```

### 4.3 Hard Reset

```bash
git reset --hard HEAD~1
```

- Moves the branch pointer back by one commit.
- Resets the staging area.
- Resets tracked working-directory files.

**Warning:** This can permanently discard uncommitted changes and make commits harder to recover. Use it carefully.

## 5. Using git revert

The `git revert` command creates a new commit that reverses the changes introduced by an earlier commit.

```bash
git revert <commit-hash>
```

Unlike reset, revert does not remove the earlier commit from history.

It is generally preferred for undoing changes that have already been shared with others.

## 6. Using git checkout

The `git checkout` command is an older Git command that supports multiple operations.

For example, it can switch branches:

```bash
git checkout main
```

It can also restore a file from a previous commit:

```bash
git checkout <commit-hash> -- filename
```

Modern Git provides more specific commands such as `git switch` and `git restore`.

## 7. Comparing Reset, Revert, and Restore

| Command | Main Purpose |
|---|---|
| `git restore filename` | Discard unstaged file changes |
| `git restore --staged filename` | Unstage changes |
| `git reset --soft` | Undo commits while keeping changes staged |
| `git reset --mixed` | Undo commits while keeping changes unstaged |
| `git reset --hard` | Undo commits and discard tracked changes |
| `git revert` | Create a new commit that reverses an earlier commit |

## 8. Undoing the Most Recent Commit

If the latest commit needs to be undone but its changes should remain staged:

```bash
git reset --soft HEAD~1
```

If the changes should remain unstaged:

```bash
git reset HEAD~1
```

If the commit has already been pushed and should be safely reversed:

```bash
git revert HEAD
git push
```

## 9. Recovering Previous Commits with git reflog

The `git reflog` command records updates to HEAD and branch references in the local repository.

```bash
git reflog
```

It can help locate commits after operations such as reset or branch switching.

A commit can sometimes be recovered using its hash:

```bash
git reset --hard <commit-hash>
```

**Warning:** A hard reset changes the current branch and working directory. Check your current state and preserve important work before using it.

## 10. Important Precautions

- Check `git status` before undoing changes.
- Avoid `git reset --hard` unless you understand what will be discarded.
- Prefer `git revert` for reversing commits that have already been shared.
- Use `git reflog` when trying to locate previous repository states.
- Make backups before performing destructive operations.

## 11. Conclusion

Git provides several mechanisms for undoing changes at different stages of development.

Understanding `git restore`, `git reset`, `git revert`, and `git reflog` helps developers recover from mistakes while maintaining control over repository history.