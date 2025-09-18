
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleItem_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleItem_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RuleItem
    : public ModelBase
{
public:
    RuleItem();
    virtual ~RuleItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleItem members

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
    /// 规则状态0：未启用，1：已启用
    /// </summary>

    std::string getChecked() const;
    bool checkedIsSet() const;
    void unsetchecked();
    void setChecked(const std::string& value);

    /// <summary>
    /// 规则配置参数阈值相关信息
    /// </summary>

    std::vector<RuleConfig>& getRuleConfigList();
    bool ruleConfigListIsSet() const;
    void unsetruleConfigList();
    void setRuleConfigList(const std::vector<RuleConfig>& value);


protected:
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
    std::string checked_;
    bool checkedIsSet_;
    std::vector<RuleConfig> ruleConfigList_;
    bool ruleConfigListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleItem_H_
