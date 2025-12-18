
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenWebinarHistoryInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenWebinarHistoryInfo_H_


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
/// 历史召开研讨会议信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OpenWebinarHistoryInfo
    : public ModelBase
{
public:
    OpenWebinarHistoryInfo();
    virtual ~OpenWebinarHistoryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenWebinarHistoryInfo members

    /// <summary>
    /// 网络研讨会ID。
    /// </summary>

    std::string getConferenceId() const;
    bool conferenceIdIsSet() const;
    void unsetconferenceId();
    void setConferenceId(const std::string& value);

    /// <summary>
    /// 网络研讨会UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 网络研讨会主题。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 网络研讨会预定者名称。
    /// </summary>

    std::string getScheduserName() const;
    bool scheduserNameIsSet() const;
    void unsetscheduserName();
    void setScheduserName(const std::string& value);

    /// <summary>
    /// 网络研讨主持人名称。
    /// </summary>

    std::string getModerator() const;
    bool moderatorIsSet() const;
    void unsetmoderator();
    void setModerator(const std::string& value);

    /// <summary>
    /// 预订人部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 会议通知中会议时间的时区信息。时区信息，参考[[时区映射关系](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hws)[[时区映射关系](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hk)。 &gt; * 举例：“timeZoneID”:\&quot;26\&quot;，则通过华为云会议发送的会议通知中的时间将会标记为如“2021/11/11 星期四 00:00 - 02:00 (GMT) 格林威治标准时间:都柏林, 爱丁堡, 里斯本, 伦敦”。 
    /// </summary>

    int32_t getTimeZoneId() const;
    bool timeZoneIdIsSet() const;
    void unsettimeZoneId();
    void setTimeZoneId(int32_t value);

    /// <summary>
    /// 网络研讨会开始时间（UTC时间），格式“yyyy-MM-dd HH:mm”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 网络研讨会持续时长，单位分钟。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 网络研讨会实际召开时间（UTC时间），格式“yyyy-MM-dd HH:mm”。
    /// </summary>

    std::string getActualStartTime() const;
    bool actualStartTimeIsSet() const;
    void unsetactualStartTime();
    void setActualStartTime(const std::string& value);

    /// <summary>
    /// 网络研讨会结束时间（UTC时间），格式“yyyy-MM-dd HH:mm”。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 网络研讨会实际时长，单位分钟。
    /// </summary>

    int32_t getActualDuration() const;
    bool actualDurationIsSet() const;
    void unsetactualDuration();
    void setActualDuration(int32_t value);

    /// <summary>
    /// 与会人数。
    /// </summary>

    int32_t getAttendeeCount() const;
    bool attendeeCountIsSet() const;
    void unsetattendeeCount();
    void setAttendeeCount(int32_t value);

    /// <summary>
    /// 主持人数。
    /// </summary>

    int32_t getChairCount() const;
    bool chairCountIsSet() const;
    void unsetchairCount();
    void setChairCount(int32_t value);

    /// <summary>
    /// 嘉宾数。
    /// </summary>

    int32_t getGuestCount() const;
    bool guestCountIsSet() const;
    void unsetguestCount();
    void setGuestCount(int32_t value);

    /// <summary>
    /// 观众人数。
    /// </summary>

    int32_t getAudienceCount() const;
    bool audienceCountIsSet() const;
    void unsetaudienceCount();
    void setAudienceCount(int32_t value);

    /// <summary>
    /// VMR ID。
    /// </summary>

    std::string getVmrId() const;
    bool vmrIdIsSet() const;
    void unsetvmrId();
    void setVmrId(const std::string& value);

    /// <summary>
    /// 网络研讨会VMR最大观众数。
    /// </summary>

    int32_t getVmrPkgAudienceParties() const;
    bool vmrPkgAudiencePartiesIsSet() const;
    void unsetvmrPkgAudienceParties();
    void setVmrPkgAudienceParties(int32_t value);

    /// <summary>
    /// 网络研讨会VMR名称。
    /// </summary>

    std::string getVmrPkgName() const;
    bool vmrPkgNameIsSet() const;
    void unsetvmrPkgName();
    void setVmrPkgName(const std::string& value);


protected:
    std::string conferenceId_;
    bool conferenceIdIsSet_;
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string scheduserName_;
    bool scheduserNameIsSet_;
    std::string moderator_;
    bool moderatorIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    int32_t timeZoneId_;
    bool timeZoneIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string actualStartTime_;
    bool actualStartTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t actualDuration_;
    bool actualDurationIsSet_;
    int32_t attendeeCount_;
    bool attendeeCountIsSet_;
    int32_t chairCount_;
    bool chairCountIsSet_;
    int32_t guestCount_;
    bool guestCountIsSet_;
    int32_t audienceCount_;
    bool audienceCountIsSet_;
    std::string vmrId_;
    bool vmrIdIsSet_;
    int32_t vmrPkgAudienceParties_;
    bool vmrPkgAudiencePartiesIsSet_;
    std::string vmrPkgName_;
    bool vmrPkgNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenWebinarHistoryInfo_H_
