
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddUserDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddUserDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/UserFunctionDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  AddUserDTO
    : public ModelBase
{
public:
    AddUserDTO();
    virtual ~AddUserDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddUserDTO members

    /// <summary>
    /// 企业用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 企业用户的英文名称。
    /// </summary>

    std::string getEnglishName() const;
    bool englishNameIsSet() const;
    void unsetenglishName();
    void setEnglishName(const std::string& value);

    /// <summary>
    /// 企业用户帐号，若携带则以携带为准，否则后台自动生成。帐号整系统唯一。 帐号只能包含大小写字母、数字、_、-、.、@符号，不能为纯数字和@后面带.号。 &gt; 帐号/密码鉴权方式时需要填写。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 第三方User ID。 &gt; App ID鉴权方式时需要填写。第三方User ID需要企业内唯一。
    /// </summary>

    std::string getThirdAccount() const;
    bool thirdAccountIsSet() const;
    void unsetthirdAccount();
    void setThirdAccount(const std::string& value);

    /// <summary>
    /// 手机号，必须加上国家码。 例如中国大陆手机+86xxxxxxx。当填写手机号时 “country”参数必填。 手机号只允许输入纯数字。 说明：手机号或者邮箱至少填写一个
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 企业用户帐号的密码。若携带则以实际携带为准，否则后台默认生成，密码必须满足： 1、8-32位 2、不能和帐号的正序和倒序一致 3、至少包含两种字符类型：小写字母、大写字母、数字、特殊字符（&#x60; ~ ! @ # $ % ^ &amp; * ( ) - _ &#x3D; + | [ { } ] ; : \&quot; ,’ &lt; . &gt; / ?）
    /// </summary>

    std::string getPwd() const;
    bool pwdIsSet() const;
    void unsetpwd();
    void setPwd(const std::string& value);

    /// <summary>
    /// 邮箱地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 部门编码，若不携带则默认根部门。 默认值：1
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 签名。
    /// </summary>

    std::string getSignature() const;
    bool signatureIsSet() const;
    void unsetsignature();
    void setSignature(const std::string& value);

    /// <summary>
    /// 职位。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 用户状态。默认值：0 * 0：正常 * 1：停用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UserFunctionDTO getFunction() const;
    bool functionIsSet() const;
    void unsetfunction();
    void setFunction(const UserFunctionDTO& value);

    /// <summary>
    /// 是否发送开户的邮件和短信通知。 - 0 不发送 - 不填或者其他值就发送, 默认发送
    /// </summary>

    std::string getSendNotify() const;
    bool sendNotifyIsSet() const;
    void unsetsendNotify();
    void setSendNotify(const std::string& value);

    /// <summary>
    /// 通讯录排序等级，序号越低优先级越高。 默认值：10000
    /// </summary>

    int32_t getSortLevel() const;
    bool sortLevelIsSet() const;
    void unsetsortLevel();
    void setSortLevel(int32_t value);

    /// <summary>
    /// 是否隐藏手机号码。默认值：false。 * true：在通讯录和会议中不显示手机号码 * false：在通讯录和会议中显示手机号码 
    /// </summary>

    bool isHidePhone() const;
    bool hidePhoneIsSet() const;
    void unsethidePhone();
    void setHidePhone(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string englishName_;
    bool englishNameIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string thirdAccount_;
    bool thirdAccountIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string pwd_;
    bool pwdIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string signature_;
    bool signatureIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string desc_;
    bool descIsSet_;
    int32_t status_;
    bool statusIsSet_;
    UserFunctionDTO function_;
    bool functionIsSet_;
    std::string sendNotify_;
    bool sendNotifyIsSet_;
    int32_t sortLevel_;
    bool sortLevelIsSet_;
    bool hidePhone_;
    bool hidePhoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddUserDTO_H_
