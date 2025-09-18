
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
    /// 规则配置ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 规则ID
    /// </summary>

    int32_t getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(int32_t value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 当前
    /// </summary>

    std::string getOptionValue() const;
    bool optionValueIsSet() const;
    void unsetoptionValue();
    void setOptionValue(const std::string& value);

    /// <summary>
    /// 当前规则配置项key
    /// </summary>

    std::string getOptionKey() const;
    bool optionKeyIsSet() const;
    void unsetoptionKey();
    void setOptionKey(const std::string& value);

    /// <summary>
    /// 当前规则配置项名称
    /// </summary>

    std::string getOptionName() const;
    bool optionNameIsSet() const;
    void unsetoptionName();
    void setOptionName(const std::string& value);

    /// <summary>
    /// 规则集id
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t ruleId_;
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
