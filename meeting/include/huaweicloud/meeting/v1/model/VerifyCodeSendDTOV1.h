
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerifyCodeSendDTOV1_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerifyCodeSendDTOV1_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  VerifyCodeSendDTOV1
    : public ModelBase
{
public:
    VerifyCodeSendDTOV1();
    virtual ~VerifyCodeSendDTOV1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyCodeSendDTOV1 members

    /// <summary>
    /// 用户身份信息（手机号码或邮箱帐号或用户真实帐号）。 &gt; 必须和发送滑块验证码时带的用户身份信息相同。 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 验证码发送方式。 user类型是用户真实帐号时必选；如果没有选择的话，优先短信方式。 * sms：短信方式 * email：邮件方式 
    /// </summary>

    std::string getSendMethod() const;
    bool sendMethodIsSet() const;
    void unsetsendMethod();
    void setSendMethod(const std::string& value);

    /// <summary>
    /// 访问Token字符串。通过[[校验滑块验证码](https://support.huaweicloud.com/api-meeting/meeting_21_0101.html)](tag:hws)[[校验滑块验证码](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0101.html)](tag:hk) 接口获取。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    std::string user_;
    bool userIsSet_;
    std::string sendMethod_;
    bool sendMethodIsSet_;
    std::string token_;
    bool tokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerifyCodeSendDTOV1_H_
