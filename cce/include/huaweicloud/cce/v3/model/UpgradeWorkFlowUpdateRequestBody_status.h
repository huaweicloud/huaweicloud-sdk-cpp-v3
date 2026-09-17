
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkFlowUpdateRequestBody_status_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkFlowUpdateRequestBody_status_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/WorkFlowPhase.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 集群升级流程的执行状态 **约束限制：** 当前仅支持Cancel **取值范围：** - Cancel：表示取消升级  **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeWorkFlowUpdateRequestBody_status
    : public ModelBase
{
public:
    UpgradeWorkFlowUpdateRequestBody_status();
    virtual ~UpgradeWorkFlowUpdateRequestBody_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeWorkFlowUpdateRequestBody_status members

    /// <summary>
    /// 
    /// </summary>

    WorkFlowPhase getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const WorkFlowPhase& value);


protected:
    WorkFlowPhase phase_;
    bool phaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkFlowUpdateRequestBody_status_H_
