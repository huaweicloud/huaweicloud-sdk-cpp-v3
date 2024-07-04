
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyDetails_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyDetails_H_


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
/// 密钥详情。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  KeyDetails
    : public ModelBase
{
public:
    KeyDetails();
    virtual ~KeyDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeyDetails members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 用户域ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 密钥别名。
    /// </summary>

    std::string getKeyAlias() const;
    bool keyAliasIsSet() const;
    void unsetkeyAlias();
    void setKeyAlias(const std::string& value);

    /// <summary>
    /// 密钥区域。
    /// </summary>

    std::string getRealm() const;
    bool realmIsSet() const;
    void unsetrealm();
    void setRealm(const std::string& value);

    /// <summary>
    /// 密钥生成算法。  - AES_256  - SM4  - RSA_2048  - RSA_3072  - RSA_4096  - EC_P256  - EC_P384  - SM2
    /// </summary>

    std::string getKeySpec() const;
    bool keySpecIsSet() const;
    void unsetkeySpec();
    void setKeySpec(const std::string& value);

    /// <summary>
    /// 密钥用途。 - ENCRYPT_DECRYPT - SIGN_VERIFY
    /// </summary>

    std::string getKeyUsage() const;
    bool keyUsageIsSet() const;
    void unsetkeyUsage();
    void setKeyUsage(const std::string& value);

    /// <summary>
    /// 密钥描述。
    /// </summary>

    std::string getKeyDescription() const;
    bool keyDescriptionIsSet() const;
    void unsetkeyDescription();
    void setKeyDescription(const std::string& value);

    /// <summary>
    /// 密钥创建时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    std::string getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const std::string& value);

    /// <summary>
    /// 密钥计划删除时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    std::string getScheduledDeletionDate() const;
    bool scheduledDeletionDateIsSet() const;
    void unsetscheduledDeletionDate();
    void setScheduledDeletionDate(const std::string& value);

    /// <summary>
    /// 密钥状态，满足正则匹配“^[1-5]{1}$”，枚举如下：  - “1”表示待激活状态  - “2”表示启用状态  - “3”表示禁用状态  - “4”表示计划删除状态  - “5”表示等待导入状态
    /// </summary>

    std::string getKeyState() const;
    bool keyStateIsSet() const;
    void unsetkeyState();
    void setKeyState(const std::string& value);

    /// <summary>
    /// 默认主密钥标识，默认主密钥标识为1，非默认标识为0。
    /// </summary>

    std::string getDefaultKeyFlag() const;
    bool defaultKeyFlagIsSet() const;
    void unsetdefaultKeyFlag();
    void setDefaultKeyFlag(const std::string& value);

    /// <summary>
    /// 密钥类型。
    /// </summary>

    std::string getKeyType() const;
    bool keyTypeIsSet() const;
    void unsetkeyType();
    void setKeyType(const std::string& value);

    /// <summary>
    /// 密钥材料失效时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    std::string getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(const std::string& value);

    /// <summary>
    /// 密钥来源，默认为“kms”，枚举如下：  - kms表示密钥材料由kms生成kms表示密钥材料由kms生成  - external表示密钥材料由外部导入
    /// </summary>

    std::string getOrigin() const;
    bool originIsSet() const;
    void unsetorigin();
    void setOrigin(const std::string& value);

    /// <summary>
    /// 密钥轮换状态，默认为“false”，表示关闭密钥轮换功能。
    /// </summary>

    std::string getKeyRotationEnabled() const;
    bool keyRotationEnabledIsSet() const;
    void unsetkeyRotationEnabled();
    void setKeyRotationEnabled(const std::string& value);

    /// <summary>
    /// 企业项目ID，默认为“0”。  - 对于开通企业项目的用户，表示资源处于默认企业项目下。  - 对于未开通企业项目的用户，表示资源未处于企业项目下。
    /// </summary>

    std::string getSysEnterpriseProjectId() const;
    bool sysEnterpriseProjectIdIsSet() const;
    void unsetsysEnterpriseProjectId();
    void setSysEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 密钥库ID
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// 密钥在加密机中的标签
    /// </summary>

    std::string getKeyLabel() const;
    bool keyLabelIsSet() const;
    void unsetkeyLabel();
    void setKeyLabel(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string keyAlias_;
    bool keyAliasIsSet_;
    std::string realm_;
    bool realmIsSet_;
    std::string keySpec_;
    bool keySpecIsSet_;
    std::string keyUsage_;
    bool keyUsageIsSet_;
    std::string keyDescription_;
    bool keyDescriptionIsSet_;
    std::string creationDate_;
    bool creationDateIsSet_;
    std::string scheduledDeletionDate_;
    bool scheduledDeletionDateIsSet_;
    std::string keyState_;
    bool keyStateIsSet_;
    std::string defaultKeyFlag_;
    bool defaultKeyFlagIsSet_;
    std::string keyType_;
    bool keyTypeIsSet_;
    std::string expirationTime_;
    bool expirationTimeIsSet_;
    std::string origin_;
    bool originIsSet_;
    std::string keyRotationEnabled_;
    bool keyRotationEnabledIsSet_;
    std::string sysEnterpriseProjectId_;
    bool sysEnterpriseProjectIdIsSet_;
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    std::string keyLabel_;
    bool keyLabelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyDetails_H_
