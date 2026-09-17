
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseLineVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseLineVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 基线属性信息，指定基线或取消基线操作。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BaseLineVO
    : public ModelBase
{
public:
    BaseLineVO();
    virtual ~BaseLineVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BaseLineVO members

    /// <summary>
    /// **参数解释**： 基线或取消基线操作类型。 **约束限制**： 不涉及。 **取值范围**： - baselined：基线发布/迭代计划 - unbaseline：取消基线，恢复发布/迭代计划 **默认取值**： 不涉及。
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);


protected:
    std::string baseline_;
    bool baselineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseLineVO_H_
