
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SendUserEmailVerifyCodeResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SendUserEmailVerifyCodeResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  SendUserEmailVerifyCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    SendUserEmailVerifyCodeResponse();
    virtual ~SendUserEmailVerifyCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SendUserEmailVerifyCodeResponse members

    /// <summary>
    /// **参数解释：** 发送邮箱验证码结果。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SendUserEmailVerifyCodeResponse_H_
