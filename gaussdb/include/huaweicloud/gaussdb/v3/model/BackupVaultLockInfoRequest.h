
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockInfoRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockInfoRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupVaultLockInfoRequest
    : public ModelBase
{
public:
    BackupVaultLockInfoRequest();
    virtual ~BackupVaultLockInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupVaultLockInfoRequest members

    /// <summary>
    /// **参数解释**：  合规锁保留期，单位是天。  **约束限制**：  仅支持按天配置。  **取值范围**：  1-36500。  **默认取值**：  1。
    /// </summary>

    int32_t getLockRetentionDays() const;
    bool lockRetentionDaysIsSet() const;
    void unsetlockRetentionDays();
    void setLockRetentionDays(int32_t value);

    /// <summary>
    /// **参数解释**：  合规锁配置策略。  **约束限制**：  不涉及。  **取值范围**：  当前仅支持设置为true，表示开启或延期合规锁。  **默认取值**：  true。
    /// </summary>

    bool isLockPolicy() const;
    bool lockPolicyIsSet() const;
    void unsetlockPolicy();
    void setLockPolicy(bool value);


protected:
    int32_t lockRetentionDays_;
    bool lockRetentionDaysIsSet_;
    bool lockPolicy_;
    bool lockPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockInfoRequest_H_
