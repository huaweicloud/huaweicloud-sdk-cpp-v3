
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AuthInfoRes_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AuthInfoRes_H_


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
/// 设备接入类型。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AuthInfoRes
    : public ModelBase
{
public:
    AuthInfoRes();
    virtual ~AuthInfoRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthInfoRes members

    /// <summary>
    /// **参数说明**：鉴权类型。注意：不填写auth_type默认为密钥认证接入方式(SECRET)。 **取值范围**： - SECRET:使用密钥认证接入方式。 - CERTIFICATES:使用证书认证接入方式。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备密钥，认证类型使用密钥认证接入(SECRET)可填写该字段。注意：NB设备密钥由于协议特殊性，只支持十六进制密钥接入；查询设备列表接口不返回该参数。 **取值范围**：长度不低于8不超过32，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(const std::string& value);

    /// <summary>
    /// **参数说明**：设备备用密钥，认证类型使用密钥认证接入(SECRET)该字段有效，当主密钥校验不通过时，会启用辅密钥校验，辅密钥与主密钥有相同的效力；辅密钥对coap协议接入的设备不生效。注意：NB设备密钥由于协议特殊性，只支持十六进制密钥接入；查询设备列表接口不返回该参数。 **取值范围**：长度不低于8不超过32，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getSecondarySecret() const;
    bool secondarySecretIsSet() const;
    void unsetsecondarySecret();
    void setSecondarySecret(const std::string& value);

    /// <summary>
    /// **参数说明**：证书指纹，认证类型使用证书认证接入(CERTIFICATES)该字段有效，注册设备时不填写该字段则取第一次设备接入时的证书指纹。 **取值范围**：长度为40的十六进制字符串或者长度为64的十六进制字符串。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// **参数说明**：证书备用指纹，认证类型使用证书认证接入(CERTIFICATES)该字段有效，当主指纹校验不通过时，会启用辅指纹校验，辅指纹与主指纹有相同的效力。 **取值范围**：长度为40的十六进制字符串或者长度为64的十六进制字符串。
    /// </summary>

    std::string getSecondaryFingerprint() const;
    bool secondaryFingerprintIsSet() const;
    void unsetsecondaryFingerprint();
    void setSecondaryFingerprint(const std::string& value);

    /// <summary>
    /// **参数说明**：指设备是否通过安全协议方式接入。 **取值范围**： - true：通过安全协议方式接入。 - false：通过非安全协议方式接入。非安全接入的设备存在被仿冒等安全风险，请谨慎使用。
    /// </summary>

    bool isSecureAccess() const;
    bool secureAccessIsSet() const;
    void unsetsecureAccess();
    void setSecureAccess(bool value);

    /// <summary>
    /// **参数说明**：设备接入的有效时间，单位：秒，默认值：0 若设备在有效时间内未接入物联网平台并激活，则平台会删除该设备的注册信息。若设置为“0”，则表示平台不会删除该设备的注册信息（建议填写为“0”）。 注意：该参数只对直连设备生效。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);


protected:
    std::string authType_;
    bool authTypeIsSet_;
    std::string secret_;
    bool secretIsSet_;
    std::string secondarySecret_;
    bool secondarySecretIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    std::string secondaryFingerprint_;
    bool secondaryFingerprintIsSet_;
    bool secureAccess_;
    bool secureAccessIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AuthInfoRes_H_
