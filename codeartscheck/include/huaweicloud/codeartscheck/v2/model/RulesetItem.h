
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RulesetItem_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RulesetItem_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RulesetItem
    : public ModelBase
{
public:
    RulesetItem();
    virtual ~RulesetItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RulesetItem members

    /// <summary>
    /// **参数解释:** 规则集ID。 **取值范围:** 32位UUID。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集语言。 **取值范围:** 当前支持的语言有： - ARKTS - C# - CANGJIE - C++ - CSS - GO - HTML - JAVA - JAVASCRIPT - KOTLIN - LUA - PHP - PYTHON - RUST - SCALA - SHELL - SQL - TERRAFORM - TYPESCRIPT - AZURERESOURCEMANAGER - DOCKER - KUBERNETES
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集语言。 **取值范围:** 任意中英文，数字，点，连字符-及下划线_。长度为[1~128]个字符。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释:** 创建者的user_id，值来源于IAM的用户ID。 **取值范围:** 32位UUID。
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释:** 创建人名称，值来源于IAM用户名称。 **取值范围:** IAM用户名称。
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// **参数解释:** 创建时间，时区统一为0时区。 **取值范围:** 0时区时间。
    /// </summary>

    std::string getTemplateCreateTime() const;
    bool templateCreateTimeIsSet() const;
    void unsettemplateCreateTime();
    void setTemplateCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释:** 使用状态。 **取值范围:** - 0：空闲中。 - 1：使用中。
    /// </summary>

    std::string getIsUsed() const;
    bool isUsedIsSet() const;
    void unsetisUsed();
    void setIsUsed(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集包含的规则ID，每条规则都有唯一的规则ID。 **取值范围:** 32位UUID列表，多个UUID以英文逗号分隔。
    /// </summary>

    std::string getRuleIds() const;
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集是否是该语言默认规则集。 **取值范围:** - 0：不是。 - 1：是。
    /// </summary>

    std::string getIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集是否是项目下该语言默认规则集。 **取值范围:** - 0：不是。 - 1：是。
    /// </summary>

    std::string getIsDevcloudProjectDefault() const;
    bool isDevcloudProjectDefaultIsSet() const;
    void unsetisDevcloudProjectDefault();
    void setIsDevcloudProjectDefault(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集是否是系统规则集。 **取值范围:** - 0：不是。 - 1：是。
    /// </summary>

    std::string getIsDefaultTemplate() const;
    bool isDefaultTemplateIsSet() const;
    void unsetisDefaultTemplate();
    void setIsDefaultTemplate(const std::string& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string templateCreateTime_;
    bool templateCreateTimeIsSet_;
    std::string isUsed_;
    bool isUsedIsSet_;
    std::string ruleIds_;
    bool ruleIdsIsSet_;
    std::string isDefault_;
    bool isDefaultIsSet_;
    std::string isDevcloudProjectDefault_;
    bool isDevcloudProjectDefaultIsSet_;
    std::string isDefaultTemplate_;
    bool isDefaultTemplateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RulesetItem_H_
