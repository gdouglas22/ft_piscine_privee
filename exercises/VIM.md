# Vim Commands

## Files

- `vi filename.txt` - Open a file
- `:` - Enter Command Mode
- `u` - Undo changes
- `ctrl+u` - Redo Changes
- `:q` - Quit Vim
- `:q!` - Force quit vim without saving
- `:w`  - Save file
- `:wq` - Save file and quit


## Deleting lines
- `d4j` - Delete 4 lines from current position including current position
- `d4k` - Delete 4 lines before current position including current position
- `dd4` - Delete 4 lines


## Moving Through lines
- `0` - Start of the line
- `$` - End of the line
- `gg` - Top of document
- `G` - Bottom of document
- `4j` - Move to 4th line from current position
- `4k` - Move to 4the line before current position

## Copy and Paste
- `yy` - copy a line
- `p` - paste a line

## Search
- `:/hello` - Serach hello and hit enter

- `n` - move to Next match
- `N` - move to Previous match

- `:%s/hello/helloworld/g` - Search and replace hello with helloworld in all places
- `:%s/hello/helloworld/gc` -- Search and replace hello with helloworld in all places by confirming
