
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticConferenceDataItem_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticConferenceDataItem_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议总体数据的单个时间点数据。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  StatisticConferenceDataItem
    : public ModelBase
{
public:
    StatisticConferenceDataItem();
    virtual ~StatisticConferenceDataItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticConferenceDataItem members

    /// <summary>
    /// 日期/月份，category &#x3D; conference_info时有效。 小时，category &#x3D; conference_hourly_info时有效。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 会议数(含VMR)。 category &#x3D; conference_info时有效。
    /// </summary>

    std::string getConfCount() const;
    bool confCountIsSet() const;
    void unsetconfCount();
    void setConfCount(const std::string& value);

    /// <summary>
    /// 会议时长(秒)(含VMR)。 category &#x3D; conference_info时有效。
    /// </summary>

    std::string getConfDuration() const;
    bool confDurationIsSet() const;
    void unsetconfDuration();
    void setConfDuration(const std::string& value);

    /// <summary>
    /// 与会人次(含VMR)。 category &#x3D; conference_info时有效。
    /// </summary>

    std::string getAttendeeCount() const;
    bool attendeeCountIsSet() const;
    void unsetattendeeCount();
    void setAttendeeCount(const std::string& value);

    /// <summary>
    /// 并发会议使用数。 category &#x3D; conference_info时有效。
    /// </summary>

    std::string getConfConcurrentUsedCount() const;
    bool confConcurrentUsedCountIsSet() const;
    void unsetconfConcurrentUsedCount();
    void setConfConcurrentUsedCount(const std::string& value);

    /// <summary>
    /// 小时单位会议数(含VMR)。 category &#x3D; conference_hourly_info时有效。
    /// </summary>

    std::string getConf24hCount() const;
    bool conf24hCountIsSet() const;
    void unsetconf24hCount();
    void setConf24hCount(const std::string& value);

    /// <summary>
    /// 小时单位与会人次(含VMR)。 category &#x3D; conference_hourly_info时有效。
    /// </summary>

    std::string getConf24hAttendeeCount() const;
    bool conf24hAttendeeCountIsSet() const;
    void unsetconf24hAttendeeCount();
    void setConf24hAttendeeCount(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::string confCount_;
    bool confCountIsSet_;
    std::string confDuration_;
    bool confDurationIsSet_;
    std::string attendeeCount_;
    bool attendeeCountIsSet_;
    std::string confConcurrentUsedCount_;
    bool confConcurrentUsedCountIsSet_;
    std::string conf24hCount_;
    bool conf24hCountIsSet_;
    std::string conf24hAttendeeCount_;
    bool conf24hAttendeeCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticConferenceDataItem_H_
