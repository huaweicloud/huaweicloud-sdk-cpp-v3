
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleRequestBody_attestation_document_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleRequestBody_attestation_document_H_


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
/// **参数解释：** 接入点证明文档 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDatakeyCapsuleRequestBody_attestation_document
    : public ModelBase
{
public:
    DecryptDatakeyCapsuleRequestBody_attestation_document();
    virtual ~DecryptDatakeyCapsuleRequestBody_attestation_document();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DecryptDatakeyCapsuleRequestBody_attestation_document members

    /// <summary>
    /// **参数解释：** ECS证明文档 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getEcsSignature() const;
    bool ecsSignatureIsSet() const;
    void unsetecsSignature();
    void setEcsSignature(const std::string& value);

    /// <summary>
    /// **参数解释：** 通用类型接入点的签名信息 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getCustomSignature() const;
    bool customSignatureIsSet() const;
    void unsetcustomSignature();
    void setCustomSignature(const std::string& value);

    /// <summary>
    /// **参数解释：** 通用类型接入点公钥信息 **约束限制：** 格式是X509公钥格式中的Base64字符串 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getCustomPublicKey() const;
    bool customPublicKeyIsSet() const;
    void unsetcustomPublicKey();
    void setCustomPublicKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 通用类型签名信息过期时间 **约束限制：** 时间格式是ISO 8601格式，yyyy-mm-ddTHH:MM:SSZ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// **参数解释：** CCE类型访问凭证 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getServiceToken() const;
    bool serviceTokenIsSet() const;
    void unsetserviceToken();
    void setServiceToken(const std::string& value);


protected:
    std::string ecsSignature_;
    bool ecsSignatureIsSet_;
    std::string customSignature_;
    bool customSignatureIsSet_;
    std::string customPublicKey_;
    bool customPublicKeyIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    std::string serviceToken_;
    bool serviceTokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyCapsuleRequestBody_attestation_document_H_
