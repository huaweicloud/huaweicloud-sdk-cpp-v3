
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleListItem_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleListItem_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RuleListItem
    : public ModelBase
{
public:
    RuleListItem();
    virtual ~RuleListItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleListItem members

    /// <summary>
    /// 规则集规范分类
    /// </summary>

    std::string getRuleSet() const;
    bool ruleSetIsSet() const;
    void unsetruleSet();
    void setRuleSet(const std::string& value);

    /// <summary>
    /// 规则id
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 规则所属语言
    /// </summary>

    std::string getRuleLanguage() const;
    bool ruleLanguageIsSet() const;
    void unsetruleLanguage();
    void setRuleLanguage(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 规则问题级别
    /// </summary>

    std::string getRuleSeverity() const;
    bool ruleSeverityIsSet() const;
    void unsetruleSeverity();
    void setRuleSeverity(const std::string& value);

    /// <summary>
    /// 规则标签
    /// </summary>

    std::string getRuleTages() const;
    bool ruleTagesIsSet() const;
    void unsetruleTages();
    void setRuleTages(const std::string& value);

    /// <summary>
    /// 正确示例
    /// </summary>

    std::string getRightExample() const;
    bool rightExampleIsSet() const;
    void unsetrightExample();
    void setRightExample(const std::string& value);

    /// <summary>
    /// 错误示例
    /// </summary>

    std::string getErrorExample() const;
    bool errorExampleIsSet() const;
    void unseterrorExample();
    void setErrorExample(const std::string& value);

    /// <summary>
    /// 修改建议
    /// </summary>

    std::string getReviseOpinion() const;
    bool reviseOpinionIsSet() const;
    void unsetreviseOpinion();
    void setReviseOpinion(const std::string& value);

    /// <summary>
    /// 规则描述
    /// </summary>

    std::string getRuleDesc() const;
    bool ruleDescIsSet() const;
    void unsetruleDesc();
    void setRuleDesc(const std::string& value);


protected:
    std::string ruleSet_;
    bool ruleSetIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleLanguage_;
    bool ruleLanguageIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string ruleSeverity_;
    bool ruleSeverityIsSet_;
    std::string ruleTages_;
    bool ruleTagesIsSet_;
    std::string rightExample_;
    bool rightExampleIsSet_;
    std::string errorExample_;
    bool errorExampleIsSet_;
    std::string reviseOpinion_;
    bool reviseOpinionIsSet_;
    std::string ruleDesc_;
    bool ruleDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleListItem_H_
