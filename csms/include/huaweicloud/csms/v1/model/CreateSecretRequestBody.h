
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建凭据请求消息体。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretRequestBody
    : public ModelBase
{
public:
    CreateSecretRequestBody();
    virtual ~CreateSecretRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretRequestBody members

    /// <summary>
    /// 凭据名称。  约束：取值范围为1到64个字符，满足正则匹配“^[a-zA-Z0-9._-]{1,64}$”。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用于加密保护凭据值的KMS主密钥ID，如果您未指定此参数，凭据管理服务将默认使用名为csms/default的默认主密钥，用于加密您帐号在本项目中创建的凭据值。如果用户帐号下不存在该名称的主密钥，则凭据管理服务自动为您创建该名称的密钥。
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// 凭据的描述信息。  约束：2048字节。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 二进制类型凭据在base64编码后的明文，凭据管理服务将其加密后，存入凭据的初始版本中。  类型：base64编码的二进制数据对象。  约束：secret_binary和secret_string必须且只能设置一个，最大32K。 
    /// </summary>

    std::string getSecretBinary() const;
    bool secretBinaryIsSet() const;
    void unsetsecretBinary();
    void setSecretBinary(const std::string& value);

    /// <summary>
    /// 文本类型凭据的明文，凭据管理服务将其加密后，存入凭据的初始版本中。  约束：secret_binary和secret_string必须且只能设置一个，最大32K。 
    /// </summary>

    std::string getSecretString() const;
    bool secretStringIsSet() const;
    void unsetsecretString();
    void setSecretString(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string secretBinary_;
    bool secretBinaryIsSet_;
    std::string secretString_;
    bool secretStringIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretRequestBody_H_
