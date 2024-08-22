
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_EncryptDataRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_EncryptDataRequestBody_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  EncryptDataRequestBody
    : public ModelBase
{
public:
    EncryptDataRequestBody();
    virtual ~EncryptDataRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EncryptDataRequestBody members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 明文数据，1~4096字节，满足正则匹配“^.{1,4096}$”，且转化为byte数组后长度取值范围为1~4096字节。
    /// </summary>

    std::string getPlainText() const;
    bool plainTextIsSet() const;
    void unsetplainText();
    void setPlainText(const std::string& value);

    /// <summary>
    /// 数据加密算法，仅使用非对称密钥需要指定该参数，默认值为“SYMMETRIC_DEFAULT”，合法枚举值如下：  - SYMMETRIC_DEFAULT  - RSAES_OAEP_SHA_256  - SM2_ENCRYPT
    /// </summary>

    std::string getEncryptionAlgorithm() const;
    bool encryptionAlgorithmIsSet() const;
    void unsetencryptionAlgorithm();
    void setEncryptionAlgorithm(const std::string& value);

    /// <summary>
    /// 身份验证的非敏感额外数据。任意字符串，长度不超过128字节。
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
    std::string plainText_;
    bool plainTextIsSet_;
    std::string encryptionAlgorithm_;
    bool encryptionAlgorithmIsSet_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_EncryptDataRequestBody_H_
