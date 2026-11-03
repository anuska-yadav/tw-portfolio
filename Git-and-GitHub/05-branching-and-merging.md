# Branching and Merging in Git

## 1. Introduction

Branching is one of the most powerful features of Git. It allows developers to work on different features or modifications independently without affecting the main codebase.

Merging combines changes from different branches into a single branch.

## 2. What is a Branch?

A branch represents an independent line of development in a Git repository.

The default branch is commonly named `main`.

Developers create additional branches to work on new features, bug fixes, and experiments.

### Advantages of Branching

- Supports parallel development.
- Keeps the main branch stable.
- Makes experimentation easier.
- Simplifies collaboration.
- Allows isolated development of features.

## 3. Creating Branches

### 3.1 List Branches

```bash
git branch
```

Displays all local branches. The current branch is marked with an asterisk (`*`).

### 3.2 Create a New Branch

```bash
git branch feature
```

Creates a branch named `feature` without switching to it.

### 3.3 Switch Between Branches

```bash
git switch feature
```

Switches to the specified branch.

The older command is:

```bash
git checkout feature
```

### 3.4 Create and Switch to a Branch

```bash
git switch -c feature
```

This creates a new branch and immediately switches to it.

The older equivalent is:

```bash
git checkout -b feature
```

## 4. Understanding HEAD

HEAD is a reference that indicates the currently checked-out commit.

Normally, HEAD points to the current branch, and the branch points to its latest commit.

For example:

```text
main ---> Commit C
             ^
             |
            HEAD
```

When switching branches, HEAD moves to the selected branch.

## 5. Detached HEAD State

A detached HEAD state occurs when HEAD points directly to a commit instead of a branch.

Example:

```bash
git checkout <commit-hash>
```

In this state, you can inspect files and experiment with changes.

However, commits created in detached HEAD state are not automatically associated with a branch.

To preserve such work, create a branch:

```bash
git switch -c new-branch
```

## 6. Merging Branches

Merging combines changes from one branch into another.

### Example Workflow

First, create a branch:

```bash
git switch -c feature
```

Make changes and commit them:

```bash
git add .
git commit -m "Add new feature"
```

Switch back to the main branch:

```bash
git switch main
```

Merge the feature branch:

```bash
git merge feature
```

The changes from `feature` are now integrated into `main`.

### Types of Merge

#### 6.1 Fast-Forward Merge

A fast-forward merge occurs when the target branch has not moved forward since the feature branch was created.

Git simply moves the target branch pointer forward.

#### 6.2 Three-Way Merge

A three-way merge occurs when both branches have new commits.

Git uses three points:

- Common ancestor.
- Latest commit of the current branch.
- Latest commit of the branch being merged.

Git combines their changes and usually creates a merge commit.

## 7. Merge Conflicts

A merge conflict occurs when Git cannot automatically combine changes from different branches.

For example, two branches may modify the same part of the same file differently.

Git marks the conflicting section:

```text
<<<<<<< HEAD
This is the content in the current branch.
=======
This is the content in the incoming branch.
>>>>>>> feature
```

### Resolving Merge Conflicts

1. Open the file containing the conflict.
2. Examine both versions.
3. Decide which changes to keep.
4. Edit the file and remove conflict markers.
5. Stage the resolved file.
6. Complete the merge commit if required.

Commands:

```bash
git add filename
git commit
```

For a merge in progress, Git may automatically prepare the merge commit message.

### Aborting a Merge

To cancel an ongoing merge:

```bash
git merge --abort
```

This attempts to restore the state before the merge began.

## 8. Deleting Branches

Delete a branch that has been merged:

```bash
git branch -d feature
```

Force-delete a branch:

```bash
git branch -D feature
```

The `-D` option can delete a branch even if it contains unmerged changes.

## 9. Renaming a Branch

Rename the current branch:

```bash
git branch -m new-name
```

Rename a different branch:

```bash
git branch -m old-name new-name
```

## 10. Branching and Merging Workflow

```text
             main
               |
             Commit A
               |
             Commit B
               |
          Create feature
               |
         +-----+------+
         |            |
      main         feature
         |            |
         |         Commit C
         |            |
         |         Commit D
         |            |
         +-----Merge--+
               |
           Commit E
```

## 11. Useful Branch Commands

| Command | Purpose |
|---|---|
| `git branch` | List local branches |
| `git branch feature` | Create a branch |
| `git switch feature` | Switch branches |
| `git switch -c feature` | Create and switch |
| `git merge feature` | Merge a branch |
| `git branch -d feature` | Delete a merged branch |
| `git branch -D feature` | Force-delete a branch |
| `git branch -m new-name` | Rename current branch |
| `git merge --abort` | Abort an ongoing merge |

## 12. Conclusion

Branching and merging allow developers to work independently while maintaining a stable main branch.

Understanding branch management, HEAD, detached HEAD, merge types, and conflict resolution is essential for effective Git usage.