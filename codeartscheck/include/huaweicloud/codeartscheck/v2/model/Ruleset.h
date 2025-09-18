
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
/// 创建规则集信息
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
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 新规则集名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 规则集语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 如果有基于的规则集则是1，没有基于的规则集则是0
    /// </summary>

    std::string getIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(const std::string& value);

    /// <summary>
    /// 新启用规则ids
    /// </summary>

    std::string getRuleIds() const;
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(const std::string& value);

    /// <summary>
    /// 新关闭规则id
    /// </summary>

    std::string getUncheckIds() const;
    bool uncheckIdsIsSet() const;
    void unsetuncheckIds();
    void setUncheckIds(const std::string& value);

    /// <summary>
    /// 规则集ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 自定义规则参数项，支持修改规则阈值
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
