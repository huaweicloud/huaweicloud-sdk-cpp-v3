
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseGitHubOAuthProviderReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseGitHubOAuthProviderReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// enable_github&#x3D;false时清空oauth_client_id/secret/redirect_uri。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseGitHubOAuthProviderReq
    : public ModelBase
{
public:
    SupabaseGitHubOAuthProviderReq();
    virtual ~SupabaseGitHubOAuthProviderReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseGitHubOAuthProviderReq members

    /// <summary>
    /// 
    /// </summary>

    bool isEnableGithub() const;
    bool enableGithubIsSet() const;
    void unsetenableGithub();
    void setEnableGithub(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOauthClientId() const;
    bool oauthClientIdIsSet() const;
    void unsetoauthClientId();
    void setOauthClientId(const std::string& value);

    /// <summary>
    /// 秘密，受控输入，show不返回。
    /// </summary>

    std::string getOauthClientSecret() const;
    bool oauthClientSecretIsSet() const;
    void unsetoauthClientSecret();
    void setOauthClientSecret(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRedirectUri() const;
    bool redirectUriIsSet() const;
    void unsetredirectUri();
    void setRedirectUri(const std::string& value);


protected:
    bool enableGithub_;
    bool enableGithubIsSet_;
    std::string oauthClientId_;
    bool oauthClientIdIsSet_;
    std::string oauthClientSecret_;
    bool oauthClientSecretIsSet_;
    std::string redirectUri_;
    bool redirectUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseGitHubOAuthProviderReq_H_
