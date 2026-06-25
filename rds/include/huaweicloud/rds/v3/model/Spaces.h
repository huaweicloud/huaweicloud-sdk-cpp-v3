
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Spaces_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Spaces_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  Spaces
    : public ModelBase
{
public:
    Spaces();
    virtual ~Spaces();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Spaces members

    /// <summary>
    /// **参数解释**：  日志备份用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(double value);

    /// <summary>
    /// **参数解释**：  rds侧快照备份用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(double value);

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


protected:
    double obs_;
    bool obsIsSet_;
    double snapshot_;
    bool snapshotIsSet_;
    double obsFree_;
    bool obsFreeIsSet_;
    double snapshotFree_;
    bool snapshotFreeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Spaces_H_
