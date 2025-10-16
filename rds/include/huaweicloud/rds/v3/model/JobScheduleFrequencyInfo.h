
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleFrequencyInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleFrequencyInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略间隔周期。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  JobScheduleFrequencyInfo
    : public ModelBase
{
public:
    JobScheduleFrequencyInfo();
    virtual ~JobScheduleFrequencyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobScheduleFrequencyInfo members

    /// <summary>
    /// 策略频率类型 daily:按天, weekly:按周, monthly_day:按月、每月按天, monthly_week:按月、每月按周。
    /// </summary>

    std::string getFreqType() const;
    bool freqTypeIsSet() const;
    void unsetfreqType();
    void setFreqType(const std::string& value);

    /// <summary>
    /// 执行间隔。取值范围1至99。
    /// </summary>

    int32_t getFreqInterval() const;
    bool freqIntervalIsSet() const;
    void unsetfreqInterval();
    void setFreqInterval(int32_t value);

    /// <summary>
    /// 频率类型为按周时该参数必传，不为按周时不生效。 每周执行哪几天。参数值：Monday，Tuesday … Sunday
    /// </summary>

    std::vector<std::string>& getFreqIntervalWeekly();
    bool freqIntervalWeeklyIsSet() const;
    void unsetfreqIntervalWeekly();
    void setFreqIntervalWeekly(const std::vector<std::string>& value);

    /// <summary>
    /// 频率类型为按月、每月按天时该参数必传，不为按月、每月按天时时不生效。 每月执行的日期。取值范围1-31。
    /// </summary>

    int32_t getFreqIntervalDayMonthly() const;
    bool freqIntervalDayMonthlyIsSet() const;
    void unsetfreqIntervalDayMonthly();
    void setFreqIntervalDayMonthly(int32_t value);

    /// <summary>
    /// 频率类型为按月、每月按周时该参数必传，不为按月、每月按周时时不生效。 每周执行哪几天。 Sunday, Monday,Tuesday ... Saturday, day, weekday, weekend
    /// </summary>

    std::string getFreqIntervalMonthly() const;
    bool freqIntervalMonthlyIsSet() const;
    void unsetfreqIntervalMonthly();
    void setFreqIntervalMonthly(const std::string& value);

    /// <summary>
    /// 频率类型为按月、每月按周时该参数必传，不为按月、每月按周时时不生效。 每月在哪周执行。 first, second, third, fourth, last
    /// </summary>

    std::string getFreqRelativeIntervalMonthly() const;
    bool freqRelativeIntervalMonthlyIsSet() const;
    void unsetfreqRelativeIntervalMonthly();
    void setFreqRelativeIntervalMonthly(const std::string& value);


protected:
    std::string freqType_;
    bool freqTypeIsSet_;
    int32_t freqInterval_;
    bool freqIntervalIsSet_;
    std::vector<std::string> freqIntervalWeekly_;
    bool freqIntervalWeeklyIsSet_;
    int32_t freqIntervalDayMonthly_;
    bool freqIntervalDayMonthlyIsSet_;
    std::string freqIntervalMonthly_;
    bool freqIntervalMonthlyIsSet_;
    std::string freqRelativeIntervalMonthly_;
    bool freqRelativeIntervalMonthlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleFrequencyInfo_H_
