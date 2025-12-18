
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CheckVerifyCodeResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CheckVerifyCodeResponse_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  CheckVerifyCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckVerifyCodeResponse();
    virtual ~CheckVerifyCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckVerifyCodeResponse members

    /// <summary>
    /// 访问token字符串。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 过期时间，单位：秒。
    /// </summary>

    int32_t getExpire() const;
    bool expireIsSet() const;
    void unsetexpire();
    void setExpire(int32_t value);


protected:
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

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CheckVerifyCodeResponse_H_
