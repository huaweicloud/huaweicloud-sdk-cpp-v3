
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskRulesetInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskRulesetInfo_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskRulesetInfo
    : public ModelBase
{
public:
    TaskRulesetInfo();
    virtual ~TaskRulesetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskRulesetInfo members

    /// <summary>
    /// **参数解释：** 规则集ID。 **取值范围:** 长度为[1~32]个字符。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集语言。 **取值范围:** 自定义语言或者系统内置语言，当前支持的系统内置语言有： - ARKTS - C# - CANGJIE - C++ - CSS - GO - HTML - JAVA - JAVASCRIPT - KOTLIN - LUA - PHP - PYTHON - RUST - SCALA - SHELL - SQL - TERRAFORM - TYPESCRIPT - AZURERESOURCEMANAGER - DOCKER - KUBERNETES
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集名称。 **取值范围:** 任意中英文，数字，点，连字符-及下划线_。长度为[1~128]个字符。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集选取状态。 **取值范围:** - selected：已选。 - optional：可选，指未开启的语言在当前项目下的默认规则集。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集属性。 **取值范围:** - 0：用户自定义规则集。 - 1：系统规则集。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskRulesetInfo_H_
