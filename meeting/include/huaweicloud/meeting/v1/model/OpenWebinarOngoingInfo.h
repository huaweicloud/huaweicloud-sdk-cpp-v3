
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenWebinarOngoingInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenWebinarOngoingInfo_H_


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
/// 正在召开研讨会信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OpenWebinarOngoingInfo
    : public ModelBase
{
public:
    OpenWebinarOngoingInfo();
    virtual ~OpenWebinarOngoingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenWebinarOngoingInfo members

    /// <summary>
    /// 实时在线人数。
    /// </summary>

    int32_t getOnlineAttendeeCount() const;
    bool onlineAttendeeCountIsSet() const;
    void unsetonlineAttendeeCount();
    void setOnlineAttendeeCount(int32_t value);

    /// <summary>
    /// 网络研讨会UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 预订人部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

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
    /// 会议通知中会议时间的时区信息。时区信息，参考[[时区映射关系](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hws)[[时区映射关系](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hk)。 &gt; * 举例：“timeZoneID”:\&quot;26\&quot;，则通过华为云会议发送的会议通知中的时间将会标记为如“2021/11/11 星期四 00:00 - 02:00 (GMT) 格林威治标准时间:都柏林, 爱丁堡, 里斯本, 伦敦”。 
    /// </summary>

    int32_t getTimeZoneId() const;
    bool timeZoneIdIsSet() const;
    void unsettimeZoneId();
    void setTimeZoneId(int32_t value);

    /// <summary>
    /// 网络研讨会预订者的用户UUID。
    /// </summary>

    std::string getScheduserId() const;
    bool scheduserIdIsSet() const;
    void unsetscheduserId();
    void setScheduserId(const std::string& value);

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
    /// 主持人入会地址。
    /// </summary>

    std::string getChairJoinUri() const;
    bool chairJoinUriIsSet() const;
    void unsetchairJoinUri();
    void setChairJoinUri(const std::string& value);

    /// <summary>
    /// 主持人密码。
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
    /// 嘉宾密码。
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
    /// 观众密码。
    /// </summary>

    std::string getAudiencePasswd() const;
    bool audiencePasswdIsSet() const;
    void unsetaudiencePasswd();
    void setAudiencePasswd(const std::string& value);


protected:
    int32_t onlineAttendeeCount_;
    bool onlineAttendeeCountIsSet_;
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
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
    int32_t timeZoneId_;
    bool timeZoneIdIsSet_;
    std::string scheduserId_;
    bool scheduserIdIsSet_;
    std::string scheduserName_;
    bool scheduserNameIsSet_;
    std::string vmrPkgName_;
    bool vmrPkgNameIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenWebinarOngoingInfo_H_
