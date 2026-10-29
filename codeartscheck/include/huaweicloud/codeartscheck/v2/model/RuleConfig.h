
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleConfig_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleConfig_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RuleConfig
    : public ModelBase
{
public:
    RuleConfig();
    virtual ~RuleConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleConfig members

    /// <summary>
    /// **参数解释:** 规则配置ID。可调用[[获取规则列表接口](https://support.huaweicloud.com/api-codecheck/ListRules.html)](tag:hws)[[获取规则列表接口](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRules.html)](tag:hws_hk)[获取规则列表接口](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取规则配置ID。 **约束限制:** 不涉及。 **取值范围:** 32位UUID。 **默认取值:** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释:** 工具规则ID，即可配置阈值规则的各种阈值对应的ID，当前无便利手段获取，请联系客服咨询。 **约束限制:** 不涉及。 **取值范围:** 32位UUID。 **默认取值:** 不涉及。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释:** 配置参数默认阈值。 **约束限制:** 不涉及。 **取值范围:** 不涉及。 **默认取值:** 不涉及。
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// **参数解释:** 配置参数新阈值。 **约束限制:** 不涉及。 **取值范围:** 不涉及。 **默认取值:** 不涉及。
    /// </summary>

    std::string getOptionValue() const;
    bool optionValueIsSet() const;
    void unsetoptionValue();
    void setOptionValue(const std::string& value);

    /// <summary>
    /// **参数解释:** 当前规则配置项key。可调用[[获取规则列表接口](https://support.huaweicloud.com/api-codecheck/ListRules.html)](tag:hws)[[获取规则列表接口](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRules.html)](tag:hws_hk)[获取规则列表接口](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取规则配置ID。 **约束限制:** 需要和规则ID相匹配。 **取值范围:** 不涉及。 **默认取值:** 不涉及。
    /// </summary>

    std::string getOptionKey() const;
    bool optionKeyIsSet() const;
    void unsetoptionKey();
    void setOptionKey(const std::string& value);

    /// <summary>
    /// **参数解释:** 当前规则配置项key。可调用[[获取规则列表接口](https://support.huaweicloud.com/api-codecheck/ListRules.html)](tag:hws)[[获取规则列表接口](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRules.html)](tag:hws_hk)[获取规则列表接口](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取规则配置ID。 **约束限制:** 需要和规则ID相匹配。 **取值范围:** 不涉及。 **默认取值:** 不涉及。
    /// </summary>

    std::string getOptionName() const;
    bool optionNameIsSet() const;
    void unsetoptionName();
    void setOptionName(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集ID。可调用[[查询规则集列表](https://support.huaweicloud.com/api-codecheck/ListRulesets.html)](tag:hws)[[查询规则集列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRulesets.html)](tag:hws_hk)[查询规则集列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取规则集ID。 **约束限制:** 不涉及。 **取值范围:** 32位UUID。 **默认取值:** 不涉及。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// **参数解释:** 配置参数的描述。可不填。 **约束限制:** 不涉及。 **取值范围:** 不涉及。 **默认取值:** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string optionValue_;
    bool optionValueIsSet_;
    std::string optionKey_;
    bool optionKeyIsSet_;
    std::string optionName_;
    bool optionNameIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleConfig_H_
