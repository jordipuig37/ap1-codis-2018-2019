# Operadors lògics

Hi ha tres operadors lògics:

- `not` (negació)
- `or` (disjunció)
- `and` (conjunció)

## Taules de veritat


Negació:

| `c` | `not c`
| ---- | ---- |
| fals | cert |
| cert | fals |

Disjunció:

| `c1` | `c2` | `c1 or c2` |
| ---- | ---- | ---- |
| fals | fals | fals |
| fals | cert | cert |
| cert | fals | cert |
| cert | cert | cert |

Conjunció:

| `c1` | `c2` | `c1 and c2` |
| ---- | ---- | ---- |
| fals | fals | fals |
| fals | cert | fals |
| cert | fals | fals |
| cert | cert | cert |


## Lleis de De Morgan

- `not (c1 or c2)` ≡ `(not c1) and (not c2)`
- `not (c1 and c2)` ≡ `(not c1) or (not c2)`
