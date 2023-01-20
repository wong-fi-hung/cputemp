#include "cputemp.h"

#define TEMP "/sys/class/thermal/thermal_zone0/temp"

static float currtemp(int core)
{
        float tc = 0.0;
	uint32_t val = 0;
        FILE *fd = fopen(TEMP, "r");
	if (!fd)
		fd = fopen(TEMP, "r");
	if (!fd)
		return tc;
	if (fscanf(fd, "%d", &val))
		tc = val / 1000.0;
	fclose(fd);
	return tc;
}

float cpu_temp(int core)
{
	return currtemp(core);
}

static char const span[] = "\
"PROG": "PROG_VER" by " OWNER"\n\
          created on "DATE"\n\
\n\
          "BGREEN" " " "N" Normal        [0-38]\n\
          "BYELLOW" " " "N" High          [38-50]\n\
          "BRED" " " "N" Critical      [50+]\n\
\n\
";

int main()
{
	float temp = cpu_temp(0);
	float tc = 0.0;

		if (temp < 38) {
			printf(span);
			printf("Current Temperature:" LGREEN " %.2f°C\n" N, temp);
		} else if (temp < 50) {
			printf(span);
			printf("Current Temperature:" LYELLOW " %.2f°C\n" N, temp);
		} else {
			if (temp < 100) {
				printf(span);
				printf("Current Temperature:" LRED " %.2f°C\n" N, temp);
			}
		}
	exit(0);
}
