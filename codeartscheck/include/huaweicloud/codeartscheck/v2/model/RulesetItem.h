
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
    /// 规则集id
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 规则集语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 规则集名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建人时间
    /// </summary>

    std::string getTemplateCreateTime() const;
    bool templateCreateTimeIsSet() const;
    void unsettemplateCreateTime();
    void setTemplateCreateTime(const std::string& value);

    /// <summary>
    /// 使用状态1使用中，0空闲中
    /// </summary>

    std::string getIsUsed() const;
    bool isUsedIsSet() const;
    void unsetisUsed();
    void setIsUsed(const std::string& value);

    /// <summary>
    /// 规则集包含的规则id
    /// </summary>

    std::string getRuleIds() const;
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(const std::string& value);

    /// <summary>
    /// 是否该语言默认规则集，0不是，1是
    /// </summary>

    std::string getIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(const std::string& value);

    /// <summary>
    /// 是否是项目下语言默认规则集，0不是，1是
    /// </summary>

    std::string getIsDevcloudProjectDefault() const;
    bool isDevcloudProjectDefaultIsSet() const;
    void unsetisDevcloudProjectDefault();
    void setIsDevcloudProjectDefault(const std::string& value);

    /// <summary>
    /// 是否是系统规则集，0不是，1是
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
