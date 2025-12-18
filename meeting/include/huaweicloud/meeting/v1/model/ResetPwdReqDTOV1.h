
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetPwdReqDTOV1_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetPwdReqDTOV1_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ResetPwdReqDTOV1
    : public ModelBase
{
public:
    ResetPwdReqDTOV1();
    virtual ~ResetPwdReqDTOV1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetPwdReqDTOV1 members

    /// <summary>
    /// 用户身份信息（手机号码或邮箱帐号或用户真实帐号）。 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 用户新的登录密码。 密码要求： * 长度范围要求8~32 * 至少包含大小写字母、数字 * 不能包含3个以上重复字符 * 密码不能包含与其对应的用户名（不区分大小写）以及逆序的用户名（不区分大小写） 
    /// </summary>

    std::string getNewPwd() const;
    bool newPwdIsSet() const;
    void unsetnewPwd();
    void setNewPwd(const std::string& value);

    /// <summary>
    /// * 1：临时密码，重置完密码后登录Web Portal根据配置可能需要强制修改密码 * 非1：正式密码，重置完密码后登录Web Portal不需要强制修改密码 
    /// </summary>

    int32_t getPassWordType() const;
    bool passWordTypeIsSet() const;
    void unsetpassWordType();
    void setPassWordType(int32_t value);


protected:
    std::string user_;
    bool userIsSet_;
    std::string newPwd_;
    bool newPwdIsSet_;
    int32_t passWordType_;
    bool passWordTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetPwdReqDTOV1_H_
