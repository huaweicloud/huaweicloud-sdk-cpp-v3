
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenAttendeeEntity_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenAttendeeEntity_H_


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
/// 与会嘉宾列表。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OpenAttendeeEntity
    : public ModelBase
{
public:
    OpenAttendeeEntity();
    virtual ~OpenAttendeeEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenAttendeeEntity members

    /// <summary>
    /// App ID。如果是APP ID鉴权场景，此项必填。参考[[App ID的申请](https://support.huaweicloud.com/devg-meeting/meeting_20_0011.html#section1)](tag:hws)[[App ID的申请](https://support.huaweicloud.com/intl/zh-cn/devg-meeting/meeting_20_0011.html#section1)](tag:hk)。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 嘉宾的帐号。 * 如果是帐号/密码鉴权场景: 选填，表示华为云会议帐号ID * 如果是APP ID鉴权场景：必填，表示第三方的User ID，同时需要携带参数appId 
    /// </summary>

    std::string getUserAccount() const;
    bool userAccountIsSet() const;
    void unsetuserAccount();
    void setUserAccount(const std::string& value);

    /// <summary>
    /// 嘉宾的名称。长度限制为96个字符。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 部门名称，最大128字符。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 号码。支持SIP号码或者手机号码。 * 如果是帐号/密码鉴权场景：必填 * 如果是APP ID鉴权场景：选填 &gt; * 号码可以通过[[查询企业通讯](https://support.huaweicloud.com/api-meeting/meeting_21_0512.html)](tag:hws)[[查询企业通讯](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0512.html)](tag:hk)接口录获取。返回的number是SIP号码，phone是手机号码 &gt; * 填SIP号码系统会呼叫对应的软终端或者硬终端；填手机号码系统会呼叫手机 &gt; * 呼叫手机需要开通PSTN权限，否则无法呼叫 
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 邮件地址。需要发邮件通知时填写。
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
    /// 是否硬终端（会议室或硬终端）。
    /// </summary>

    bool isIsHardTerminal() const;
    bool isHardTerminalIsSet() const;
    void unsetisHardTerminal();
    void setIsHardTerminal(bool value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string userAccount_;
    bool userAccountIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string sms_;
    bool smsIsSet_;
    bool isHardTerminal_;
    bool isHardTerminalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenAttendeeEntity_H_
