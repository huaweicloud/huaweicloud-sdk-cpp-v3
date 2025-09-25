
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ModifyEmailAddressDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ModifyEmailAddressDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ModifyEmailAddressDto
    : public ModelBase
{
public:
    ModifyEmailAddressDto();
    virtual ~ModifyEmailAddressDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyEmailAddressDto members

    /// <summary>
    /// **参数解释：** 邮箱。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// **参数解释：** 验证码。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getVerifyCode() const;
    bool verifyCodeIsSet() const;
    void unsetverifyCode();
    void setVerifyCode(const std::string& value);


protected:
    std::string email_;
    bool emailIsSet_;
    std::string verifyCode_;
    bool verifyCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ModifyEmailAddressDto_H_
