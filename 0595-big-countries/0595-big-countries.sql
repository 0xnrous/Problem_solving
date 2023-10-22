# Write your MySQL query statement below
SELECT world.name ,world.population , world.area 
FROM world 
WHERE world.population >= 25000000 
OR world.area >= 3000000 ; 