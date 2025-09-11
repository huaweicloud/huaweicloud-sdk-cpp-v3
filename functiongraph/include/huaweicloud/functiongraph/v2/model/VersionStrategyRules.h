
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_VersionStrategyRules_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_VersionStrategyRules_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  VersionStrategyRules
    : public ModelBase
{
public:
    VersionStrategyRules();
    virtual ~VersionStrategyRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionStrategyRules members

    /// <summary>
    /// 参数类型。
    /// </summary>

    std::string getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(const std::string& value);

    /// <summary>
    /// 规则参数名, 只支持大小写字母，数字，下划线，中划线。
    /// </summary>

    std::string getParam() const;
    bool paramIsSet() const;
    void unsetparam();
    void setParam(const std::string& value);

    /// <summary>
    /// 规则匹配操作符，目前仅需支持 &#x3D; 或者in。
    /// </summary>

    std::string getOp() const;
    bool opIsSet() const;
    void unsetop();
    void setOp(const std::string& value);

    /// <summary>
    /// 规则值，如果op为in，则为逗号分隔的多值字符串
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string ruleType_;
    bool ruleTypeIsSet_;
    std::string param_;
    bool paramIsSet_;
    std::string op_;
    bool opIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_VersionStrategyRules_H_
