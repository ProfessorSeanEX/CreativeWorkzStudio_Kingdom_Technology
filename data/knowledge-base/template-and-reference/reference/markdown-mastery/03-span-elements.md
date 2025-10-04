## Span Elements

### Links

**Inline Links:**
```markdown
[Link text](https://example.com)
[Link with title](https://example.com "Hover title text")
[Relative link](../path/to/file.md)
[Anchor link](#section-heading)
```

**Reference-Style Links:**
```markdown
[Link text][reference-id]
[Another link][ref2]

[reference-id]: https://example.com
[ref2]: https://example.com "Optional title"
```

**Implicit Reference Links:**
```markdown
[Google][]
[Stack Overflow][]

[google]: https://google.com
[stack overflow]: https://stackoverflow.com
```

**Automatic Links:**
```markdown
<https://example.com>
<email@example.com>
```

---

### Emphasis

**Italic:**
```markdown
*asterisks*
_underscores_
```

**Bold:**
```markdown
**double asterisks**
__double underscores__
```

**Bold + Italic:**
```markdown
***triple asterisks***
___triple underscores___
**_combined different_**
*__also combined__*
```

**Usage Guidelines:**
- Use `*` for consistency (more common)
- Can't have spaces between markers and text
- For mid-word emphasis, asterisks work better than underscores

---

### Inline Code

**Syntax:**
```markdown
Use `code` for inline code spans.
Use ``code with `backticks` inside`` for literal backticks.
```

**Examples:**
```markdown
The `printf()` function outputs text.
Use ``git commit -m "message"`` for commits.
File located at `/usr/local/bin/script.sh`
```

---

### Images

**Inline Images:**
```markdown
![Alt text](image.png)
![Alt text](image.png "Optional title")
![Alt text](https://example.com/image.png)
```

**Reference-Style Images:**
```markdown
![Alt text][image-ref]

[image-ref]: image.png "Optional title"
```

**Images with Links:**
```markdown
[![Alt text](image.png)](https://example.com)
```

---

