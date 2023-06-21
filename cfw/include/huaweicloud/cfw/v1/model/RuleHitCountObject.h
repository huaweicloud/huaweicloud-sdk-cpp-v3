
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitCountObject_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitCountObject_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleHitCountObject
    : public ModelBase
{
public:
    RuleHitCountObject();
    virtual ~RuleHitCountObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RuleHitCountObject members

    /// <summary>
    /// 规则id
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 规则击中次数
    /// </summary>

    int32_t getRuleHitCount() const;
    bool ruleHitCountIsSet() const;
    void unsetruleHitCount();
    void setRuleHitCount(int32_t value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    int32_t ruleHitCount_;
    bool ruleHitCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleHitCountObject_H_
