
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenScheduleConfReq_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenScheduleConfReq_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/OpenAttendeeEntity.h>
#include <string>
#include <huaweicloud/meeting/v1/model/YesNoEnum.h>
#include <vector>
#include <huaweicloud/meeting/v1/model/OpenNotifySetting.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建网络研讨会请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OpenScheduleConfReq
    : public ModelBase
{
public:
    OpenScheduleConfReq();
    virtual ~OpenScheduleConfReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenScheduleConfReq members

    /// <summary>
    /// 网络研讨会主题。长度限制为128个字符。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 网络研讨会描述，长度限制为1000个字符。
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
    /// 与会嘉宾列表。 &gt; 观众只能自己通过链接或者会议ID+密码加入，不支持被邀请。 
    /// </summary>

    std::vector<OpenAttendeeEntity>& getAttendees();
    bool attendeesIsSet() const;
    void unsetattendees();
    void setAttendees(const std::vector<OpenAttendeeEntity>& value);

    /// <summary>
    /// 
    /// </summary>

    OpenNotifySetting getNotifySetting() const;
    bool notifySettingIsSet() const;
    void unsetnotifySetting();
    void setNotifySetting(const OpenNotifySetting& value);

    /// <summary>
    /// 绑定给当前创建网络研讨会帐号的VMR ID。通过[[查询云会议室及个人会议ID](https://support.huaweicloud.com/api-meeting/meeting_21_1106.html)](tag:hws)[[查询云会议室及个人会议ID](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_1106.html)](tag:hk)接口获取。 &gt; * vmrID取上述查询接口中返回的id，不是vmrId。 &gt; * 创建网络研讨会时，使用vmrMode&#x3D;2的VMR。 
    /// </summary>

    std::string getVmrID() const;
    bool vmrIDIsSet() const;
    void unsetvmrID();
    void setVmrID(const std::string& value);

    /// <summary>
    /// 嘉宾密码（4-16位长度的纯数字)。不指定则系统自动生成。
    /// </summary>

    std::string getGuestPasswd() const;
    bool guestPasswdIsSet() const;
    void unsetguestPasswd();
    void setGuestPasswd(const std::string& value);

    /// <summary>
    /// 观众密码（4-16位长度的纯数字)。不指定则系统自动生成。
    /// </summary>

    std::string getAudiencePasswd() const;
    bool audiencePasswdIsSet() const;
    void unsetaudiencePasswd();
    void setAudiencePasswd(const std::string& value);

    /// <summary>
    /// 入会范围开关。 * false：不限制入会范围 * true：限制入会范围 
    /// </summary>

    bool isCallRestriction() const;
    bool callRestrictionIsSet() const;
    void unsetcallRestriction();
    void setCallRestriction(bool value);

    /// <summary>
    /// 主持人、嘉宾入会范围 。仅callRestriction设置成true后生效。 * 0: 所有用户 * 2: 企业内用户 * 3: 被邀请用户 
    /// </summary>

    int32_t getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(int32_t value);

    /// <summary>
    /// 观众入会范围。仅callRestriction设置成true后生效。 * 0: 所有用户 * 2: 企业内用户和被邀请用户 
    /// </summary>

    int32_t getAudienceScope() const;
    bool audienceScopeIsSet() const;
    void unsetaudienceScope();
    void setAudienceScope(int32_t value);

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


protected:
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
    std::vector<OpenAttendeeEntity> attendees_;
    bool attendeesIsSet_;
    OpenNotifySetting notifySetting_;
    bool notifySettingIsSet_;
    std::string vmrID_;
    bool vmrIDIsSet_;
    std::string guestPasswd_;
    bool guestPasswdIsSet_;
    std::string audiencePasswd_;
    bool audiencePasswdIsSet_;
    bool callRestriction_;
    bool callRestrictionIsSet_;
    int32_t scope_;
    bool scopeIsSet_;
    int32_t audienceScope_;
    bool audienceScopeIsSet_;
    YesNoEnum enableRecording_;
    bool enableRecordingIsSet_;
    std::string liveAddress_;
    bool liveAddressIsSet_;
    std::string auxAddress_;
    bool auxAddressIsSet_;
    std::string liveUrl_;
    bool liveUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenScheduleConfReq_H_
