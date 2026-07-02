
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockInfo_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupVaultLockInfo
    : public ModelBase
{
public:
    BackupVaultLockInfo();
    virtual ~BackupVaultLockInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupVaultLockInfo members

    /// <summary>
    /// **参数解释**：  合规锁保留期，单位是天。  **取值范围**：  1-36500。
    /// </summary>

    int32_t getLockRetentionDays() const;
    bool lockRetentionDaysIsSet() const;
    void unsetlockRetentionDays();
    void setLockRetentionDays(int32_t value);

    /// <summary>
    /// **参数解释**：  合规锁配置策略。  **取值范围**：  - true：已开启合规锁配置。 - false: 未开启合规锁配置。
    /// </summary>

    bool isLockPolicy() const;
    bool lockPolicyIsSet() const;
    void unsetlockPolicy();
    void setLockPolicy(bool value);

    /// <summary>
    /// **参数解释**：  合规锁开始时间，时间戳格式。  **取值范围**：  不涉及。
    /// </summary>

    int64_t getLockStartTime() const;
    bool lockStartTimeIsSet() const;
    void unsetlockStartTime();
    void setLockStartTime(int64_t value);

    /// <summary>
    /// **参数解释**：  合规锁结束时间，时间戳格式。  **取值范围**：  不涉及。
    /// </summary>

    int64_t getLockEndTime() const;
    bool lockEndTimeIsSet() const;
    void unsetlockEndTime();
    void setLockEndTime(int64_t value);


protected:
    int32_t lockRetentionDays_;
    bool lockRetentionDaysIsSet_;
    bool lockPolicy_;
    bool lockPolicyIsSet_;
    int64_t lockStartTime_;
    bool lockStartTimeIsSet_;
    int64_t lockEndTime_;
    bool lockEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupVaultLockInfo_H_
