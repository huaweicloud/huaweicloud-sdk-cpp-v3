
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateWebSocketTokenResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateWebSocketTokenResponse_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateWebSocketTokenResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateWebSocketTokenResponse();
    virtual ~CreateWebSocketTokenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWebSocketTokenResponse members

    /// <summary>
    /// WebSocket建链Token(有效期1分钟，且一次有效)。
    /// </summary>

    std::string getWebSocketToken() const;
    bool webSocketTokenIsSet() const;
    void unsetwebSocketToken();
    void setWebSocketToken(const std::string& value);


protected:
    std::string webSocketToken_;
    bool webSocketTokenIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateWebSocketTokenResponse_H_
