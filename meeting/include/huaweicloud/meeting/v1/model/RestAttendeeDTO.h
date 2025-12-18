
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAttendeeDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAttendeeDTO_H_


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
/// 与会者信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestAttendeeDTO
    : public ModelBase
{
public:
    RestAttendeeDTO();
    virtual ~RestAttendeeDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestAttendeeDTO members

    /// <summary>
    /// 与会者的用户UUID。
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 与会者的帐号。 * 如果是帐号/密码鉴权场景：选填，表示华为云会议帐号 * 如果是APPID鉴权场景：必填，表示第三方的User ID，同时需要携带参数appId
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 与会者名称。长度限制为96个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 会议中的角色。默认为普通与会者。 - 0: 普通与会者 - 1: 会议主持人
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);

    /// <summary>
    /// 号码。支持SIP号码或者手机号码。 * 如果是帐号/密码鉴权场景：必填 * 如果是APP ID鉴权场景：选填 &gt; * 号码可以通过[[查询企业通讯](https://support.huaweicloud.com/api-meeting/meeting_21_0512.html)](tag:hws)[[查询企业通讯](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0512.html)](tag:hk)接口录获取。返回的number是SIP号码，phone是手机号码 &gt; * 填SIP号码系统会呼叫对应的软终端或者硬终端；填手机号码系统会呼叫手机 &gt; * 呼叫手机需要开通PSTN权限，否则无法呼叫
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 预留字段，取值类型同phone。
    /// </summary>

    std::string getPhone2() const;
    bool phone2IsSet() const;
    void unsetphone2();
    void setPhone2(const std::string& value);

    /// <summary>
    /// 预留字段，取值类型同phone。
    /// </summary>

    std::string getPhone3() const;
    bool phone3IsSet() const;
    void unsetphone3();
    void setPhone3(const std::string& value);

    /// <summary>
    /// 邮箱地址。需要发邮件通知时填写。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 短信通知的手机号码。需要发短信通知时填写。
    /// </summary>

    std::string getSms() const;
    bool smsIsSet() const;
    void unsetsms();
    void setSms(const std::string& value);

    /// <summary>
    /// 用户入会时是否需要自动静音。默认不静音。 - 0: 不需要静音 - 1: 需要静音 &gt; 仅会中邀请与会者时生效。
    /// </summary>

    int32_t getIsMute() const;
    bool isMuteIsSet() const;
    void unsetisMute();
    void setIsMute(int32_t value);

    /// <summary>
    /// 会议开始时是否自动邀请该与会者。默认值由企业级配置决定。 - 0: 不自动邀请 - 1: 自动邀请 &gt; 仅并发会议资源的随机会议ID会议才生效。
    /// </summary>

    int32_t getIsAutoInvite() const;
    bool isAutoInviteIsSet() const;
    void unsetisAutoInvite();
    void setIsAutoInvite(int32_t value);

    /// <summary>
    /// 终端类型，类型枚举如下： * normal: 软终端 * terminal: 会议室或硬终端 * outside: 外部与会人 * mobile: 用户手机号码 * ideahub：ideahub * board: 电子白板（SmartRooms），含Maxhub、海信大屏、IdeaHub B2 * hwvision：华为智慧屏TV
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 预留字段，终端所在会议室信息。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 部门ID。
    /// </summary>

    std::string getDeptUUID() const;
    bool deptUUIDIsSet() const;
    void unsetdeptUUID();
    void setDeptUUID(const std::string& value);

    /// <summary>
    /// 部门名称。最大不超过128个字符。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// App ID。如果是APP ID鉴权场景，此项必填。参考[[App ID的申请](https://support.huaweicloud.com/devg-meeting/meeting_20_0011.html#section1)](tag:hws)[[App ID的申请](https://support.huaweicloud.com/intl/zh-cn/devg-meeting/meeting_20_0011.html#section1)](tag:hk)。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 企业内唯一会场标识, 0标识为普通与会者，1标识为企业内唯一会场; uniqueType 为1， 同时type要指定为customnumber
    /// </summary>

    int32_t getUniqueType() const;
    bool uniqueTypeIsSet() const;
    void unsetuniqueType();
    void setUniqueType(int32_t value);


protected:
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t role_;
    bool roleIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string phone2_;
    bool phone2IsSet_;
    std::string phone3_;
    bool phone3IsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string sms_;
    bool smsIsSet_;
    int32_t isMute_;
    bool isMuteIsSet_;
    int32_t isAutoInvite_;
    bool isAutoInviteIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string deptUUID_;
    bool deptUUIDIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    int32_t uniqueType_;
    bool uniqueTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAttendeeDTO_H_
