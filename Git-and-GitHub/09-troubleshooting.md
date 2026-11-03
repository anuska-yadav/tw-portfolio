# Git Troubleshooting

## 1. Introduction

While working with Git, developers may encounter errors related to repository configuration, commits, branches, authentication, and remote repositories.

Understanding common errors and their solutions helps maintain an efficient development workflow.

## 2. Git is Not Recognized

### Error

```text
git: command not found
```

### Cause

Git may not be installed or its executable may not be available through the system PATH.

### Solution

Verify installation:

```bash
git --version
```

Install Git if necessary.

For macOS with Homebrew:

```bash
brew install git
```

For Ubuntu:

```bash
sudo apt install git
```

## 3. Author Identity Unknown

### Error

```text
Author identity unknown
```

### Cause

Git username or email has not been configured.

### Solution

Configure your identity:

```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
```

Verify:

```bash
git config --list
```

## 4. Not a Git Repository

### Error

```text
fatal: not a git repository
```

### Cause

The current directory is not inside a Git repository.

### Solution

Navigate to the correct project directory:

```bash
cd project-folder
```

If it is a new project, initialize Git:

```bash
git init
```

## 5. Nothing to Commit

### Message

```text
nothing to commit, working tree clean
```

### Cause

There are no new changes to commit.

### Solution

Check the repository status:

```bash
git status
```

Modify or create a file if new changes need to be committed.

## 6. Push Rejected (Fetch First)

### Error

```text
! [rejected] main -> main (fetch first)
```

### Cause

The remote repository contains commits that are not present in the local repository.

### Solution

Fetch and integrate the remote changes:

```bash
git pull --rebase origin main
```

Then push:

```bash
git push origin main
```

Resolve any conflicts before continuing.

## 7. Authentication Failed

### Error

```text
Authentication failed
```

### Cause

The credentials used to access the remote repository may be incorrect, expired, or unavailable.

### Solution

- Verify the repository URL.
- Check your GitHub account access.
- Use an appropriate authentication method.
- For HTTPS, authenticate using GitHub-supported credentials or a Personal Access Token when required.
- Alternatively, configure SSH authentication.

Never share your access tokens or private SSH keys.

## 8. Merge Conflicts

### Error

```text
CONFLICT (content): Merge conflict in filename
```

### Cause

Git cannot automatically combine conflicting changes.

### Solution

1. Open the conflicting file.
2. Examine both versions.
3. Resolve the conflict manually.
4. Remove conflict markers.
5. Stage the resolved file.
6. Complete the merge.

```bash
git add filename
git commit
```

## 9. Detached HEAD State

### Situation

```text
HEAD detached at <commit-hash>
```

### Cause

HEAD points directly to a commit instead of a branch.

### Solution

If you want to preserve work and continue developing:

```bash
git switch -c new-branch
```

If you only wanted to inspect an earlier commit:

```bash
git switch main
```

## 10. Failed to Push Because No Upstream Branch Exists

### Error

```text
fatal: The current branch has no upstream branch
```

### Cause

The local branch is not configured to track a remote branch.

### Solution

Set the upstream branch:

```bash
git push -u origin main
```

After this, future pushes can generally use:

```bash
git push
```

## 11. Accidentally Added a File to Staging

### Situation

A file was added using `git add`, but it should not be included in the next commit.

### Solution

Unstage the file without deleting its modifications:

```bash
git restore --staged filename
```

## 12. Accidentally Committed Changes

### Situation

A commit was created but needs to be undone.

### Solution

To undo the latest commit while keeping changes staged:

```bash
git reset --soft HEAD~1
```

If the commit has already been shared, consider using:

```bash
git revert HEAD
```

This creates a new commit that reverses the earlier commit.

## 13. Useful Diagnostic Commands

| Command | Purpose |
|---|---|
| `git status` | Check repository state |
| `git log --oneline` | Inspect commit history |
| `git remote -v` | Check remote URLs |
| `git branch -a` | List local and remote-tracking branches |
| `git config --list` | Inspect Git configuration |
| `git reflog` | Inspect recent reference movements |
| `git diff` | Inspect unstaged changes |

## 14. General Troubleshooting Practices

- Read the complete error message carefully.
- Check the current repository and branch.
- Inspect the working directory using `git status`.
- Verify remote URLs and authentication.
- Avoid destructive commands unless necessary.
- Keep backups of important uncommitted work.
- Consult official Git documentation when needed.

## 15. Conclusion

Troubleshooting is an important part of working with Git.

Understanding common errors and their solutions helps developers recover from mistakes, maintain repository integrity, and work more confidently with version control.