
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitGroupPolicy_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitGroupPolicy_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 单副本资源实例调度约束配置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UnitGroupPolicy
    : public ModelBase
{
public:
    UnitGroupPolicy();
    virtual ~UnitGroupPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnitGroupPolicy members

    /// <summary>
    /// **参数解释：** 调度范围，仅A5超节点规格生效。 **约束限制：** - 仅当资源池包含A5(snt9e)规格时有效，非A5规格不执行调度范围校验。 - A5规格仅支持LWS工作负载类型，不支持DEPLOYMENT。 - A5规格需要Volcano调度插件版本满足要求。 **取值范围：** - HYPERNODE：超节点调度 - SLICE：柜级调度 **默认取值：** 不涉及。
    /// </summary>

    std::string getScheduleScope() const;
    bool scheduleScopeIsSet() const;
    void unsetscheduleScope();
    void setScheduleScope(const std::string& value);


protected:
    std::string scheduleScope_;
    bool scheduleScopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitGroupPolicy_H_
