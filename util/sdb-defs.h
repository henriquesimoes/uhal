/*
 * Copyright (C) 2023 CNPEM (cnpem.br)
 * Author: Érico Nogueira <erico.rolim@lnls.br>
 *
 * Released according to the GNU GPL, version 3 or any later version.
 */

#ifndef SDB_DEFS_H
#define SDB_DEFS_H

#ifdef __cplusplus
# include <cstdint>
# include <functional>
#else
# include <stdint.h>
#endif

struct sdb_device_info {
    uint64_t start_addr;
    uint64_t vendor_id;
    uint32_t device_id;
    uint8_t abi_ver_major;
    uint8_t abi_ver_minor;
};

#ifdef __cplusplus
typedef std::function<bool(const struct sdb_device_info &)> device_match_fn;
#endif

#endif
