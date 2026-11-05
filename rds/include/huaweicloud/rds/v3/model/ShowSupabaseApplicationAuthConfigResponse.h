
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationAuthConfigResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationAuthConfigResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseApiEmailOAuthProvider.h>
#include <huaweicloud/rds/v3/model/SupabaseApiGitHubOAuthProvider.h>
#include <string>
#include <huaweicloud/rds/v3/model/SupabaseApiEmailTemplate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowSupabaseApplicationAuthConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSupabaseApplicationAuthConfigResponse();
    virtual ~ShowSupabaseApplicationAuthConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSupabaseApplicationAuthConfigResponse members

    /// <summary>
    /// 
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    bool isEnableAccountSignUp() const;
    bool enableAccountSignUpIsSet() const;
    void unsetenableAccountSignUp();
    void setEnableAccountSignUp(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isEnableAnonymousUsers() const;
    bool enableAnonymousUsersIsSet() const;
    void unsetenableAnonymousUsers();
    void setEnableAnonymousUsers(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getApiExternalUrl() const;
    bool apiExternalUrlIsSet() const;
    void unsetapiExternalUrl();
    void setApiExternalUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSiteUrl() const;
    bool siteUrlIsSet() const;
    void unsetsiteUrl();
    void setSiteUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAllowRedirectUrls() const;
    bool allowRedirectUrlsIsSet() const;
    void unsetallowRedirectUrls();
    void setAllowRedirectUrls(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseApiGitHubOAuthProvider getGithubOauthProvider() const;
    bool githubOauthProviderIsSet() const;
    void unsetgithubOauthProvider();
    void setGithubOauthProvider(const SupabaseApiGitHubOAuthProvider& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseApiEmailOAuthProvider getEmailOauthProvider() const;
    bool emailOauthProviderIsSet() const;
    void unsetemailOauthProvider();
    void setEmailOauthProvider(const SupabaseApiEmailOAuthProvider& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseApiEmailTemplate getEmailTemplateConfig() const;
    bool emailTemplateConfigIsSet() const;
    void unsetemailTemplateConfig();
    void setEmailTemplateConfig(const SupabaseApiEmailTemplate& value);


protected:
    int64_t updatedTime_;
    bool updatedTimeIsSet_;
    bool enableAccountSignUp_;
    bool enableAccountSignUpIsSet_;
    bool enableAnonymousUsers_;
    bool enableAnonymousUsersIsSet_;
    std::string apiExternalUrl_;
    bool apiExternalUrlIsSet_;
    std::string siteUrl_;
    bool siteUrlIsSet_;
    std::string allowRedirectUrls_;
    bool allowRedirectUrlsIsSet_;
    SupabaseApiGitHubOAuthProvider githubOauthProvider_;
    bool githubOauthProviderIsSet_;
    SupabaseApiEmailOAuthProvider emailOauthProvider_;
    bool emailOauthProviderIsSet_;
    SupabaseApiEmailTemplate emailTemplateConfig_;
    bool emailTemplateConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationAuthConfigResponse_H_
