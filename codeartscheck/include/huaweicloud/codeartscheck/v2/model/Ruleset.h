
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_Ruleset_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_Ruleset_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartscheck/v2/model/CustomAttributes.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建规则集信息。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  Ruleset
    : public ModelBase
{
public:
    Ruleset();
    virtual ~Ruleset();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Ruleset members

    /// <summary>
    /// **参数解释:** 项目的32位UUID，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/zh-cn/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口获取。 **约束限制:** 不涉及。 **取值范围:** 长度为[1~32]个字符。 **默认取值:** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释:** 新规则集名称。 **约束限制:** 不能含有任意中英文，数字，点，连字符-及下划线_以外的特殊字符。 **取值范围:** 任意中英文，数字，点，连字符-及下划线_。长度为[1~128]个字符。 **默认取值:** 不涉及。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集语言。 **约束限制:** 只能选择当前系统上支持的语言。 **取值范围:** 只能传一种语言。当前支持的语言有： - ARKTS - C# - CANGJIE - C++ - CSS - GO - HTML - JAVA - JAVASCRIPT - KOTLIN - LUA - PHP - PYTHON - RUST - SCALA - SHELL - SQL - TERRAFORM - TYPESCRIPT - AZURERESOURCEMANAGER - DOCKER - KUBERNETES **默认取值:** 不涉及。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释:** 是否基于已存在的规则集创建新规则集。 **约束限制:** 只能填0或1。 **取值范围:** - 0：新建空白规则集。 - 1：基于已存在的规则集创建新规则集。 **默认取值:** 不涉及。
    /// </summary>

    std::string getIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(const std::string& value);

    /// <summary>
    /// **参数解释:** 新启用规则ID集合，启用多条规则时，id用英文逗号相连。可调用[[获取规则列表接口](https://support.huaweicloud.com/api-codecheck/ListRules.html)](tag:hws)[[获取规则列表接口](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRules.html)](tag:hws_hk)[获取规则列表接口](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取规则ID。 **约束限制:** 规则ID为32位UUID，多个ID之间用英文逗号分隔。例如：\&quot;00034fc32ee045388365d42ca4e07fe1,002c2eda6d6c11edab16fa163e0fa374\&quot;。 **取值范围:** 长度为[1~4000]个字符。 **默认取值:** 不涉及。
    /// </summary>

    std::string getRuleIds() const;
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(const std::string& value);

    /// <summary>
    /// **参数解释:** 新关闭规则ID集合，多个ID用英文逗号相连。可调用[[获取规则列表接口](https://support.huaweicloud.com/api-codecheck/ListRules.html)](tag:hws)[[获取规则列表接口](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRules.html)](tag:hws_hk)[获取规则列表接口](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取规则ID。 **约束限制:** 规则ID为32位UUID，多个ID之间用英文逗号分隔。例如：\&quot;00034fc32ee045388365d42ca4e07fe1,002c2eda6d6c11edab16fa163e0fa374\&quot;。 **取值范围:** 长度为[1~4000]个字符。 **默认取值:** 不涉及。
    /// </summary>

    std::string getUncheckIds() const;
    bool uncheckIdsIsSet() const;
    void unsetuncheckIds();
    void setUncheckIds(const std::string& value);

    /// <summary>
    /// **参数解释:** 规则集ID。当is_default参数为1时，该参数需要传参。可调用[[查询规则集列表](https://support.huaweicloud.com/api-codecheck/ListRulesets.html)](tag:hws)[[查询规则集列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRulesets.html)](tag:hws_hk)[查询规则集列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)获取已存在的规则集ID。 **约束限制:** 32位UUID。例如：\&quot;da303d80d2594faca60dbcc2e29c18aa\&quot;。 **取值范围:** 不涉及。 **默认取值:** 不涉及。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 自定义规则参数项，支持修改规则阈值。
    /// </summary>

    std::vector<CustomAttributes>& getCustomAttributes();
    bool customAttributesIsSet() const;
    void unsetcustomAttributes();
    void setCustomAttributes(const std::vector<CustomAttributes>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string isDefault_;
    bool isDefaultIsSet_;
    std::string ruleIds_;
    bool ruleIdsIsSet_;
    std::string uncheckIds_;
    bool uncheckIdsIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::vector<CustomAttributes> customAttributes_;
    bool customAttributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_Ruleset_H_
