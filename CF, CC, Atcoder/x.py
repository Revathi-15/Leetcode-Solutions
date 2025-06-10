import sqlite3

def fetch_win_loss_ratios(players_data, games_data):
    # Create an in-memory SQLite database
    conn = sqlite3.connect(":memory:")
    cursor = conn.cursor()

    # Create tables
    cursor.execute("""
        CREATE TABLE players (
            id INTEGER PRIMARY KEY,
            pname TEXT
        )
    """)
    cursor.execute("""
        CREATE TABLE games (
            id INTEGER,
            result TEXT
        )
    """)

    # Insert data into tables
    cursor.executemany("INSERT INTO players (id, pname) VALUES (?, ?)", players_data)
    cursor.executemany("INSERT INTO games (id, result) VALUES (?, ?)", games_data)

    # Query to calculate win/loss ratios
    query = """
        SELECT 
            p.pname,
            ROUND(CAST(SUM(CASE WHEN g.result = 'won' THEN 1 ELSE 0 END) AS FLOAT) /
                  NULLIF(SUM(CASE WHEN g.result = 'lost' THEN 1 ELSE 0 END), 0), 2) AS ratio
        FROM players p
        LEFT JOIN games g ON p.id = g.id
        GROUP BY p.id, p.pname
        ORDER BY ratio DESC, p.pname
    """

    # Execute query and fetch results
    cursor.execute(query)
    results = cursor.fetchall()

    # Close the connection
    conn.close()

    return results

# Input data
players_data = [
    (476, "Maye Garfinkel"), (401, "Odell Menter"), (139, "Luanne Olds"),
    (917, "Aurora Leedom"), (291, "Meri Donat"), (217, "Billi Oatman"),
    (257, "Quintin Mayr"), (164, "Malka Pair"), (970, "Chelsea Drinnon"),
    (302, "Annita Tessier")
]

games_data = [
    (917, "lost"), (257, "lost"), (917, "won"), (917, "won"),
    (257, "won"), (291, "won"), (970, "lost"), (302, "won"),
    (476, "won"), (217, "lost"), (476, "lost"), (291, "lost"),
    (291, "won"), (139, "won"), (139, "lost"), (217, "won"),
    (217, "won"), (291, "won"), (917, "lost"), (257, "won"),
    (291, "won"), (291, "won")
]

# Fetch and print the results
results = fetch_win_loss_ratios(players_data, games_data)
for row in results:
    print(f"{row[0]} {row[1]:.2f}")