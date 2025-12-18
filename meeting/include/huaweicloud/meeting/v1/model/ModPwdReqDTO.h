
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModPwdReqDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModPwdReqDTO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModPwdReqDTO
    : public ModelBase
{
public:
    ModPwdReqDTO();
    virtual ~ModPwdReqDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModPwdReqDTO members

    /// <summary>
    /// 帐号，必须是携带域名的帐号。 
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 用户旧的登录密码。 
    /// </summary>

    std::string getOldPwd() const;
    bool oldPwdIsSet() const;
    void unsetoldPwd();
    void setOldPwd(const std::string& value);

    /// <summary>
    /// 用户新的登录密码。 密码要求： * 长度范围要求8~32 * 至少包含两种字符类型：小写字母、大写字母、数字、特殊字符（&#x60; ~ ! @ # $ % ^ &amp; * ( ) - _ &#x3D; + \\ | [ { } ] ; : \&quot; ,&#39; &lt; . &gt; / ?） * 旧密码和新密码不能相同 * 上次修改密码后5分钟内不能更新密码 * 不能与最近使用的旧密码相同 * 不能包含3个以上重复字符 * 密码不能包含与其对应的用户名（不区分大小写）以及逆序的用户名（不区分大小写） * 新密码与旧密码之间允许的最少不相同字符数为2个 
    /// </summary>

    std::string getNewPwd() const;
    bool newPwdIsSet() const;
    void unsetnewPwd();
    void setNewPwd(const std::string& value);


protected:
    std::string account_;
    bool accountIsSet_;
    std::string oldPwd_;
    bool oldPwdIsSet_;
    std::string newPwd_;
    bool newPwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModPwdReqDTO_H_
