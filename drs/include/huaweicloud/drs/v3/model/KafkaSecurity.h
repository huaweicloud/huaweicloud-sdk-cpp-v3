
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_KafkaSecurity_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_KafkaSecurity_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Kafka安全认证相关参数
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  KafkaSecurity
    : public ModelBase
{
public:
    KafkaSecurity();
    virtual ~KafkaSecurity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KafkaSecurity members

    /// <summary>
    /// **参数解释**：  安全协议类型，安全认证时必填，对应Kafka字段：security.protocol。  **约束限制**：  - 安全认证时必填。  **取值范围**：  - PLAINTEXT：无安全认证方式，仅需输入IP和端口进行连接 - SASL_PLAINTEXT：使用SASL机制连接Kafka，需要设置SASL相关配置 - SSL：使用SSL加密方式连接Kafka，需要设置SSL相关配置 - SASL_SSL：使用SASL及SSL加密认证方式，需要设置SSL及SASL相关参数配置信息  **默认取值**：  不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  证书名称。  **约束限制**：  - 安全协议为SSL、SASL_SSL时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getTrustStoreKeyName() const;
    bool trustStoreKeyNameIsSet() const;
    void unsettrustStoreKeyName();
    void setTrustStoreKeyName(const std::string& value);

    /// <summary>
    /// **参数解释**：  安全证书base64转码后的值。  **约束限制**：  - 安全协议为SSL、SASL_SSL时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getTrustStoreKey() const;
    bool trustStoreKeyIsSet() const;
    void unsettrustStoreKey();
    void setTrustStoreKey(const std::string& value);

    /// <summary>
    /// **参数解释**：  证书密码。  **约束限制**：  - 证书设置了密码时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getTrustStorePassword() const;
    bool trustStorePasswordIsSet() const;
    void unsettrustStorePassword();
    void setTrustStorePassword(const std::string& value);

    /// <summary>
    /// **参数解释**：  主机名端点识别算法，指定通过服务端证书验证服务端主机名的端点识别算法，对应Kafka字段：ssl.endpoint.identification.algorithm。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不填表示禁用主机名验证
    /// </summary>

    std::string getEndpointAlgorithm() const;
    bool endpointAlgorithmIsSet() const;
    void unsetendpointAlgorithm();
    void setEndpointAlgorithm(const std::string& value);

    /// <summary>
    /// **参数解释**：  SASL机制，用于客户端连接的SASL机制，对应Kafka字段：sasl.mechanism。  **约束限制**：  - 认证类型为SASL_PLAINTEXT、SASL_SSL时必填。  **取值范围**：  - GSSAPI：GSSAPI机制 - PLAIN：PLAIN机制 - SCRAM-SHA-256：SCRAM-SHA-256机制 - SCRAM-SHA-512：SCRAM-SHA-512机制  **默认取值**：  不涉及
    /// </summary>

    std::string getSaslMechanism() const;
    bool saslMechanismIsSet() const;
    void unsetsaslMechanism();
    void setSaslMechanism(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否为委托令牌鉴权。  **约束限制**：  - 安全协议为SASL_SSL和SASL_PLAINTEXT时，SASL机制选择SCRAM-SHA-256或者SCRAM-SHA-512时生效。  **取值范围**：  - true：使用委托令牌鉴权 - false：不使用委托令牌鉴权  **默认取值**：  不涉及
    /// </summary>

    bool isDelegationTokens() const;
    bool delegationTokensIsSet() const;
    void unsetdelegationTokens();
    void setDelegationTokens(bool value);

    /// <summary>
    /// **参数解释**：  是否开启SSL双向认证。  **约束限制**：  不涉及。  **取值范围**：  - true：开启SSL双向认证 - false：不开启SSL双向认证  **默认取值**：  不涉及
    /// </summary>

    bool isEnableKeyStore() const;
    bool enableKeyStoreIsSet() const;
    void unsetenableKeyStore();
    void setEnableKeyStore(bool value);

    /// <summary>
    /// **参数解释**：  Keystore证书。  **约束限制**：  - 开启SSL双向认证时需要。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getKeyStoreKey() const;
    bool keyStoreKeyIsSet() const;
    void unsetkeyStoreKey();
    void setKeyStoreKey(const std::string& value);

    /// <summary>
    /// **参数解释**：  Keystore证书名称。  **约束限制**：  - 开启SSL双向认证时需要。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getKeyStoreKeyName() const;
    bool keyStoreKeyNameIsSet() const;
    void unsetkeyStoreKeyName();
    void setKeyStoreKeyName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Keystore证书密码，对应Kafka字段：ssl.keystore.password。  **约束限制**：  - 证书设置了密码时需要。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getKeyStorePassword() const;
    bool keyStorePasswordIsSet() const;
    void unsetkeyStorePassword();
    void setKeyStorePassword(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否设置Keystore私钥密码。  **约束限制**：  不涉及。  **取值范围**：  - true：设置Keystore私钥密码 - false：不设置Keystore私钥密码  **默认取值**：  false
    /// </summary>

    bool isSetPrivateKeyPassword() const;
    bool setPrivateKeyPasswordIsSet() const;
    void unsetsetPrivateKeyPassword();
    void setSetPrivateKeyPassword(bool value);

    /// <summary>
    /// **参数解释**：  Keystore私钥密码，对应Kafka字段：ssl.key.password。  **约束限制**：  - 开启SSL双向认证时，set_private_key_password为true时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getKeyPassword() const;
    bool keyPasswordIsSet() const;
    void unsetkeyPassword();
    void setKeyPassword(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string trustStoreKeyName_;
    bool trustStoreKeyNameIsSet_;
    std::string trustStoreKey_;
    bool trustStoreKeyIsSet_;
    std::string trustStorePassword_;
    bool trustStorePasswordIsSet_;
    std::string endpointAlgorithm_;
    bool endpointAlgorithmIsSet_;
    std::string saslMechanism_;
    bool saslMechanismIsSet_;
    bool delegationTokens_;
    bool delegationTokensIsSet_;
    bool enableKeyStore_;
    bool enableKeyStoreIsSet_;
    std::string keyStoreKey_;
    bool keyStoreKeyIsSet_;
    std::string keyStoreKeyName_;
    bool keyStoreKeyNameIsSet_;
    std::string keyStorePassword_;
    bool keyStorePasswordIsSet_;
    bool setPrivateKeyPassword_;
    bool setPrivateKeyPasswordIsSet_;
    std::string keyPassword_;
    bool keyPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_KafkaSecurity_H_
