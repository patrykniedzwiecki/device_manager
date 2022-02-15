/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_DEVICE_MANAGER_ERRNO_H
#define OHOS_DEVICE_MANAGER_ERRNO_H

namespace OHOS {
namespace DistributedHardware {
enum {
    DEVICEMANAGER_FAILED = (-10000),
    DEVICEMANAGER_SERVICE_NOT_READY,
    DEVICEMANAGER_DEVICE_ALREADY_TRUSTED,
    DEVICEMANAGER_GET_TRUSTED_DEVICE_FAILED,
    DEVICEMANAGER_ALREADY_INIT,
    DEVICEMANAGER_INIT_FAILED,
    DEVICEMANAGER_MALLOC_ERROR,
    DEVICEMANAGER_LOCK_ERROR,
    DEVICEMANAGER_INVALID_PARAM,
    DEVICEMANAGER_INVALID_VALUE,
    DEVICEMANAGER_COPY_FAILED,
    DEVICEMANAGER_NULLPTR,
    DEVICEMANAGER_DISCOVERY_FAILED,
    DEVICEMANAGER_FLATTEN_OBJECT,
    DEVICEMANAGER_WRITE_FAILED,
    DEVICEMANAGER_IPC_FAILED,
    DEVICEMANAGER_IPC_TRANSACTION_FAILED,
    DEVICEMANAGER_IPC_NOT_REGISTER_FUNC,
    HICHAIN_GROUP_CREATE_FAILED,
    HICHAIN_MEMBER_ADD_FAILED,
    HICHAIN_CREATE_CHANNEL_FAILED,
    MSG_DECODE_PARA_FAILED,
    ENCRYPT_UTILS_INVALID_PARAM,
    ENCRYPT_UTILS_GCM_SETKEY_FAILED,
    ENCRYPT_UTILS_GCM_CRYPT_FAILED,
    ENCRYPT_UTILS_GCM_AUTH_DECRYPT_FAILED,
    ENCRYPT_UTILS_AES_GCM_ENCRYPT_FAILED,
    ENCRYPT_UTILS_AES_GCM_DECRYPT_FAILED,
    ERR_GEN_RANDOM_PINTOKEN_FAILED,
    PIN_CODE_CHECK_FAILED,
    PIN_TOKEN_CHECK_FAILED,
    DEVICEMANAGER_CREATE_SESSION_SERVER_FAILED,
    DEVICEMANAGER_OPEN_SESSION_FAILED,
    AUTH_PARA_INVALID,
    ENCODE_DATA_ERROR,
    DEVICEMANAGER_OK = 0
};
} // namespace DistributedHardware
} // namespace OHOS
#endif // OHOS_DEVICE_MANAGER_ERRNO_H