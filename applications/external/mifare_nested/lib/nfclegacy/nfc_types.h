#pragma once

#include "nfc_device.h"

#ifdef __cplusplus
extern "C" {
#endif

const char* nfc_get_dev_type(FurryHalNfcType type);

const char* nfc_guess_protocol(NfcProtocol protocol);

const char* nfc_mf_classic_type(MfClassicType type);

#ifdef __cplusplus
}
#endif