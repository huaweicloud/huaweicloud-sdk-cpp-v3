
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AdminDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AdminDTO_H_


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
/// 管理员信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  AdminDTO
    : public ModelBase
{
public:
    AdminDTO();
    virtual ~AdminDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdminDTO members

    /// <summary>
    /// 用户帐号，帐号只能包含大小写字母、数字、_、-、.、@符号，不能为纯数字和@后面带.号。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 若携带则以前台携带为准，否则后台默认生成,密码必须满足: * 6-32位 * 不能和帐号的正序和倒序一致 * 至少包含两种字符类型：小写字母、大写字母、数字、特殊字符（&#x60; ~ ! @ # $ % ^ &amp; * ( ) - _ &#x3D; + \\ | [ { } ] ; : \\\&quot; ,&#39; &lt; . &gt; / ?
    /// </summary>

    std::string getPwd() const;
    bool pwdIsSet() const;
    void unsetpwd();
    void setPwd(const std::string& value);

    /// <summary>
    /// 邮箱，管理员手机和邮箱必填其一，否则无法重置密码。如果企业短信开关关闭，则邮箱必填。格式必须满足(^$|^[\\\\w-+]+(\\\\.[\\\\w-+]+)*@[\\\\w-]+(\\\\.[\\\\w-]+)*(\\\\.[\\\\w-]{1,})$)。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 手机号，必须加上国家码，例如中国大陆手机+86xxxxxxx，当填写手机号时 “country”参数必填,手机格式必须满足(^$|^[+]?[0-9]+$)。
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


protected:
    std::string account_;
    bool accountIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string pwd_;
    bool pwdIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AdminDTO_H_
