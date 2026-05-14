
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kms/v2/model/Recipient.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DeriveSharedSecretRequestBody
    : public ModelBase
{
public:
    DeriveSharedSecretRequestBody();
    virtual ~DeriveSharedSecretRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeriveSharedSecretRequestBody members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥协商算法，仅支持ECDH
    /// </summary>

    std::string getKeyAgreementAlgorithm() const;
    bool keyAgreementAlgorithmIsSet() const;
    void unsetkeyAgreementAlgorithm();
    void setKeyAgreementAlgorithm(const std::string& value);

    /// <summary>
    /// 对端密钥对的的公钥，您需要保证是EC_P256，EC_384，SECP256K1或SM2(仅中国区域支持)密钥对的公钥。公钥的格式必须是DER-encoded X.509类型的Base64的字符串
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Recipient getRecipient() const;
    bool recipientIsSet() const;
    void unsetrecipient();
    void setRecipient(const Recipient& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyAgreementAlgorithm_;
    bool keyAgreementAlgorithmIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    Recipient recipient_;
    bool recipientIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretRequestBody_H_
