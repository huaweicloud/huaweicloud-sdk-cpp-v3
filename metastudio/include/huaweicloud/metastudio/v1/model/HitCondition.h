
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HitCondition_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HitCondition_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/HitConditionTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 命中条件配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  HitCondition
    : public ModelBase
{
public:
    HitCondition();
    virtual ~HitCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HitCondition members

    /// <summary>
    /// **参数解释**： 条件关系。对于多个条件的逻辑运算关系。 **约束限制**： 不涉及。 **取值范围**： * AND：表示多个条件同时满足。 * OR：表示多个条件满足其一即可。 * RESERVED：兜底回复不会去判断其他命中条件。  **默认取值**： 不涉及。
    /// </summary>

    std::string getRelation() const;
    bool relationIsSet() const;
    void unsetrelation();
    void setRelation(const std::string& value);

    /// <summary>
    /// **参数解释**： 优先级，数值越低优先级越高；取值0-999，默认值为500，为可选值 **约束限制**： 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 匹配关系配置
    /// </summary>

    std::vector<HitConditionTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<HitConditionTag>& value);


protected:
    std::string relation_;
    bool relationIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::vector<HitConditionTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HitCondition_H_
