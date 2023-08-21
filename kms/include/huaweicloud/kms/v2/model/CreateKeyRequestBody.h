
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyRequestBody_H_

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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateKeyRequestBody
    : public ModelBase
{
public:
    CreateKeyRequestBody();
    virtual ~CreateKeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateKeyRequestBody members

    /// <summary>
    /// 非默认主密钥别名，取值范围为1到255个字符，满足正则匹配“^[a-zA-Z0-9:/_-]{1,255}$”，且不与系统服务创建的默认主密钥别名重名。
    /// </summary>

    std::string getKeyAlias() const;
    bool keyAliasIsSet() const;
    void unsetkeyAlias();
    void setKeyAlias(const std::string& value);

    /// <summary>
    /// 密钥生成算法，默认为“AES_256”，枚举如下： - AES_256 - SM4 - RSA_2048 - RSA_3072 - RSA_4096 - EC_P256 - EC_P384 - SM2
    /// </summary>

    std::string getKeySpec() const;
    bool keySpecIsSet() const;
    void unsetkeySpec();
    void setKeySpec(const std::string& value);

    /// <summary>
    /// 密钥用途，对称密钥默认为“ENCRYPT_DECRYPT”，非对称密钥默认为“SIGN_VERIFY”，枚举如下： - ENCRYPT_DECRYPT - SIGN_VERIFY
    /// </summary>

    std::string getKeyUsage() const;
    bool keyUsageIsSet() const;
    void unsetkeyUsage();
    void setKeyUsage(const std::string& value);

    /// <summary>
    /// 密钥描述，取值0到255字符。
    /// </summary>

    std::string getKeyDescription() const;
    bool keyDescriptionIsSet() const;
    void unsetkeyDescription();
    void setKeyDescription(const std::string& value);

    /// <summary>
    /// 密钥来源，默认为“kms”，枚举如下： - kms：表示密钥材料由kms生成。 - external：表示密钥材料由外部导入。
    /// </summary>

    std::string getOrigin() const;
    bool originIsSet() const;
    void unsetorigin();
    void setOrigin(const std::string& value);

    /// <summary>
    /// 企业多项目ID。 - 用户未开通企业多项目时，不需要输入该字段。 - 用户开通企业多项目时，创建资源可以输入该字段。若用户户不输入该字段，默认创建属于默认企业多项目ID（ID为“0”）的资源。 注意：若用户没有默认企业多项目ID（ID为“0”）下的创建权限，则接口报错。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);

    /// <summary>
    /// 密钥库ID，默认使用KMS默认密钥库
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);


protected:
    std::string keyAlias_;
    bool keyAliasIsSet_;
    std::string keySpec_;
    bool keySpecIsSet_;
    std::string keyUsage_;
    bool keyUsageIsSet_;
    std::string keyDescription_;
    bool keyDescriptionIsSet_;
    std::string origin_;
    bool originIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;
    std::string keystoreId_;
    bool keystoreIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyRequestBody_H_
