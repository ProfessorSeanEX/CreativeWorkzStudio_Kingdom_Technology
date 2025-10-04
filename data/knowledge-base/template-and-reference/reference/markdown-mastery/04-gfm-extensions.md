## GitHub Flavored Markdown Extensions

### Tables

**Basic Table:**
```markdown
| Header 1 | Header 2 | Header 3 |
| -------- | -------- | -------- |
| Cell 1   | Cell 2   | Cell 3   |
| Cell 4   | Cell 5   | Cell 6   |
```

**Aligned Tables:**
```markdown
| Left Aligned | Center Aligned | Right Aligned |
| :----------- | :------------: | ------------: |
| Left         |     Center     |         Right |
| Text         |      Text      |          Text |
```

**Table with Formatting:**
```markdown
| Feature    | Status | Notes                   |
| ---------- | ------ | ----------------------- |
| **Bold**   | ✅      | *Emphasis works too*    |
| `Code`     | ✅      | [Links](https://ex.com) |
| ~~Strike~~ | ✅      | Multiple elements work  |
```

**Guidelines:**
- Use `:---` for left align (default)
- Use `:---:` for center align
- Use `---:` for right align
- Outer pipes optional but recommended for clarity
- Cells don't need to align perfectly in source (but readability helps)

---

### Strikethrough

**Syntax:**
```markdown
~~Strikethrough text~~
~Single tilde may work~ (depends on processor configuration)
```

---

### Task Lists

**Syntax:**
```markdown
- [ ] Unchecked task
- [x] Completed task
- [ ] Another pending task
  - [ ] Nested subtask
  - [x] Completed subtask
```

**Usage:**
- Space required between brackets: `[ ]` not `[]`
- Case sensitive: lowercase `x` for checked
- Works in unordered lists only

---

### Autolinks

**Automatic URL Linking:**
```markdown
Visit www.example.com for more info.
Check https://github.com for repositories.
Contact us at support@example.com
```

**Protocols Supported:**
- `http://`, `https://`
- `www.` prefix (adds http://)
- Email addresses automatically linked

---

### Footnotes

**Syntax:**
```markdown
Here's a sentence with a footnote[^1].
Another reference[^note].

[^1]: This is the first footnote content.
[^note]: Named footnotes work too. Can span
    multiple lines if indented.
```

**Guidelines:**
- Reference can be number or name
- Definition can be anywhere in document
- Automatically numbered in output
- Multiple paragraphs in footnote: indent continuation

---

### Emoji

**Syntax:**
```markdown
:smile: :heart: :thumbsup: :rocket: :sparkles:
```

**Common Emoji Codes:**
- `:white_check_mark:` → ✅
- `:x:` → ❌
- `:warning:` → ⚠️
- `:bulb:` → 💡
- `:fire:` → 🔥
- `:star:` → ⭐

---

