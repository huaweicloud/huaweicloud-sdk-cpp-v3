
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyAdvancedRetentionRules_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyAdvancedRetentionRules_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyYearlyRetentionRules.h>
#include <huaweicloud/cbr/v1/model/PolicyMonthlyRetentionRules.h>
#include <huaweicloud/cbr/v1/model/PolicyWeeklyRetentionRules.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 按照时间的高级保留策略
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyAdvancedRetentionRules
    : public ModelBase
{
public:
    PolicyAdvancedRetentionRules();
    virtual ~PolicyAdvancedRetentionRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyAdvancedRetentionRules members

    /// <summary>
    /// 
    /// </summary>

    PolicyWeeklyRetentionRules getWeeklyRetentionRules() const;
    bool weeklyRetentionRulesIsSet() const;
    void unsetweeklyRetentionRules();
    void setWeeklyRetentionRules(const PolicyWeeklyRetentionRules& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyMonthlyRetentionRules getMonthlyRetentionRules() const;
    bool monthlyRetentionRulesIsSet() const;
    void unsetmonthlyRetentionRules();
    void setMonthlyRetentionRules(const PolicyMonthlyRetentionRules& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyYearlyRetentionRules getYearlyRetentionRules() const;
    bool yearlyRetentionRulesIsSet() const;
    void unsetyearlyRetentionRules();
    void setYearlyRetentionRules(const PolicyYearlyRetentionRules& value);


protected:
    PolicyWeeklyRetentionRules weeklyRetentionRules_;
    bool weeklyRetentionRulesIsSet_;
    PolicyMonthlyRetentionRules monthlyRetentionRules_;
    bool monthlyRetentionRulesIsSet_;
    PolicyYearlyRetentionRules yearlyRetentionRules_;
    bool yearlyRetentionRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyAdvancedRetentionRules_H_
