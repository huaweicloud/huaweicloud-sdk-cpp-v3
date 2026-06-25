
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupUsageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupUsageResponse();
    virtual ~ShowBackupUsageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupUsageResponse members

    /// <summary>
    /// **参数解释**：  备份总使用量，各类备份占用的备份总大小。 单位：MB  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getBackupUseSpace() const;
    bool backupUseSpaceIsSet() const;
    void unsetbackupUseSpace();
    void setBackupUseSpace(double value);

    /// <summary>
    /// **参数解释**：  物理备份总使用量，包括本区域的物理全量备份，binlog日志备份，审计日志。 单位：MB  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getDbUseSpace() const;
    bool dbUseSpaceIsSet() const;
    void unsetdbUseSpace();
    void setDbUseSpace(double value);

    /// <summary>
    /// **参数解释**：  由RDS计费的cbr快照备份总使用量， 单位MB  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getRdsSnapshotUseSpace() const;
    bool rdsSnapshotUseSpaceIsSet() const;
    void unsetrdsSnapshotUseSpace();
    void setRdsSnapshotUseSpace(double value);

    /// <summary>
    /// **参数解释**：  跨区域备份总使用量，包括跨区域的物理全量备份，binlog日志备份， 单位：MB  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getOffsiteUseSpace() const;
    bool offsiteUseSpaceIsSet() const;
    void unsetoffsiteUseSpace();
    void setOffsiteUseSpace(double value);


protected:
    double backupUseSpace_;
    bool backupUseSpaceIsSet_;
    double dbUseSpace_;
    bool dbUseSpaceIsSet_;
    double rdsSnapshotUseSpace_;
    bool rdsSnapshotUseSpaceIsSet_;
    double offsiteUseSpace_;
    bool offsiteUseSpaceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageResponse_H_
