
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateJobScheduleRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateJobScheduleRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/JobScheduleDailyFrequencyInfo.h>
#include <huaweicloud/rds/v3/model/JobScheduleFrequencyInfo.h>
#include <huaweicloud/rds/v3/model/JobScheduleOneTimeOccurrenceInfo.h>
#include <string>
#include <huaweicloud/rds/v3/model/JobScheduleDurationInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建策略信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateJobScheduleRequestBody
    : public ModelBase
{
public:
    CreateJobScheduleRequestBody();
    virtual ~CreateJobScheduleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateJobScheduleRequestBody members

    /// <summary>
    /// 策略类型，snapshot:快照策略, sync:同步策略。
    /// </summary>

    std::string getScheduleType() const;
    bool scheduleTypeIsSet() const;
    void unsetscheduleType();
    void setScheduleType(const std::string& value);

    /// <summary>
    /// 计划类型。默认值recurring。  automatically：SQL Server代理启动时自动启动。 cpu_idle：CPU空闲时启动。 recurring：重复执行。 one_time：执行一次。
    /// </summary>

    std::string getJobScheduleType() const;
    bool jobScheduleTypeIsSet() const;
    void unsetjobScheduleType();
    void setJobScheduleType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobScheduleOneTimeOccurrenceInfo getOneTimeOccurrence() const;
    bool oneTimeOccurrenceIsSet() const;
    void unsetoneTimeOccurrence();
    void setOneTimeOccurrence(const JobScheduleOneTimeOccurrenceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobScheduleFrequencyInfo getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const JobScheduleFrequencyInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobScheduleDailyFrequencyInfo getDailyFrequency() const;
    bool dailyFrequencyIsSet() const;
    void unsetdailyFrequency();
    void setDailyFrequency(const JobScheduleDailyFrequencyInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobScheduleDurationInfo getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const JobScheduleDurationInfo& value);


protected:
    std::string scheduleType_;
    bool scheduleTypeIsSet_;
    std::string jobScheduleType_;
    bool jobScheduleTypeIsSet_;
    JobScheduleOneTimeOccurrenceInfo oneTimeOccurrence_;
    bool oneTimeOccurrenceIsSet_;
    JobScheduleFrequencyInfo frequency_;
    bool frequencyIsSet_;
    JobScheduleDailyFrequencyInfo dailyFrequency_;
    bool dailyFrequencyIsSet_;
    JobScheduleDurationInfo duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateJobScheduleRequestBody_H_
