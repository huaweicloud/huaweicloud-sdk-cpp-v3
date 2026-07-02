
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupVaultLockResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupVaultLockResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/BackupVaultLockInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowBackupVaultLockResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupVaultLockResponse();
    virtual ~ShowBackupVaultLockResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupVaultLockResponse members

    /// <summary>
    /// 
    /// </summary>

    BackupVaultLockInfo getBackupVaultlockInfo() const;
    bool backupVaultlockInfoIsSet() const;
    void unsetbackupVaultlockInfo();
    void setBackupVaultlockInfo(const BackupVaultLockInfo& value);


protected:
    BackupVaultLockInfo backupVaultlockInfo_;
    bool backupVaultlockInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupVaultLockResponse_H_
