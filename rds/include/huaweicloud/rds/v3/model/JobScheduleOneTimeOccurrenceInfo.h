
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleOneTimeOccurrenceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleOneTimeOccurrenceInfo_H_


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
/// 执行一次执行时间。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  JobScheduleOneTimeOccurrenceInfo
    : public ModelBase
{
public:
    JobScheduleOneTimeOccurrenceInfo();
    virtual ~JobScheduleOneTimeOccurrenceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobScheduleOneTimeOccurrenceInfo members

    /// <summary>
    /// 执行日期 yyyy-MM-dd。取值范围1990-01-01至2099-12-31
    /// </summary>

    std::string getActiveStartDate() const;
    bool activeStartDateIsSet() const;
    void unsetactiveStartDate();
    void setActiveStartDate(const std::string& value);

    /// <summary>
    /// 执行时间。HH:mm:ss
    /// </summary>

    std::string getActiveStartTime() const;
    bool activeStartTimeIsSet() const;
    void unsetactiveStartTime();
    void setActiveStartTime(const std::string& value);


protected:
    std::string activeStartDate_;
    bool activeStartDateIsSet_;
    std::string activeStartTime_;
    bool activeStartTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleOneTimeOccurrenceInfo_H_
