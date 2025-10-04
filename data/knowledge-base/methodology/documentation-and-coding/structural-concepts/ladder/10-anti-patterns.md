## 🔄 Common Ladder Anti-Patterns

### Anti-Pattern 1: The Circular Wheel
```
Component A depends on Component B
Component B depends on Component C  
Component C depends on Component A
→ BROKEN: Wheel pattern, not ladder
```

**Fix**: Restructure so dependencies flow linearly A→B→C

---

### Anti-Pattern 2: The Sideways Jump
```
Documentation Track 1: Technical Details
Documentation Track 2: Conceptual Understanding

Section in Track 1 references Section in Track 2
Section in Track 2 references Section in Track 1
→ BROKEN: Crossing between parallel ladders
```

**Fix**: Keep each track independent, or establish which track is "lower" and only reference upward

---

### Anti-Pattern 3: The Same-Level Return
```
Introduction → Details → Deep Dive → Introduction (same depth)
→ BROKEN: Returning to same rung at same understanding level
```

**Fix**: If revisiting, must be at NEW depth (that's spiral concept, see [The Spiral Concept](the-spiral-concept.md))

---

