
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyYearlyRetentionRules_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyYearlyRetentionRules_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置年备备份的保留规则
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyYearlyRetentionRules
    : public ModelBase
{
public:
    PolicyYearlyRetentionRules();
    virtual ~PolicyYearlyRetentionRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyYearlyRetentionRules members

    /// <summary>
    /// 年备规则的类型
    /// </summary>

    std::string getRetentionType() const;
    bool retentionTypeIsSet() const;
    void unsetretentionType();
    void setRetentionType(const std::string& value);

    /// <summary>
    /// 将每年中指定月份的备份设置为年备备份，当retention_type为Weekly时，需要与retention_weeks和days_of_week共同设置，当retention_type为Monthly时，需要与days_of_month共同设置
    /// </summary>

    std::vector<std::string>& getRetentionMonths();
    bool retentionMonthsIsSet() const;
    void unsetretentionMonths();
    void setRetentionMonths(const std::vector<std::string>& value);

    /// <summary>
    /// 将选中月份的第几个星期的备份设置为年备备份，当retention_type为Weekly时才能设置，设置时需要与retention_months和days_of_week共同设置
    /// </summary>

    std::vector<std::string>& getRetentionWeeks();
    bool retentionWeeksIsSet() const;
    void unsetretentionWeeks();
    void setRetentionWeeks(const std::vector<std::string>& value);

    /// <summary>
    /// 表示将选中月份的指定天的备份设置为年备备份，当retention_type为Monthly时才能设置，取值范围为1-28和-1，-1代表每个月的最后一天，需要与retention_months共同设置
    /// </summary>

    std::vector<int32_t>& getDaysOfMonth();
    bool daysOfMonthIsSet() const;
    void unsetdaysOfMonth();
    void setDaysOfMonth(std::vector<int32_t> value);

    /// <summary>
    /// 设置指定月份的指定星期中的指定天的备份为年备备份，当retention_type为Weekly时才能设置，设置时需要与retention_weeks和retention_months共同设置
    /// </summary>

    std::vector<std::string>& getDaysOfWeek();
    bool daysOfWeekIsSet() const;
    void unsetdaysOfWeek();
    void setDaysOfWeek(const std::vector<std::string>& value);

    /// <summary>
    /// 年备备份的保留时间，取值范围为1-100，以及-1，单位为年，-1代表年备策略不启用
    /// </summary>

    int32_t getRetentionDurationPeriods() const;
    bool retentionDurationPeriodsIsSet() const;
    void unsetretentionDurationPeriods();
    void setRetentionDurationPeriods(int32_t value);


protected:
    std::string retentionType_;
    bool retentionTypeIsSet_;
    std::vector<std::string> retentionMonths_;
    bool retentionMonthsIsSet_;
    std::vector<std::string> retentionWeeks_;
    bool retentionWeeksIsSet_;
    std::vector<int32_t> daysOfMonth_;
    bool daysOfMonthIsSet_;
    std::vector<std::string> daysOfWeek_;
    bool daysOfWeekIsSet_;
    int32_t retentionDurationPeriods_;
    bool retentionDurationPeriodsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyYearlyRetentionRules_H_
