
#ifndef TERGEN_UTILS_H
#define TERGEN_UTILS_H


#include <cstdint>
#include <cstdlib>
#include <string>

class Utils {
public:

    constexpr static const double EPSILON = 1e-8;

    struct config {
        double tolerance;
        size_t requested_size;
        std::string output_filename;
        std::string input_filename;
        bool read_from_ASC;
        double west_border;
        double north_border;
        double east_border;
        double south_border;
        std::string map_dir;
        bool use_inp;
        bool post_utm;
        bool use_height;
        bool pre_utm;
        bool use_smesh;
        bool use_floater;
        int procs_x;
        int procs_y;
        int procs_z;
        uint16_t point_per_proc_x;
        uint16_t point_per_proc_y;
        uint16_t point_per_proc_z;
        double height;
        bool yin_yang;
    };

    static void verify_configs(struct config *config);

    static bool is_lesser(double a, double b);

    static bool is_greater(double a, double b);

    static bool equals(const double a, const double b);

    static double floor2(double a);

    static double ceil2(double a);

    static void change_bytes_order(uint16_t *var_ptr);

    static void swap_if_required(double *should_be_lower, double *should_be_bigger);

    static size_t gcd(size_t a, size_t b);

    static double d2r(double degrees);

    static double r2d(double radians);

    static void shift(int from, int to, size_t *array);

    static std::pair<double, double> yy_transform(std::pair<double, double> pair);

    static int positive_mod(int number, int mod);

    static bool does_file_exists(char *path);
};


#endif //TERGEN_UTILS_H
