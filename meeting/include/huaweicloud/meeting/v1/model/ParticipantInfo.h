
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ParticipantInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ParticipantInfo_H_


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
/// 被邀请的与会者信息。包含预约会议时邀请的与会者和会中主持人邀请的与会者。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ParticipantInfo
    : public ModelBase
{
public:
    ParticipantInfo();
    virtual ~ParticipantInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParticipantInfo members

    /// <summary>
    /// 与会者的号码。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 与会者的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 与会者的号码（预留字段）。
    /// </summary>

    std::string getSubscriberID() const;
    bool subscriberIDIsSet() const;
    void unsetsubscriberID();
    void setSubscriberID(const std::string& value);

    /// <summary>
    /// 与会者的角色。 - 1: 会议主持人 - 0: 普通与会者
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);

    /// <summary>
    /// 用户状态。目前固定返回MEETTING。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 终端所在会议室信息（预留字段）。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 与会者终端类型。 - normal: 软终端。 - terminal: 会议室或硬终端。 - outside: 外部与会人。 - mobile: 用户手机号码。
    /// </summary>

    std::string getAttendeeType() const;
    bool attendeeTypeIsSet() const;
    void unsetattendeeType();
    void setAttendeeType(const std::string& value);

    /// <summary>
    /// 预订者的帐号。 * 如果是帐号/密码鉴权场景，表示华为云会议帐号 * 如果是APP ID鉴权场景，表示第三方的User ID 
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 预留字段。
    /// </summary>

    std::string getPhone2() const;
    bool phone2IsSet() const;
    void unsetphone2();
    void setPhone2(const std::string& value);

    /// <summary>
    /// 预留字段。
    /// </summary>

    std::string getPhone3() const;
    bool phone3IsSet() const;
    void unsetphone3();
    void setPhone3(const std::string& value);

    /// <summary>
    /// 邮箱地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 短信通知的手机号码。
    /// </summary>

    std::string getSms() const;
    bool smsIsSet() const;
    void unsetsms();
    void setSms(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 预订者的用户UUID。
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// App ID。参考[[App ID的申请](https://support.huaweicloud.com/devg-meeting/meeting_20_0011.html#section1)](tag:hws)[[App ID的申请](https://support.huaweicloud.com/intl/zh-cn/devg-meeting/meeting_20_0011.html#section1)](tag:hk)。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 会议开始时是否自动邀请该与会者。默认值由企业级配置决定。 * 0： 不自动邀请 * 1： 自动邀请 
    /// </summary>

    int32_t getIsAutoInvite() const;
    bool isAutoInviteIsSet() const;
    void unsetisAutoInvite();
    void setIsAutoInvite(int32_t value);

    /// <summary>
    /// 是否不叠加会场名（VDC场景下适用）。
    /// </summary>

    bool isIsNotOverlayPidName() const;
    bool isNotOverlayPidNameIsSet() const;
    void unsetisNotOverlayPidName();
    void setIsNotOverlayPidName(bool value);


protected:
    std::string participantID_;
    bool participantIDIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string subscriberID_;
    bool subscriberIDIsSet_;
    int32_t role_;
    bool roleIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string attendeeType_;
    bool attendeeTypeIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string phone2_;
    bool phone2IsSet_;
    std::string phone3_;
    bool phone3IsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string sms_;
    bool smsIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    int32_t isAutoInvite_;
    bool isAutoInviteIsSet_;
    bool isNotOverlayPidName_;
    bool isNotOverlayPidNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ParticipantInfo_H_
