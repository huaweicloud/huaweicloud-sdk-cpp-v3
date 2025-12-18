
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosConferenceInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosConferenceInfo_H_


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
/// 会议QoS告警信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosConferenceInfo
    : public ModelBase
{
public:
    QosConferenceInfo();
    virtual ~QosConferenceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosConferenceInfo members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 会议主题。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 会议预订者名称。
    /// </summary>

    std::string getScheduserName() const;
    bool scheduserNameIsSet() const;
    void unsetscheduserName();
    void setScheduserName(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 总体告警 。 * YES：会议的音频、视频、屏幕共享、CPU任一项产生告警，总体告警就为YES * NO：无告警
    /// </summary>

    std::string getAlarm() const;
    bool alarmIsSet() const;
    void unsetalarm();
    void setAlarm(const std::string& value);

    /// <summary>
    /// 音频告警 。 * YES：会议中任一与会者存在音频告警，会议音频告警就为YES * NO：无音频告警
    /// </summary>

    std::string getAudioAlarm() const;
    bool audioAlarmIsSet() const;
    void unsetaudioAlarm();
    void setAudioAlarm(const std::string& value);

    /// <summary>
    /// 视频告警。 * YES：会议中任一与会者存在视频告警，会议视频告警就为YES * NO：无音视频警
    /// </summary>

    std::string getVideoAlarm() const;
    bool videoAlarmIsSet() const;
    void unsetvideoAlarm();
    void setVideoAlarm(const std::string& value);

    /// <summary>
    /// 屏幕共享告警 YES/NO。 * YES：会议中任一与会者存在屏幕共享告警，会议屏幕共享告警就为YES * NO：无屏幕共享告警
    /// </summary>

    std::string getScreenAlarm() const;
    bool screenAlarmIsSet() const;
    void unsetscreenAlarm();
    void setScreenAlarm(const std::string& value);

    /// <summary>
    /// CPU告警。 * YES：会议中任一与会者存在CPU告警，会议CPU告警就为YES * NO：无CPU告警
    /// </summary>

    std::string getCpuAlarm() const;
    bool cpuAlarmIsSet() const;
    void unsetcpuAlarm();
    void setCpuAlarm(const std::string& value);

    /// <summary>
    /// 时区信息，参考[[时区映射关系](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hws)[[时区映射关系](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hk)。 &gt; 举例：“timeZoneID”:\&quot;26\&quot;，则通过华为云会议发送的会议通知中的时间将会标记为如“2021/11/11 星期四 00:00 - 02:00 (GMT) 格林威治标准时间:都柏林, 爱丁堡, 里斯本, 伦敦”。 
    /// </summary>

    std::string getTimeZoneID() const;
    bool timeZoneIDIsSet() const;
    void unsettimeZoneID();
    void setTimeZoneID(const std::string& value);

    /// <summary>
    /// 会议开始时间(UTC时间), Unix时间戳（单位毫秒）。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 会议结束时间(UTC时间), Unix时间戳（单位毫秒）。 &gt; * 在线会议：会议召开中，endTime &#x3D; 会议预计结束时间 &gt; * 历史会议：会议已结束，endTime &#x3D; 会议实际结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 会议召开时长（分钟）。 &gt; * 在线会议：会议召开中，duration &#x3D; 0 &gt; * 历史会议：会议已结束，duration &#x3D; 会议实际召开时间
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 与会方数。 &gt; 同一用户多次进出会议属于不同的与会方，与会方数计算多次。
    /// </summary>

    int32_t getParticipants() const;
    bool participantsIsSet() const;
    void unsetparticipants();
    void setParticipants(int32_t value);

    /// <summary>
    /// 是否网络研讨会。
    /// </summary>

    bool isWebinar() const;
    bool webinarIsSet() const;
    void unsetwebinar();
    void setWebinar(bool value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string scheduserName_;
    bool scheduserNameIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string alarm_;
    bool alarmIsSet_;
    std::string audioAlarm_;
    bool audioAlarmIsSet_;
    std::string videoAlarm_;
    bool videoAlarmIsSet_;
    std::string screenAlarm_;
    bool screenAlarmIsSet_;
    std::string cpuAlarm_;
    bool cpuAlarmIsSet_;
    std::string timeZoneID_;
    bool timeZoneIDIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t participants_;
    bool participantsIsSet_;
    bool webinar_;
    bool webinarIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosConferenceInfo_H_
