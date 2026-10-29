
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomAttributesRule_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomAttributesRule_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/RuleConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CustomAttributesRule
    : public ModelBase
{
public:
    CustomAttributesRule();
    virtual ~CustomAttributesRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomAttributesRule members

    /// <summary>
    /// **参数解释:** 规则ID。可调用[[获取规则列表接口](https://support.huaweicloud.com/api-codecheck/ListRules.html)](tag:hws)[[获取规则列表接口](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRules.html)](tag:hws_hk)[获取规则列表接口](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取。 **约束限制:** 不涉及。 **取值范围:** 32位项目ID。 **默认取值:** 不涉及。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释:** attribute的告警等级。 **约束限制:** 不涉及。 **取值范围:** - 0：致命。 - 1：严重。 - 2：一般。 - 3：提示。 **默认取值:** 不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则阈值详细。
    /// </summary>

    std::vector<RuleConfig>& getRuleConfigList();
    bool ruleConfigListIsSet() const;
    void unsetruleConfigList();
    void setRuleConfigList(const std::vector<RuleConfig>& value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::vector<RuleConfig> ruleConfigList_;
    bool ruleConfigListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomAttributesRule_H_
