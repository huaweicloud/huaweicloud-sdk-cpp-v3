
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantRequestBody_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateGrantRequestBody
    : public ModelBase
{
public:
    CreateGrantRequestBody();
    virtual ~CreateGrantRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateGrantRequestBody members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 被授权用户ID，1~64字节，满足正则匹配“^[a-zA-Z0-9]{1，64}$”。 例如：0d0466b00d0466b00d0466b00d0466b0
    /// </summary>

    std::string getGranteePrincipal() const;
    bool granteePrincipalIsSet() const;
    void unsetgranteePrincipal();
    void setGranteePrincipal(const std::string& value);

    /// <summary>
    /// 授权允许的操作列表。 有效的值：“create-datakey”，“create-datakey-without-plaintext”，“encrypt-datakey”，“decrypt-datakey”，“describe-key”，“create-grant”，“retire-grant”，“encrypt-data”，“decrypt-data”。 有效值不能仅为“create-grant”。  - “create-datakey” 创建数据密钥  - “create-datakey-without-plaintext” 创建不含明文数据密钥  - “encrypt-datakey” 加密数据密钥  - “decrypt-datakey” 解密数据密钥  - “describe-key” 查询密钥信息  - “retire-grant” 退役授权  - “encrypt-data” 加密数据  - “decrypt-data” 解密数据
    /// </summary>

    std::vector<std::string>& getOperations();
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::vector<std::string>& value);

    /// <summary>
    /// 授权名称，取值1到255字符，满足正则匹配“^[a-zA-Z0-9:/_-]{1,255}$”。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 可退役授权的用户ID，1~64字节，满足正则匹配“^[a-zA-Z0-9]{1，64}$”。 例如：0d0466b00d0466b00d0466b00d0466b0
    /// </summary>

    std::string getRetiringPrincipal() const;
    bool retiringPrincipalIsSet() const;
    void unsetretiringPrincipal();
    void setRetiringPrincipal(const std::string& value);

    /// <summary>
    /// 授权类型。有效值：“user”，“domain”。默认值为“user”。
    /// </summary>

    std::string getGranteePrincipalType() const;
    bool granteePrincipalTypeIsSet() const;
    void unsetgranteePrincipalType();
    void setGranteePrincipalType(const std::string& value);

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
    std::string granteePrincipal_;
    bool granteePrincipalIsSet_;
    std::vector<std::string> operations_;
    bool operationsIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string retiringPrincipal_;
    bool retiringPrincipalIsSet_;
    std::string granteePrincipalType_;
    bool granteePrincipalTypeIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantRequestBody_H_
