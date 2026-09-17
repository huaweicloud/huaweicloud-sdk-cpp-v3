
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonCheckStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonCheckStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/PreCheckItemStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 插件限制检查状态 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonCheckStatus
    : public ModelBase
{
public:
    AddonCheckStatus();
    virtual ~AddonCheckStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonCheckStatus members

    /// <summary>
    /// **参数解释：** 状态 **约束限制：** 不涉及 **取值范围：** - Init：初始化 - Running：运行中 - Success：成功 - Failed：失败  **默认取值：** 不涉及
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释：** 检查项状态集合 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::vector<PreCheckItemStatus>& getItemsStatus();
    bool itemsStatusIsSet() const;
    void unsetitemsStatus();
    void setItemsStatus(const std::vector<PreCheckItemStatus>& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::vector<PreCheckItemStatus> itemsStatus_;
    bool itemsStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonCheckStatus_H_
