
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetDeviceSecret_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetDeviceSecret_H_


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
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ResetDeviceSecret
    : public ModelBase
{
public:
    ResetDeviceSecret();
    virtual ~ResetDeviceSecret();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetDeviceSecret members

    /// <summary>
    /// **参数说明**：设备密钥，设置该字段时平台将设备密钥重置为指定值，若不设置则由平台自动生成。 **取值范围**：长度不低于8不超过32，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(const std::string& value);

    /// <summary>
    /// **参数说明**：是否强制断开设备的连接，当前仅限长连接。默认值false。
    /// </summary>

    bool isForceDisconnect() const;
    bool forceDisconnectIsSet() const;
    void unsetforceDisconnect();
    void setForceDisconnect(bool value);

    /// <summary>
    /// **参数说明**：重置设备秘钥的的类型。 **取值范围**： - PRIMARY：重置主秘钥。设备秘钥鉴权优先使用的密钥，当设备接入物联网平台时，平台将优先使用主密钥进行校验。 - SECONDARY：重置辅秘钥。设备的备用密钥，当主密钥校验不通过时，会启用辅密钥校验，辅密钥与主密钥有相同的效力；辅密钥对coap协议接入的设备不生效。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);


protected:
    std::string secret_;
    bool secretIsSet_;
    bool forceDisconnect_;
    bool forceDisconnectIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetDeviceSecret_H_
