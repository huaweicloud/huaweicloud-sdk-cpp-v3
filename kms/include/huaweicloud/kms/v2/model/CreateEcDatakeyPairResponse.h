
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateEcDatakeyPairResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateEcDatakeyPairResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateEcDatakeyPairResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateEcDatakeyPairResponse();
    virtual ~CreateEcDatakeyPairResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEcDatakeyPairResponse members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 需要包含算法、长度、曲线信息。可选值有RSA_2048 | RSA_3072 | RSA_4096 | ECC_NIST_P256 | ECC_NIST_P384 | ECC_NIST_P521 | ECC_SECG_P256K1 | SM2
    /// </summary>

    std::string getKeySpec() const;
    bool keySpecIsSet() const;
    void unsetkeySpec();
    void setKeySpec(const std::string& value);

    /// <summary>
    /// 明文公钥信息
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 密文私钥
    /// </summary>

    std::string getPrivateKeyCipherText() const;
    bool privateKeyCipherTextIsSet() const;
    void unsetprivateKeyCipherText();
    void setPrivateKeyCipherText(const std::string& value);

    /// <summary>
    /// 明文私钥。private_key_plain_text、wrapped_private_key和ciphertext_recipient只能有一个有值
    /// </summary>

    std::string getPrivateKeyPlainText() const;
    bool privateKeyPlainTextIsSet() const;
    void unsetprivateKeyPlainText();
    void setPrivateKeyPlainText(const std::string& value);

    /// <summary>
    /// 由自定义私钥加密的密文私钥。private_key_plain_text、wrapped_private_key和ciphertext_recipient只能有一个有值
    /// </summary>

    std::string getWrappedPrivateKey() const;
    bool wrappedPrivateKeyIsSet() const;
    void unsetwrappedPrivateKey();
    void setWrappedPrivateKey(const std::string& value);

    /// <summary>
    /// 由擎天公钥信息加密的密文私钥。private_key_plain_text、wrapped_private_key和ciphertext_recipient只能有一个有值
    /// </summary>

    std::string getCiphertextRecipient() const;
    bool ciphertextRecipientIsSet() const;
    void unsetciphertextRecipient();
    void setCiphertextRecipient(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keySpec_;
    bool keySpecIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string privateKeyCipherText_;
    bool privateKeyCipherTextIsSet_;
    std::string privateKeyPlainText_;
    bool privateKeyPlainTextIsSet_;
    std::string wrappedPrivateKey_;
    bool wrappedPrivateKeyIsSet_;
    std::string ciphertextRecipient_;
    bool ciphertextRecipientIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateEcDatakeyPairResponse_H_
