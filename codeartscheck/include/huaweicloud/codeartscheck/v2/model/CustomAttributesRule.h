
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
    /// 规则ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// attribute的问题级别，0致命，1严重，2一般，3提示
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 规则阈值详细
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
