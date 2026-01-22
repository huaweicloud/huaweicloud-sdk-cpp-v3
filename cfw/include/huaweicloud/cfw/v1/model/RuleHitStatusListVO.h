
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitStatusListVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitStatusListVO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleHitStatusListVO
    : public ModelBase
{
public:
    RuleHitStatusListVO();
    virtual ~RuleHitStatusListVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleHitStatusListVO members

    /// <summary>
    /// **参数解释**： 规则ID **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则命中次数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int64_t getRuleHitCount() const;
    bool ruleHitCountIsSet() const;
    void unsetruleHitCount();
    void setRuleHitCount(int64_t value);

    /// <summary>
    /// **参数解释**： 命中时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int64_t getRuleLastHitTime() const;
    bool ruleLastHitTimeIsSet() const;
    void unsetruleLastHitTime();
    void setRuleLastHitTime(int64_t value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    int64_t ruleHitCount_;
    bool ruleHitCountIsSet_;
    int64_t ruleLastHitTime_;
    bool ruleLastHitTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitStatusListVO_H_
