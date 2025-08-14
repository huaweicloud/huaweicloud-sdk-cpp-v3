
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyRequestBody_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateDatakeyRequestBody
    : public ModelBase
{
public:
    CreateDatakeyRequestBody();
    virtual ~CreateDatakeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatakeyRequestBody members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 指定生成的密钥bit位长度。有效值：AES_256、AES_128、SM4、HMAC_256、HMAC_384、HMAC_512、HMAC_SM3。  - AES_256：表示256比特的对称密钥。  - AES_128：表示128比特的对称密钥。  - SM4：表示SM4密钥。  - HMAC_256：表示HMAC_256密钥。  - HMAC_384：表示HMAC_384密钥。  - HMAC_512：表示HMAC_512密钥。  - HMAC_SM3：表示HMAC_SM3密钥。     说明：  datakey_length和key_spec二选一。   - 若datakey_length和key_spec都为空，默认生成256bit的密钥。   - 若datakey_length和key_spec都指定了值，仅datakey_length生效。
    /// </summary>

    std::string getKeySpec() const;
    bool keySpecIsSet() const;
    void unsetkeySpec();
    void setKeySpec(const std::string& value);

    /// <summary>
    /// 密钥bit位长度。取值为8的倍数，取值范围为8~8192。 说明：  datakey_length和key_spec二选一。   - 若datakey_length和key_spec都为空，默认生成256bit的密钥。   - 若datakey_length和key_spec都指定了值，仅datakey_length生效。
    /// </summary>

    std::string getDatakeyLength() const;
    bool datakeyLengthIsSet() const;
    void unsetdatakeyLength();
    void setDatakeyLength(const std::string& value);

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

    /// <summary>
    /// pin码，用于数据密钥的认证，仅四级密评场景生效
    /// </summary>

    std::string getPin() const;
    bool pinIsSet() const;
    void unsetpin();
    void setPin(const std::string& value);

    /// <summary>
    /// pin码的类型，默认为“CipherText”： - PlainText：表示明文pin - CipherText：表示密文pin
    /// </summary>

    std::string getPinType() const;
    bool pinTypeIsSet() const;
    void unsetpinType();
    void setPinType(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keySpec_;
    bool keySpecIsSet_;
    std::string datakeyLength_;
    bool datakeyLengthIsSet_;
    std::string additionalAuthenticatedData_;
    bool additionalAuthenticatedDataIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;
    std::string pin_;
    bool pinIsSet_;
    std::string pinType_;
    bool pinTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyRequestBody_H_
