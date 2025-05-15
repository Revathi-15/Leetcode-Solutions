select a.machine_id, round(avg(a.timestamp-b.timestamp),3) AS processing_time 
from activity a
JOIN activity b on a.machine_id=b.machine_id and a.process_id=b.process_id and a.timestamp>b.timestamp
group by a.machine_id