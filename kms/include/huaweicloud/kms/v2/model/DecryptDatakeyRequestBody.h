
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyRequestBody_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDatakeyRequestBody
    : public ModelBase
{
public:
    DecryptDatakeyRequestBody();
    virtual ~DecryptDatakeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DecryptDatakeyRequestBody members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// DEK密文及元数据的16进制字符串。取值为加密数据密钥结果中的cipher_text的值。
    /// </summary>

    std::string getCipherText() const;
    bool cipherTextIsSet() const;
    void unsetcipherText();
    void setCipherText(const std::string& value);

    /// <summary>
    /// 密钥字节长度，取值范围为1~1024。 密钥字节长度，取值为“64”。
    /// </summary>

    std::string getDatakeyCipherLength() const;
    bool datakeyCipherLengthIsSet() const;
    void unsetdatakeyCipherLength();
    void setDatakeyCipherLength(const std::string& value);

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
    std::string cipherText_;
    bool cipherTextIsSet_;
    std::string datakeyCipherLength_;
    bool datakeyCipherLengthIsSet_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyRequestBody_H_
