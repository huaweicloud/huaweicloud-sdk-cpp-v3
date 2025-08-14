
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetBridgeSecretResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetBridgeSecretResponse_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ResetBridgeSecretResponse
    : public ModelBase, public HttpResponse
{
public:
    ResetBridgeSecretResponse();
    virtual ~ResetBridgeSecretResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetBridgeSecretResponse members

    /// <summary>
    /// 网桥ID
    /// </summary>

    std::string getBridgeId() const;
    bool bridgeIdIsSet() const;
    void unsetbridgeId();
    void setBridgeId(const std::string& value);

    /// <summary>
    /// 网桥密钥。
    /// </summary>

    std::string getSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(const std::string& value);


protected:
    std::string bridgeId_;
    bool bridgeIdIsSet_;
    std::string secret_;
    bool secretIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetBridgeSecretResponse_H_
