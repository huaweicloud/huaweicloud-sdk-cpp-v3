
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SendSlideVerifyCodeResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SendSlideVerifyCodeResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SendSlideVerifyCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    SendSlideVerifyCodeResponse();
    virtual ~SendSlideVerifyCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SendSlideVerifyCodeResponse members

    /// <summary>
    /// 抠出图形后的原背景图。通过“data:url”方式来定义图片。
    /// </summary>

    std::string getShadowImage() const;
    bool shadowImageIsSet() const;
    void unsetshadowImage();
    void setShadowImage(const std::string& value);

    /// <summary>
    /// 抠出的图形。
    /// </summary>

    std::string getCutImage() const;
    bool cutImageIsSet() const;
    void unsetcutImage();
    void setCutImage(const std::string& value);

    /// <summary>
    /// 抠出图形的Y轴座标。
    /// </summary>

    int32_t getPointY() const;
    bool pointYIsSet() const;
    void unsetpointY();
    void setPointY(int32_t value);

    /// <summary>
    /// 验证码Token字符串。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 验证码有效时间，单位：秒。
    /// </summary>

    int32_t getExpire() const;
    bool expireIsSet() const;
    void unsetexpire();
    void setExpire(int32_t value);


protected:
    std::string shadowImage_;
    bool shadowImageIsSet_;
    std::string cutImage_;
    bool cutImageIsSet_;
    int32_t pointY_;
    bool pointYIsSet_;
    std::string token_;
    bool tokenIsSet_;
    int32_t expire_;
    bool expireIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SendSlideVerifyCodeResponse_H_
