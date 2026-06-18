
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantRepoEncryptionSettingRequestDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantRepoEncryptionSettingRequestDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  TenantRepoEncryptionSettingRequestDto
    : public ModelBase
{
public:
    TenantRepoEncryptionSettingRequestDto();
    virtual ~TenantRepoEncryptionSettingRequestDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TenantRepoEncryptionSettingRequestDto members

    /// <summary>
    /// **参数解释：** 租户id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密类型。 **取值范围：** KMS表示开启KMS加密，normal或者null表示未开启KMS加密。
    /// </summary>

    std::string getEncryptionType() const;
    bool encryptionTypeIsSet() const;
    void unsetencryptionType();
    void setEncryptionType(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启租户下默认加密设置。
    /// </summary>

    bool isDefaultEncryptionEnabled() const;
    bool defaultEncryptionEnabledIsSet() const;
    void unsetdefaultEncryptionEnabled();
    void setDefaultEncryptionEnabled(bool value);

    /// <summary>
    /// **参数解释：** 加密主密钥的名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCmkKeyName() const;
    bool cmkKeyNameIsSet() const;
    void unsetcmkKeyName();
    void setCmkKeyName(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密主密钥的id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCmkKeyId() const;
    bool cmkKeyIdIsSet() const;
    void unsetcmkKeyId();
    void setCmkKeyId(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string encryptionType_;
    bool encryptionTypeIsSet_;
    bool defaultEncryptionEnabled_;
    bool defaultEncryptionEnabledIsSet_;
    std::string cmkKeyName_;
    bool cmkKeyNameIsSet_;
    std::string cmkKeyId_;
    bool cmkKeyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantRepoEncryptionSettingRequestDto_H_
