
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateWebinarResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateWebinarResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/OpenWebinarBaseInfo.h>
#include <string>
#include <huaweicloud/meeting/v1/model/YesNoEnum.h>
#include <vector>
#include <huaweicloud/meeting/v1/model/MeetingStatus.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateWebinarResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateWebinarResponse();
    virtual ~CreateWebinarResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWebinarResponse members

    /// <summary>
    /// 网络研讨会ID。
    /// </summary>

    std::string getConferenceId() const;
    bool conferenceIdIsSet() const;
    void unsetconferenceId();
    void setConferenceId(const std::string& value);

    /// <summary>
    /// 企业ID。
    /// </summary>

    std::string getCorpId() const;
    bool corpIdIsSet() const;
    void unsetcorpId();
    void setCorpId(const std::string& value);

    /// <summary>
    /// 网络研讨会主题。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 网络研讨会描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 网络研讨会开始时间（UTC时间），格式“yyyy-MM-dd HH:mm”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 网络研讨会持续时长，单位分钟，取值范围[15,1440]。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 会议通知中会议时间的时区信息。时区信息，参考[[时区映射关系](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hws)[[时区映射关系](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hk)。 &gt; * 举例：“timeZoneID”:\&quot;26\&quot;，则通过华为云会议发送的会议通知中的时间将会标记为如“2021/11/11 星期四 00:00 - 02:00 (GMT) 格林威治标准时间:都柏林, 爱丁堡, 里斯本, 伦敦”。 
    /// </summary>

    int32_t getTimeZoneId() const;
    bool timeZoneIdIsSet() const;
    void unsettimeZoneId();
    void setTimeZoneId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MeetingStatus getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const MeetingStatus& value);

    /// <summary>
    /// 网络研讨会预订者的用户UUID。
    /// </summary>

    std::string getScheduserId() const;
    bool scheduserIdIsSet() const;
    void unsetscheduserId();
    void setScheduserId(const std::string& value);

    /// <summary>
    /// 预订者部门命名。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 预订者名称。
    /// </summary>

    std::string getScheduserName() const;
    bool scheduserNameIsSet() const;
    void unsetscheduserName();
    void setScheduserName(const std::string& value);

    /// <summary>
    /// 网络研讨会VMR名称。
    /// </summary>

    std::string getVmrPkgName() const;
    bool vmrPkgNameIsSet() const;
    void unsetvmrPkgName();
    void setVmrPkgName(const std::string& value);

    /// <summary>
    /// 入会范围开关。
    /// </summary>

    bool isCallRestriction() const;
    bool callRestrictionIsSet() const;
    void unsetcallRestriction();
    void setCallRestriction(bool value);

    /// <summary>
    /// 主持人、嘉宾入会范围。 * 0: 所有用户 * 2: 企业内用户 * 3: 被邀请用户 
    /// </summary>

    int32_t getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(int32_t value);

    /// <summary>
    /// 观众入会范围。 * 0: 所有用户 * 2: 企业内用户 
    /// </summary>

    int32_t getAudienceScope() const;
    bool audienceScopeIsSet() const;
    void unsetaudienceScope();
    void setAudienceScope(int32_t value);

    /// <summary>
    /// 主持人入会地址。
    /// </summary>

    std::string getChairJoinUri() const;
    bool chairJoinUriIsSet() const;
    void unsetchairJoinUri();
    void setChairJoinUri(const std::string& value);

    /// <summary>
    /// 主持人入会密码。
    /// </summary>

    std::string getChairPasswd() const;
    bool chairPasswdIsSet() const;
    void unsetchairPasswd();
    void setChairPasswd(const std::string& value);

    /// <summary>
    /// 嘉宾入会地址。
    /// </summary>

    std::string getGuestJoinUri() const;
    bool guestJoinUriIsSet() const;
    void unsetguestJoinUri();
    void setGuestJoinUri(const std::string& value);

    /// <summary>
    /// 嘉宾入会密码。
    /// </summary>

    std::string getGuestPasswd() const;
    bool guestPasswdIsSet() const;
    void unsetguestPasswd();
    void setGuestPasswd(const std::string& value);

    /// <summary>
    /// 观众入会地址。
    /// </summary>

    std::string getAudienceJoinUri() const;
    bool audienceJoinUriIsSet() const;
    void unsetaudienceJoinUri();
    void setAudienceJoinUri(const std::string& value);

    /// <summary>
    /// 观众入会密码。
    /// </summary>

    std::string getAudiencePasswd() const;
    bool audiencePasswdIsSet() const;
    void unsetaudiencePasswd();
    void setAudiencePasswd(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    YesNoEnum getEnableRecording() const;
    bool enableRecordingIsSet() const;
    void unsetenableRecording();
    void setEnableRecording(const YesNoEnum& value);

    /// <summary>
    /// 主流直播推流地址，在录播类型为 :直播、直播+录播时有效。最大不超过255个字符。
    /// </summary>

    std::string getLiveAddress() const;
    bool liveAddressIsSet() const;
    void unsetliveAddress();
    void setLiveAddress(const std::string& value);

    /// <summary>
    /// 辅流直播推流地址，在录播类型为 :直播、直播+录播时有效。最大不超过255个字符。
    /// </summary>

    std::string getAuxAddress() const;
    bool auxAddressIsSet() const;
    void unsetauxAddress();
    void setAuxAddress(const std::string& value);

    /// <summary>
    /// 直播房间地址，在录播类型为录播+直播推流时有效。最大不超过255个字符。
    /// </summary>

    std::string getLiveUrl() const;
    bool liveUrlIsSet() const;
    void unsetliveUrl();
    void setLiveUrl(const std::string& value);

    /// <summary>
    /// 与会嘉宾名称列表。
    /// </summary>

    std::vector<std::string>& getAttendees();
    bool attendeesIsSet() const;
    void unsetattendees();
    void setAttendees(const std::vector<std::string>& value);


protected:
    std::string conferenceId_;
    bool conferenceIdIsSet_;
    std::string corpId_;
    bool corpIdIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t timeZoneId_;
    bool timeZoneIdIsSet_;
    MeetingStatus state_;
    bool stateIsSet_;
    std::string scheduserId_;
    bool scheduserIdIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string scheduserName_;
    bool scheduserNameIsSet_;
    std::string vmrPkgName_;
    bool vmrPkgNameIsSet_;
    bool callRestriction_;
    bool callRestrictionIsSet_;
    int32_t scope_;
    bool scopeIsSet_;
    int32_t audienceScope_;
    bool audienceScopeIsSet_;
    std::string chairJoinUri_;
    bool chairJoinUriIsSet_;
    std::string chairPasswd_;
    bool chairPasswdIsSet_;
    std::string guestJoinUri_;
    bool guestJoinUriIsSet_;
    std::string guestPasswd_;
    bool guestPasswdIsSet_;
    std::string audienceJoinUri_;
    bool audienceJoinUriIsSet_;
    std::string audiencePasswd_;
    bool audiencePasswdIsSet_;
    YesNoEnum enableRecording_;
    bool enableRecordingIsSet_;
    std::string liveAddress_;
    bool liveAddressIsSet_;
    std::string auxAddress_;
    bool auxAddressIsSet_;
    std::string liveUrl_;
    bool liveUrlIsSet_;
    std::vector<std::string> attendees_;
    bool attendeesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateWebinarResponse_H_
