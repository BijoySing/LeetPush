class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        asteroids.sort()
        total = mass
        for i in asteroids:
            if total < i:
                return False
            total = total + i
            
        return True
        