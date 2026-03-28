## Object
It should hold information about:
- Position(x,y)
- Velocity(x,y)
- Mass
- Radius
- Accleration(optional)

## Working Engine
If I drop 3 circles, they fall down due to gravity and collide with each other without overlapping.

## Time
Each update step advances simulation by fixed time interval (e.g., 0.016s)

## Gravity
- Direction (downwards? which axis?)
- Constant value (e.g., -9.8 or something scaled)

<hr>

## Vector System Design
- It stores X and Y coorditnates.
- Operatrions:- 
  1. Addition
  2. Subraction
  3. Scalar Multiplication
  4. Magnitude
  5. Normalisation

- Uses
  1. Position update
  2. Velocity update
  3. Direction between two objects

- It is a struct
- It uses float