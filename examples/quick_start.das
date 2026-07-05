options gen2
require duckdb/duckdb_boost
require daslib/sql_linq

// Quick start: [sql_table] + typed CRUD + a compile-time-checked _sql chain.
// Run: daslang -load_module <path-to-dasDuckDB> examples/quick_start.das

[sql_table(name = "Users")]
struct User {
    @sql_primary_key Id : int64
    Name : string
    Age : int
}

[export]
def main {
    print("DuckDB {duckdb_version()}\n")
    with_duckdb(":memory:") $(db) {
        db |> create_table(type<User>)
        db |> insert([
            User(Id = int64(0), Name = "Ada", Age = 36),
            User(Id = int64(0), Name = "Bob", Age = 41),
            User(Id = int64(0), Name = "Cid", Age = 17)])

        let adults = _sql(db |> select_from(type<User>) |> _where(_.Age >= 18) |> _order_by(_.Name))
        for (u in adults) {
            print("#{u.Id} {u.Name} ({u.Age})\n")
        }

        let n = _sql(db |> select_from(type<User>) |> count())
        print("{n} users total; the adults query was:\n  {_sql_text(db |> select_from(type<User>) |> _where(_.Age >= 18) |> _order_by(_.Name))}\n")
    }
}
