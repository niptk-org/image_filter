/** @file percentile_interpolation.h
 */



imageID FILTER_percentile_interpol_fast(
    const char *ID_name,
    const char *IDout_name,
    double      perc,
    long        boxrad
);


imageID FILTER_percentile_interpol(
    const char *__restrict__ ID_name,
    const char *__restrict__ IDout_name,
    double perc,
    double sigma
);
