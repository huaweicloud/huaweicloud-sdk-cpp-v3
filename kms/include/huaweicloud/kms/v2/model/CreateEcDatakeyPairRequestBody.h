
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateEcDatakeyPairRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateEcDatakeyPairRequestBody_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateEcDatakeyPairRequestBody
    : public ModelBase
{
public:
    CreateEcDatakeyPairRequestBody();
    virtual ~CreateEcDatakeyPairRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEcDatakeyPairRequestBody members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 需要包含算法、长度、曲线信息。可选值有ECC_NIST_P256 | ECC_NIST_P384 | ECC_NIST_P521 | ECC_SECG_P256K1 | SM2
    /// </summary>

    std::string getKeySpec() const;
    bool keySpecIsSet() const;
    void unsetkeySpec();
    void setKeySpec(const std::string& value);

    /// <summary>
    /// 是否返回明文私钥，默认为true
    /// </summary>

    bool isWithPlainText() const;
    bool withPlainTextIsSet() const;
    void unsetwithPlainText();
    void setWithPlainText(bool value);

    /// <summary>
    /// 认证加密的额外信息，请不要填写敏感信息
    /// </summary>

    std::string getAdditionalAuthenticatedData() const;
    bool additionalAuthenticatedDataIsSet() const;
    void unsetadditionalAuthenticatedData();
    void setAdditionalAuthenticatedData(const std::string& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keySpec_;
    bool keySpecIsSet_;
    bool withPlainText_;
    bool withPlainTextIsSet_;
    std::string additionalAuthenticatedData_;
    bool additionalAuthenticatedDataIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateEcDatakeyPairRequestBody_H_
