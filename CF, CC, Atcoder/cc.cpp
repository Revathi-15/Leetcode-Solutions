WITH EmployeeShifts AS (
    SELECT
        s.employeeId,
        e.employeeName,
        d.departmentName,
        s.shiftDate,
        s.hoursWorked,
        DATE_FORMAT(s.shiftDate, '%Y-%m') AS shiftMonth
    FROM
        Shifts s
    JOIN
        Employees e ON s.employeeId = e.employeeId
    LEFT JOIN
        Departments d ON e.departmentId = d.departmentId
    WHERE
        DATE_FORMAT(s.shiftDate, '%Y-%m') = '2024-05'
),
MonthlyHours AS (
    SELECT
        employeeId,
        employeeName,
        departmentName,
        shiftMonth,
        SUM(hoursWorked) AS totalHoursWorked,
        MAX(shiftDate) AS lastShiftDate
    FROM
        EmployeeShifts
    GROUP BY
        employeeId,
        employeeName,
        departmentName,
        shiftMonth
)
SELECT
    LPAD(mh.employeeId, 5, ' ') AS employeeId,
    LPAD(mh.employeeName, 15, ' ') AS employeeName,
    LPAD(COALESCE(mh.departmentName, 'Unknown'), 15, ' ') AS departmentName,
    DATE_FORMAT(mh.lastShiftDate, '%Y-%m-%d') AS lastShiftDate,
    LPAD(FORMAT(mh.totalHoursWorked, 2), 10, ' ') AS totalHoursWorked
FROM
    MonthlyHours mh
ORDER BY
    (SELECT d.departmentName FROM Employees emp LEFT JOIN Departments d ON emp.departmentId = d.departmentId WHERE emp.employeeId = mh.employeeId) IS NULL,
    (SELECT d.departmentName FROM Employees emp LEFT JOIN Departments d ON emp.departmentId = d.departmentId WHERE emp.employeeId = mh.employeeId),
    mh.lastShiftDate,
    mh.employeeId;