void display_assert(const char *reason, const char *filepath, int lineno,
                    bool halt)
{
  if (halt) {
    stack_walk(0);
  }
  if (!reason) {
    reason = "<no reason given>";
  }
  error(2, "EXCEPTION %s in %s,#%d: %s", halt ? "halt" : "warn", filepath,
        lineno, reason);
}
