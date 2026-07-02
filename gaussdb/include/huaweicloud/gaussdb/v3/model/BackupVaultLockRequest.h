
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/BackupVaultLockInfoRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  打开或延期备份合规锁配置的请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupVaultLockRequest
    : public ModelBase
{
public:
    BackupVaultLockRequest();
    virtual ~BackupVaultLockRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupVaultLockRequest members

    /// <summary>
    /// 
    /// </summary>

    BackupVaultLockInfoRequest getBackupVaultlockInfo() const;
    bool backupVaultlockInfoIsSet() const;
    void unsetbackupVaultlockInfo();
    void setBackupVaultlockInfo(const BackupVaultLockInfoRequest& value);

    /// <summary>
    /// **参数解释**：  操作类型。  **约束限制**：  当前只支持开启和延期。不区分大小写。  **取值范围**： - enable：开启。 - extend：延期。  **默认取值**：  enable。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    BackupVaultLockInfoRequest backupVaultlockInfo_;
    bool backupVaultlockInfoIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockRequest_H_
