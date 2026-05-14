
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ReEncryptRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ReEncryptRequestBody_H_


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
/// 重加密的请求体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ReEncryptRequestBody
    : public ModelBase
{
public:
    ReEncryptRequestBody();
    virtual ~ReEncryptRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReEncryptRequestBody members

    /// <summary>
    /// 原密钥ID，用于解密密文。对于非对称密钥加密的密文source_key_id必填。对于对称密钥加密的密文，推荐填写source_key_id。kms会优先使用您填写的source_key_id进行解密。不填时会尝试从密文中解析出加密时使用的密钥ID进行解密。
    /// </summary>

    std::string getSourceKeyId() const;
    bool sourceKeyIdIsSet() const;
    void unsetsourceKeyId();
    void setSourceKeyId(const std::string& value);

    /// <summary>
    /// 加密原密文时使用的aad信息。如果加密时，没指定aad，则不能填写，否则会造成解密失败
    /// </summary>

    std::string getSourceAdditionalAuthenticatedData() const;
    bool sourceAdditionalAuthenticatedDataIsSet() const;
    void unsetsourceAdditionalAuthenticatedData();
    void setSourceAdditionalAuthenticatedData(const std::string& value);

    /// <summary>
    /// 加密原密文时使用的加密算法。默认值为“SYMMETRIC_DEFAULT”，合法枚举值如下： SYMMETRIC_DEFAULT RSAES_OAEP_SHA_1 RSAES_OAEP_SHA_256 SM2_ENCRYPT 注意：RSAES_OAEP_SHA_1已不再安全，请谨慎使用
    /// </summary>

    std::string getSourceEncryptionAlgorithm() const;
    bool sourceEncryptionAlgorithmIsSet() const;
    void unsetsourceEncryptionAlgorithm();
    void setSourceEncryptionAlgorithm(const std::string& value);

    /// <summary>
    /// 目的密钥ID,用于加密解密后的明文
    /// </summary>

    std::string getDestinationKeyId() const;
    bool destinationKeyIdIsSet() const;
    void unsetdestinationKeyId();
    void setDestinationKeyId(const std::string& value);

    /// <summary>
    /// 如果指定了值，会在重加密时，作为aad参与计算
    /// </summary>

    std::string getDestinationAdditionalAuthenticatedData() const;
    bool destinationAdditionalAuthenticatedDataIsSet() const;
    void unsetdestinationAdditionalAuthenticatedData();
    void setDestinationAdditionalAuthenticatedData(const std::string& value);

    /// <summary>
    /// 重加密新密文时使用的加密算法。默认值为“SYMMETRIC_DEFAULT”，合法枚举值如下： SYMMETRIC_DEFAULT RSAES_OAEP_SHA_1 RSAES_OAEP_SHA_256 SM2_ENCRYPT 注意：RSAES_OAEP_SHA_1已不再安全，请谨慎使用
    /// </summary>

    std::string getDestinationEncryptionAlgorithm() const;
    bool destinationEncryptionAlgorithmIsSet() const;
    void unsetdestinationEncryptionAlgorithm();
    void setDestinationEncryptionAlgorithm(const std::string& value);

    /// <summary>
    /// 当密文是CBC 模式加密的 数据密钥时，需要指定datakey_cipher_length。表示明文密钥材料的字节数
    /// </summary>

    std::string getDatakeyCipherLength() const;
    bool datakeyCipherLengthIsSet() const;
    void unsetdatakeyCipherLength();
    void setDatakeyCipherLength(const std::string& value);

    /// <summary>
    /// 需要进行重加密的密文。
    /// </summary>

    std::string getCipherText() const;
    bool cipherTextIsSet() const;
    void unsetcipherText();
    void setCipherText(const std::string& value);


protected:
    std::string sourceKeyId_;
    bool sourceKeyIdIsSet_;
    std::string sourceAdditionalAuthenticatedData_;
    bool sourceAdditionalAuthenticatedDataIsSet_;
    std::string sourceEncryptionAlgorithm_;
    bool sourceEncryptionAlgorithmIsSet_;
    std::string destinationKeyId_;
    bool destinationKeyIdIsSet_;
    std::string destinationAdditionalAuthenticatedData_;
    bool destinationAdditionalAuthenticatedDataIsSet_;
    std::string destinationEncryptionAlgorithm_;
    bool destinationEncryptionAlgorithmIsSet_;
    std::string datakeyCipherLength_;
    bool datakeyCipherLengthIsSet_;
    std::string cipherText_;
    bool cipherTextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ReEncryptRequestBody_H_
