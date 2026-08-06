
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyCapsuleRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyCapsuleRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateDatakeyCapsuleRequestBody
    : public ModelBase
{
public:
    CreateDatakeyCapsuleRequestBody();
    virtual ~CreateDatakeyCapsuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatakeyCapsuleRequestBody members

    /// <summary>
    /// **参数解释：** 密钥ID **约束限制：** UUID格式，满足正则表达式^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 待创建的数据密钥长度 **约束限制：** 256或者128二选一 **取值范围：** - 128 - 256 **默认取值：** 不涉及
    /// </summary>

    std::string getDatakeyLength() const;
    bool datakeyLengthIsSet() const;
    void unsetdatakeyLength();
    void setDatakeyLength(const std::string& value);

    /// <summary>
    /// **参数解释：** 公钥信息，使用RSAES_OAEP_SHA_256算法加密；如果传递了public_key，KMS会使用该公钥对明文数据密钥进行加密，并返回加密后的数据密钥 **约束限制：** 仅支持RSA公钥 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略ID和内联的密钥策略二选一 **约束限制：** 仅支持RSA公钥 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略ID和内联的密钥策略二选一 **约束限制：** 仅支持RSA公钥 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyPolicy() const;
    bool keyPolicyIsSet() const;
    void unsetkeyPolicy();
    void setKeyPolicy(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string datakeyLength_;
    bool datakeyLengthIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::string keyPolicy_;
    bool keyPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyCapsuleRequestBody_H_
