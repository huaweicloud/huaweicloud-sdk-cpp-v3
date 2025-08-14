
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddTunnelResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddTunnelResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddTunnelResponse
    : public ModelBase, public HttpResponse
{
public:
    AddTunnelResponse();
    virtual ~AddTunnelResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTunnelResponse members

    /// <summary>
    /// 隧道ID
    /// </summary>

    std::string getTunnelId() const;
    bool tunnelIdIsSet() const;
    void unsettunnelId();
    void setTunnelId(const std::string& value);

    /// <summary>
    /// 鉴权信息
    /// </summary>

    std::string getTunnelAccessToken() const;
    bool tunnelAccessTokenIsSet() const;
    void unsettunnelAccessToken();
    void setTunnelAccessToken(const std::string& value);

    /// <summary>
    /// 鉴权信息的过期时间, 单位：秒
    /// </summary>

    int32_t getExpiresIn() const;
    bool expiresInIsSet() const;
    void unsetexpiresIn();
    void setExpiresIn(int32_t value);

    /// <summary>
    /// websocket接入地址
    /// </summary>

    std::string getTunnelUri() const;
    bool tunnelUriIsSet() const;
    void unsettunnelUri();
    void setTunnelUri(const std::string& value);


protected:
    std::string tunnelId_;
    bool tunnelIdIsSet_;
    std::string tunnelAccessToken_;
    bool tunnelAccessTokenIsSet_;
    int32_t expiresIn_;
    bool expiresInIsSet_;
    std::string tunnelUri_;
    bool tunnelUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddTunnelResponse_H_
