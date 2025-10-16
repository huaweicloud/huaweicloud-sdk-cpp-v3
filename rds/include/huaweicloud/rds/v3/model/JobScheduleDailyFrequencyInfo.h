
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleDailyFrequencyInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleDailyFrequencyInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略每日频率。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  JobScheduleDailyFrequencyInfo
    : public ModelBase
{
public:
    JobScheduleDailyFrequencyInfo();
    virtual ~JobScheduleDailyFrequencyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobScheduleDailyFrequencyInfo members

    /// <summary>
    /// 每日频率类型 once:每日一次, multiple:每日多次。
    /// </summary>

    std::string getFreqSubdayType() const;
    bool freqSubdayTypeIsSet() const;
    void unsetfreqSubdayType();
    void setFreqSubdayType(const std::string& value);

    /// <summary>
    /// 每日第一次执行时间。每日频率类型为每日一次时，则只执行这一次。 HH:mm:ss
    /// </summary>

    std::string getActiveStartTime() const;
    bool activeStartTimeIsSet() const;
    void unsetactiveStartTime();
    void setActiveStartTime(const std::string& value);

    /// <summary>
    /// 最后一次执行时间。每日执行多次时该参数必传，每日执行一次时不生效。 HH:mm:ss
    /// </summary>

    std::string getActiveEndTime() const;
    bool activeEndTimeIsSet() const;
    void unsetactiveEndTime();
    void setActiveEndTime(const std::string& value);

    /// <summary>
    /// 执行间隔。每日执行多次时该参数必传，每日执行一次时不生效。取值范围1至99
    /// </summary>

    int32_t getFreqSubdayInterval() const;
    bool freqSubdayIntervalIsSet() const;
    void unsetfreqSubdayInterval();
    void setFreqSubdayInterval(int32_t value);

    /// <summary>
    /// 执行间隔的单位。每日执行多次时该参数必传，每日执行一次时不生效。 second:秒, minute:分, hour:时
    /// </summary>

    std::string getFreqIntervalUnit() const;
    bool freqIntervalUnitIsSet() const;
    void unsetfreqIntervalUnit();
    void setFreqIntervalUnit(const std::string& value);


protected:
    std::string freqSubdayType_;
    bool freqSubdayTypeIsSet_;
    std::string activeStartTime_;
    bool activeStartTimeIsSet_;
    std::string activeEndTime_;
    bool activeEndTimeIsSet_;
    int32_t freqSubdayInterval_;
    bool freqSubdayIntervalIsSet_;
    std::string freqIntervalUnit_;
    bool freqIntervalUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleDailyFrequencyInfo_H_
