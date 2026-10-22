
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitGroupPolicyResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitGroupPolicyResponse_H_


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
/// **参数解释：** 单副本资源实例调度约束配置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UnitGroupPolicyResponse
    : public ModelBase
{
public:
    UnitGroupPolicyResponse();
    virtual ~UnitGroupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnitGroupPolicyResponse members

    /// <summary>
    /// **参数解释：** 调度范围。 **取值范围：** HYPERNODE：超节点调度 SLICE：柜级调度
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitGroupPolicyResponse_H_
