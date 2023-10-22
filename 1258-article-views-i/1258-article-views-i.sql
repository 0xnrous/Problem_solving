# Write your MySQL query statement below
SELECT DISTINCT Views.author_id AS id FROM Views
WHERE Views.author_id = Views.viewer_id
ORDER BY Views.author_id ASC; 