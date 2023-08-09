/*
 * Copyright (C) 2022 CNPEM (cnpem.br)
 * Author: Érico Nogueira <erico.rolim@lnls.br>
 *
 * Released according to the GNU GPL, version 3 or any later version.
 */

#include "controllers.h"

RegisterController::RegisterController(struct pcie_bars &bars):
    RegisterDecoderBase(bars)
{
}

void RegisterController::set_devinfo(const struct sdb_device_info &new_devinfo)
{
    RegisterDecoderBase::set_devinfo(new_devinfo);

    set_devinfo_callback();
}
