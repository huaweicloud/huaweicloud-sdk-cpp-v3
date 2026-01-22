
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_OrderRuleAclDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_OrderRuleAclDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 修改规则顺序请求体 **约束限制**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  OrderRuleAclDto
    : public ModelBase
{
public:
    OrderRuleAclDto();
    virtual ~OrderRuleAclDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrderRuleAclDto members

    /// <summary>
    /// **参数解释**： 目标规则ID，填写后添加的新规则置位于此规则之后，非置顶时不能为空，置顶时为空，目标规则ID可以通过[查询防护规则接口](ListAclRules.xml)获得，通过返回值中的data.records.rule_id（.表示各对象之间层级的区分）获得。 **约束限制**： 非置顶时目标规则需要存在 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDestRuleId() const;
    bool destRuleIdIsSet() const;
    void unsetdestRuleId();
    void setDestRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则是否置顶，用于确认规则是否置顶 **约束限制**： 不涉及 **取值范围**： 0代表非置顶，1代表置顶 **默认取值**： 不涉及
    /// </summary>

    int32_t getTop() const;
    bool topIsSet() const;
    void unsettop();
    void setTop(int32_t value);

    /// <summary>
    /// **参数解释**： 规则是否置底，用于确认规则是否置底 **约束限制**： 不涉及 **取值范围**： 0代表非置底，1代表置底 **默认取值**： 不涉及
    /// </summary>

    int32_t getBottom() const;
    bool bottomIsSet() const;
    void unsetbottom();
    void setBottom(int32_t value);


protected:
    std::string destRuleId_;
    bool destRuleIdIsSet_;
    int32_t top_;
    bool topIsSet_;
    int32_t bottom_;
    bool bottomIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_OrderRuleAclDto_H_
