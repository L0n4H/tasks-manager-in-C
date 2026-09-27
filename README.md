# tasks-manager-in-C

## Le projet

Ceci est un projet étudiant (non universitaire) de deux camarades développeurs qui souhaitent développer leurs compétences en C (mais aussi d'autres compétences annexes expliquées plus loin). Le principe est simple : faire un task manager (une sorte de todo list) en C, sans affichage graphique.

## Developer Guidelines: Git & Workflow

To maintain a clean and trackable commit history, this project follows specific naming conventions for branches and commit messages.

### 1. Branch Naming Convention

Branches must be named using the following format: `type/short-description` (lowercase, words separated by hyphens).

* `feat/` : New features (e.g., `feat/add-collection-modal`)
* `fix/` : Bug fixes (e.g., `fix/emit-payload-error`)
* `chore/` : Maintenance, dependencies, or configuration (e.g., `chore/sync-main`)
* `refactor/` : Code improvements without functional changes (e.g., `refactor/clean-composables`)
* `docs/` : Edits to the documentation files (mainly README)

### 2. Commit Message Convention (Conventional Commits)

Every commit message must specify its intent using a prefix. This helps the team quickly identify infrastructure chores from functional changes.

* `feat: ...` -> Adding a new feature or component.
* `fix: ...` -> Fixing an issue or a broken state.
* `chore: ...` -> Catch-all for routine tasks, tooling, or repository maintenance (e.g., merging `main` to avoid conflicts, updating packages).
* `refactor: ...` -> Rewriting code for optimization or readability.
* `docs: ...` -> Updates to documentation or the README.

> 💡 **Quick Reminder:** If you need to sync your current branch with `main` to prevent upcoming conflicts, use a clear maintenance prefix: `chore: sync with main branch`.

---