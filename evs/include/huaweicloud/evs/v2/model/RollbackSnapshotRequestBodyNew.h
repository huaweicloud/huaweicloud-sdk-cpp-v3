
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBodyNew_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBodyNew_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 快照回滚信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  RollbackSnapshotRequestBodyNew
    : public ModelBase
{
public:
    RollbackSnapshotRequestBodyNew();
    virtual ~RollbackSnapshotRequestBodyNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollbackSnapshotRequestBodyNew members

    /// <summary>
    /// **参数解释** 回滚的目标云硬盘名称。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释** 回滚的目标云硬盘UUID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBodyNew_H_
