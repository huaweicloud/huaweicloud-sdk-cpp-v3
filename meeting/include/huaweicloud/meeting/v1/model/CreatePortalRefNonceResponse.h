
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreatePortalRefNonceResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreatePortalRefNonceResponse_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  CreatePortalRefNonceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePortalRefNonceResponse();
    virtual ~CreatePortalRefNonceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePortalRefNonceResponse members

    /// <summary>
    /// 用于跳转登录的nonce信息。同一个nonce只能使用一次。 &gt; 通过链接https://meeting.huaweicloud.com/?lang&#x3D;zh-CN&amp;nonce&#x3D;xxxxxxxxxxxxx#/login进行免登陆跳转。 
    /// </summary>

    std::string getNonce() const;
    bool nonceIsSet() const;
    void unsetnonce();
    void setNonce(const std::string& value);


protected:
    std::string nonce_;
    bool nonceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreatePortalRefNonceResponse_H_
