
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BridgeAuthInfo_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BridgeAuthInfo_H_


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
/// 网桥鉴权信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  BridgeAuthInfo
    : public ModelBase
{
public:
    BridgeAuthInfo();
    virtual ~BridgeAuthInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BridgeAuthInfo members

    /// <summary>
    /// 鉴权类型。当前支持密钥认证接入(SECRET)。使用密钥认证接入方式(SECRET)填写secret字段，不填写auth_type默认为密钥认证接入方式(SECRET)。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// 网桥密钥，认证类型使用密钥认证接入(SECRET)可填写该字段。
    /// </summary>

    std::string getSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(const std::string& value);


protected:
    std::string authType_;
    bool authTypeIsSet_;
    std::string secret_;
    bool secretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BridgeAuthInfo_H_
