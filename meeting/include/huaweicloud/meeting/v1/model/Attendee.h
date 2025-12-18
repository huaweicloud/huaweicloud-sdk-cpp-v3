
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_Attendee_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_Attendee_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  Attendee
    : public ModelBase
{
public:
    Attendee();
    virtual ~Attendee();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Attendee members

    /// <summary>
    /// 与会者的用户UUID。
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 与会者的华为云会议帐号。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 与会者名称，长度限制为96个字符。
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
    /// 号码。支持SIP号码或者手机号码。 &gt; * 号码可以通过[[查询企业通讯](https://support.huaweicloud.com/api-meeting/meeting_21_0512.html)](tag:hws)[[查询企业通讯](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0512.html)](tag:hk)接口录获取。返回的number是SIP号码，phone是手机号码 &gt; * 填SIP号码系统会呼叫对应的软终端或者硬终端；填手机号码系统会呼叫手机 &gt; * 呼叫手机需要开通PSTN权限，否则无法呼叫 
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 预留字段，取值类型同参数“phone”。
    /// </summary>

    std::string getPhone2() const;
    bool phone2IsSet() const;
    void unsetphone2();
    void setPhone2(const std::string& value);

    /// <summary>
    /// 预留字段，取值类型同参数“phone”。
    /// </summary>

    std::string getPhone3() const;
    bool phone3IsSet() const;
    void unsetphone3();
    void setPhone3(const std::string& value);

    /// <summary>
    /// 邮件地址。 &gt; 会中邀请不发会议通知，不用填写。 
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 短信通知的手机号码。 &gt; 会中邀请不发会议通知，不用填写。 
    /// </summary>

    std::string getSms() const;
    bool smsIsSet() const;
    void unsetsms();
    void setSms(const std::string& value);

    /// <summary>
    /// 终端类型，类型枚举如下： * normal：软终端 * terminal：硬终端 * outside：外部与会人 * mobile：用户手机号码 * ideahub：ideahub * board: 电子白板（SmartRooms）。含Maxhub、海信大屏、IdeaHub B2hwvision：华为智慧屏TV
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 部门编码。
    /// </summary>

    std::string getDeptUUID() const;
    bool deptUUIDIsSet() const;
    void unsetdeptUUID();
    void setDeptUUID(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);


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
    std::string type_;
    bool typeIsSet_;
    std::string deptUUID_;
    bool deptUUIDIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_Attendee_H_
