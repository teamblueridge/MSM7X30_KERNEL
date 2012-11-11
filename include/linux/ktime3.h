
static inline ktime_to_ms(const int ktime_t, const int kt);

static inline s64 ktime_to_ms(const ktime_t, const int kt)
{
	struct timeval tv = ktime_to_timeval(kt);
	return (s64) tv.tv_sec * MSEC_PER_SEC + tv.tv_usec / USEC_PER_MSEC;
}
