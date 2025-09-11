
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskRuleStatistic_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskRuleStatistic_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RiskRuleStatistic
    : public ModelBase
{
public:
    RiskRuleStatistic();
    virtual ~RiskRuleStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RiskRuleStatistic members

    /// <summary>
    /// 数量
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 规则英文名
    /// </summary>

    std::string getRuleNameEnglish() const;
    bool ruleNameEnglishIsSet() const;
    void unsetruleNameEnglish();
    void setRuleNameEnglish(const std::string& value);


protected:
    int64_t count_;
    bool countIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string ruleNameEnglish_;
    bool ruleNameEnglishIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskRuleStatistic_H_
