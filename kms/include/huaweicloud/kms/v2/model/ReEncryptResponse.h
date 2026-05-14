
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ReEncryptResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ReEncryptResponse_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  ReEncryptResponse
    : public ModelBase, public HttpResponse
{
public:
    ReEncryptResponse();
    virtual ~ReEncryptResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReEncryptResponse members

    /// <summary>
    /// 重新加密时使用的密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 加密原密文时使用的密钥ID
    /// </summary>

    std::string getSourceKeyId() const;
    bool sourceKeyIdIsSet() const;
    void unsetsourceKeyId();
    void setSourceKeyId(const std::string& value);

    /// <summary>
    /// 原密文加密时使用的加密算法
    /// </summary>

    std::string getSourceEncryptionAlgorithm() const;
    bool sourceEncryptionAlgorithmIsSet() const;
    void unsetsourceEncryptionAlgorithm();
    void setSourceEncryptionAlgorithm(const std::string& value);

    /// <summary>
    /// 重新加密时使用的加密算法
    /// </summary>

    std::string getDestinationEncryptionAlgorithm() const;
    bool destinationEncryptionAlgorithmIsSet() const;
    void unsetdestinationEncryptionAlgorithm();
    void setDestinationEncryptionAlgorithm(const std::string& value);

    /// <summary>
    /// 重新加密后的密文
    /// </summary>

    std::string getCipherText() const;
    bool cipherTextIsSet() const;
    void unsetcipherText();
    void setCipherText(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string sourceKeyId_;
    bool sourceKeyIdIsSet_;
    std::string sourceEncryptionAlgorithm_;
    bool sourceEncryptionAlgorithmIsSet_;
    std::string destinationEncryptionAlgorithm_;
    bool destinationEncryptionAlgorithmIsSet_;
    std::string cipherText_;
    bool cipherTextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ReEncryptResponse_H_
