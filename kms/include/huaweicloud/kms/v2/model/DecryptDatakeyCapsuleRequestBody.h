
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/DecryptDatakeyCapsuleRequestBody_attestation_document.h>
#include <string>

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
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDatakeyCapsuleRequestBody
    : public ModelBase
{
public:
    DecryptDatakeyCapsuleRequestBody();
    virtual ~DecryptDatakeyCapsuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DecryptDatakeyCapsuleRequestBody members

    /// <summary>
    /// **参数解释：** 密钥ID **约束限制：** UUID格式，满足正则表达式^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 公钥信息，使用RSAES_OAEP_SHA_256算法加密；如果传递了public_key，KMS会使用该公钥对明文数据密钥进行加密，并返回加密后的数据密钥 **约束限制：** 仅支持RSA公钥 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥胶囊 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDatakeyCapsule() const;
    bool datakeyCapsuleIsSet() const;
    void unsetdatakeyCapsule();
    void setDatakeyCapsule(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DecryptDatakeyCapsuleRequestBody_attestation_document getAttestationDocument() const;
    bool attestationDocumentIsSet() const;
    void unsetattestationDocument();
    void setAttestationDocument(const DecryptDatakeyCapsuleRequestBody_attestation_document& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string datakeyCapsule_;
    bool datakeyCapsuleIsSet_;
    DecryptDatakeyCapsuleRequestBody_attestation_document attestationDocument_;
    bool attestationDocumentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleRequestBody_H_
