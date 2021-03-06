//
// Created by fear on 2016/4/24.
//
#include <stdio.h>
#include "base.h"
#include "trace_file.h"

string base::result2string(const result &r) {
    string mapping_type;
    string write_policy;
    switch (r.mapping_type) {
        case MT_DM:
            mapping_type += "DM";
            break;
        case MT_2W:
            mapping_type += "2W";
            break;
        case MT_4W:
            mapping_type += "4W";
            break;
        case MT_FA:
            mapping_type += "FA";
            break;
        default:
            break;
    }
    switch (r.write_policy) {
        case WP_WB:
            write_policy += "WB";
            break;
        case WP_WT :
            write_policy += "WT";
            break;
        default:
            break;
    }
    char temp[100];
    sprintf(temp, "%d\t%d\t%s\t%s\t%.2f\t%d\t%d\t%d\n", r.cache_size, r.block_size, mapping_type.c_str(),
            write_policy.c_str(), r.hit_rate, r.mem2cache,
            r.cache2mem, r.cmp_count);
    return string(temp);
}



