
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretResponse_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  DeriveSharedSecretResponse
    : public ModelBase, public HttpResponse
{
public:
    DeriveSharedSecretResponse();
    virtual ~DeriveSharedSecretResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeriveSharedSecretResponse members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥协商算法
    /// </summary>

    std::string getKeyAgreementAlgorithm() const;
    bool keyAgreementAlgorithmIsSet() const;
    void unsetkeyAgreementAlgorithm();
    void setKeyAgreementAlgorithm(const std::string& value);

    /// <summary>
    /// 由KMS私钥和您的对端公钥协商出的密钥，Base64格式，如果响应体包含了ciphertext_recipient，则不会包含shared_secret
    /// </summary>

    std::string getSharedSecret() const;
    bool sharedSecretIsSet() const;
    void unsetsharedSecret();
    void setSharedSecret(const std::string& value);

    /// <summary>
    /// KMS私钥和您的对端公钥协商出的密钥经过擎天证明文档加密后的密文，密文仅能被机密环境中的私钥解密，指定擎天证明文档后，才会响应ciphertext_recipient，否则通过shared_secret响应明文的共享密钥
    /// </summary>

    std::string getCiphertextRecipient() const;
    bool ciphertextRecipientIsSet() const;
    void unsetciphertextRecipient();
    void setCiphertextRecipient(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyAgreementAlgorithm_;
    bool keyAgreementAlgorithmIsSet_;
    std::string sharedSecret_;
    bool sharedSecretIsSet_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretResponse_H_
