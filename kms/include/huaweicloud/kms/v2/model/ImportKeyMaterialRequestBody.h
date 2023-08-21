
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ImportKeyMaterialRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ImportKeyMaterialRequestBody_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_KMS_V2_EXPORT  ImportKeyMaterialRequestBody
    : public ModelBase
{
public:
    ImportKeyMaterialRequestBody();
    virtual ~ImportKeyMaterialRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ImportKeyMaterialRequestBody members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥导入令牌，base64格式，满足正则匹配“^[0-9a-zA-Z+/&#x3D;]{200,6144}$”。
    /// </summary>

    std::string getImportToken() const;
    bool importTokenIsSet() const;
    void unsetimportToken();
    void setImportToken(const std::string& value);

    /// <summary>
    /// 加密后的对称密钥材料，base64格式，满足正则匹配“^[0-9a-zA-Z+/&#x3D;]{344,360}$”。若导入非对称密钥，则该参数为用于加密私钥的临时中间密钥。
    /// </summary>

    std::string getEncryptedKeyMaterial() const;
    bool encryptedKeyMaterialIsSet() const;
    void unsetencryptedKeyMaterial();
    void setEncryptedKeyMaterial(const std::string& value);

    /// <summary>
    /// 使用临时中间密钥加密后的私钥，导入非对称密钥需要该参数，base64格式，满足正则匹配“^[0-9a-zA-Z+/&#x3D;]{200,6144}$”。
    /// </summary>

    std::string getEncryptedPrivatekey() const;
    bool encryptedPrivatekeyIsSet() const;
    void unsetencryptedPrivatekey();
    void setEncryptedPrivatekey(const std::string& value);

    /// <summary>
    /// 密钥材料到期时间，时间戳，即从1970年1月1日至该时间的总秒数，KMS会在该时间的24小时内删除密钥材料。 例如：1550291833
    /// </summary>

    int64_t getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(int64_t value);

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
    std::string importToken_;
    bool importTokenIsSet_;
    std::string encryptedKeyMaterial_;
    bool encryptedKeyMaterialIsSet_;
    std::string encryptedPrivatekey_;
    bool encryptedPrivatekeyIsSet_;
    int64_t expirationTime_;
    bool expirationTimeIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ImportKeyMaterialRequestBody_H_
