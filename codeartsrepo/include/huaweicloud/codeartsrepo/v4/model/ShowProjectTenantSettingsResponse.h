
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowProjectTenantSettingsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowProjectTenantSettingsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowProjectTenantSettingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectTenantSettingsResponse();
    virtual ~ShowProjectTenantSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectTenantSettingsResponse members

    /// <summary>
    /// **参数解释：** 仓库默认加密设置是否开启。
    /// </summary>

    bool isDefaultEncryptionEnabled() const;
    bool defaultEncryptionEnabledIsSet() const;
    void unsetdefaultEncryptionEnabled();
    void setDefaultEncryptionEnabled(bool value);

    /// <summary>
    /// **参数解释：** 租户设置的加密类型。 **取值范围：** KMS,normal,null,当为KMS时表示开启了KMS加密。
    /// </summary>

    std::string getEncryptionType() const;
    bool encryptionTypeIsSet() const;
    void unsetencryptionType();
    void setEncryptionType(const std::string& value);

    /// <summary>
    /// **参数解释：** 允许公共访问。 **取值范围：** allow 允许 deny 拒绝。
    /// </summary>

    std::string getPermitPublic() const;
    bool permitPublicIsSet() const;
    void unsetpermitPublic();
    void setPermitPublic(const std::string& value);


protected:
    bool defaultEncryptionEnabled_;
    bool defaultEncryptionEnabledIsSet_;
    std::string encryptionType_;
    bool encryptionTypeIsSet_;
    std::string permitPublic_;
    bool permitPublicIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowProjectTenantSettingsResponse_H_
