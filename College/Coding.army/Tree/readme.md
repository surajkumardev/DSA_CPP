📊 Comparison Table
Feature	AVL Tree	Red-Black Tree
Balance strictness	Very strict (balance factor ≤ 1)	Looser (black-height balance)
Height	Smaller (better for search)	Taller (up to 2× log(n))
Rotations (Insert/Delete)	More frequent (slower updates)	Fewer rotations (faster updates)
Search speed	Faster (better for lookup-heavy apps)	Slightly slower than AVL
Insert/Delete speed	Slower (many rotations possible)	Faster (fewer rotations)
Use cases	Databases, indexing (search heavy)