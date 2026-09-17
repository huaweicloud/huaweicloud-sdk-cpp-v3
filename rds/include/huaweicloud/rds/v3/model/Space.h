
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Space_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Space_H_


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
/// 备份用量详情
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Space
    : public ModelBase
{
public:
    Space();
    virtual ~Space();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Space members

    /// <summary>
    /// **参数解释**：  日志备份用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(double value);

    /// <summary>
    /// **参数解释**：  审计日志用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getAuditlog() const;
    bool auditlogIsSet() const;
    void unsetauditlog();
    void setAuditlog(double value);

    /// <summary>
    /// **参数解释**：  rds侧快照备份用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(double value);

    /// <summary>
    /// **参数解释**：  rds侧CBR快照备份用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getCbrSnapshot() const;
    bool cbrSnapshotIsSet() const;
    void unsetcbrSnapshot();
    void setCbrSnapshot(double value);

    /// <summary>
    /// **参数解释**：  日志备份赠送空间，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getObsFree() const;
    bool obsFreeIsSet() const;
    void unsetobsFree();
    void setObsFree(double value);

    /// <summary>
    /// **参数解释**：  快照备份赠送空间，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getSnapshotFree() const;
    bool snapshotFreeIsSet() const;
    void unsetsnapshotFree();
    void setSnapshotFree(double value);

    /// <summary>
    /// **参数解释**：  全量备份大小，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(double value);

    /// <summary>
    /// **参数解释**：  增量备份大小，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getLog() const;
    bool logIsSet() const;
    void unsetlog();
    void setLog(double value);


protected:
    double obs_;
    bool obsIsSet_;
    double auditlog_;
    bool auditlogIsSet_;
    double snapshot_;
    bool snapshotIsSet_;
    double cbrSnapshot_;
    bool cbrSnapshotIsSet_;
    double obsFree_;
    bool obsFreeIsSet_;
    double snapshotFree_;
    bool snapshotFreeIsSet_;
    double db_;
    bool dbIsSet_;
    double log_;
    bool logIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Space_H_
