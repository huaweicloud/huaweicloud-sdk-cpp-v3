
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetBackupPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetBackupPolicyRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BackupPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetBackupPolicyRequestBody
    : public ModelBase
{
public:
    SetBackupPolicyRequestBody();
    virtual ~SetBackupPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetBackupPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BackupPolicy getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const BackupPolicy& value);

    /// <summary>
    /// 仅关闭备份策略时有效。  - true（默认），表示保留自动备份和差异备份。 - false，表示关闭备份策略的同时，删除已有的自动备份和差异备份。
    /// </summary>

    bool isReserveBackups() const;
    bool reserveBackupsIsSet() const;
    void unsetreserveBackups();
    void setReserveBackups(bool value);


protected:
    BackupPolicy backupPolicy_;
    bool backupPolicyIsSet_;
    bool reserveBackups_;
    bool reserveBackupsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetBackupPolicyRequestBody_H_
