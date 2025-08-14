
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_IdentityProviderConfigDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_IdentityProviderConfigDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 身份提供商
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  IdentityProviderConfigDto
    : public ModelBase
{
public:
    IdentityProviderConfigDto();
    virtual ~IdentityProviderConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdentityProviderConfigDto members

    /// <summary>
    /// 身份提供商issuer
    /// </summary>

    std::string getIssuerUrl() const;
    bool issuerUrlIsSet() const;
    void unsetissuerUrl();
    void setIssuerUrl(const std::string& value);

    /// <summary>
    /// 身份提供商元数据
    /// </summary>

    std::string getMetadataUrl() const;
    bool metadataUrlIsSet() const;
    void unsetmetadataUrl();
    void setMetadataUrl(const std::string& value);

    /// <summary>
    /// 身份提供商远程登录链接
    /// </summary>

    std::string getRemoteLoginUrl() const;
    bool remoteLoginUrlIsSet() const;
    void unsetremoteLoginUrl();
    void setRemoteLoginUrl(const std::string& value);

    /// <summary>
    /// 身份提供商远程登出链接
    /// </summary>

    std::string getRemoteLogoutUrl() const;
    bool remoteLogoutUrlIsSet() const;
    void unsetremoteLogoutUrl();
    void setRemoteLogoutUrl(const std::string& value);


protected:
    std::string issuerUrl_;
    bool issuerUrlIsSet_;
    std::string metadataUrl_;
    bool metadataUrlIsSet_;
    std::string remoteLoginUrl_;
    bool remoteLoginUrlIsSet_;
    std::string remoteLogoutUrl_;
    bool remoteLogoutUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_IdentityProviderConfigDto_H_
