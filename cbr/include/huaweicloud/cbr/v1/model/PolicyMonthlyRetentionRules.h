
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyMonthlyRetentionRules_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyMonthlyRetentionRules_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyMonthlyRetentionRules
    : public ModelBase
{
public:
    PolicyMonthlyRetentionRules();
    virtual ~PolicyMonthlyRetentionRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyMonthlyRetentionRules members

    /// <summary>
    /// 月备规则的类型
    /// </summary>

    std::string getRetentionType() const;
    bool retentionTypeIsSet() const;
    void unsetretentionType();
    void setRetentionType(const std::string& value);

    /// <summary>
    /// 将每月第几个星期的备份设置为月备备份，当retention_type为Weekly时才能设置，设置时需要与days_of_week共同设置
    /// </summary>

    std::vector<std::string>& getRetentionWeeks();
    bool retentionWeeksIsSet() const;
    void unsetretentionWeeks();
    void setRetentionWeeks(const std::vector<std::string>& value);

    /// <summary>
    /// 设置选中的星期中的指定天的备份为月备备份，当retention_type为Weekly时才能设置，设置时需要与retention_weeks共同设置
    /// </summary>

    std::vector<std::string>& getDaysOfWeek();
    bool daysOfWeekIsSet() const;
    void unsetdaysOfWeek();
    void setDaysOfWeek(const std::vector<std::string>& value);

    /// <summary>
    /// 表示将每个月中的指定天设置为月备备份，当retention_type为Monthly时才能设置，取值范围为1-28和-1，-1代表每个月的最后一天
    /// </summary>

    std::vector<int32_t>& getDaysOfMonth();
    bool daysOfMonthIsSet() const;
    void unsetdaysOfMonth();
    void setDaysOfMonth(std::vector<int32_t> value);

    /// <summary>
    /// 月备备份的保留时间，取值范围为1-1200，以及-1，单位为月，-1代表月备策略不启用
    /// </summary>

    int32_t getRetentionDurationPeriods() const;
    bool retentionDurationPeriodsIsSet() const;
    void unsetretentionDurationPeriods();
    void setRetentionDurationPeriods(int32_t value);


protected:
    std::string retentionType_;
    bool retentionTypeIsSet_;
    std::vector<std::string> retentionWeeks_;
    bool retentionWeeksIsSet_;
    std::vector<std::string> daysOfWeek_;
    bool daysOfWeekIsSet_;
    std::vector<int32_t> daysOfMonth_;
    bool daysOfMonthIsSet_;
    int32_t retentionDurationPeriods_;
    bool retentionDurationPeriodsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyMonthlyRetentionRules_H_
