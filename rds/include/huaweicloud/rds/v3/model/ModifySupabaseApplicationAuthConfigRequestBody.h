
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationAuthConfigRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationAuthConfigRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseGitHubOAuthProviderReq.h>
#include <huaweicloud/rds/v3/model/SupabaseEmailTemplateReq.h>
#include <string>
#include <huaweicloud/rds/v3/model/SupabaseEmailOAuthProviderReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Auth配置修改请求。部分更新：仅更新非空字段，省略&#x3D;不更新，传null&#x3D;保留。 @JsonInclude NON_EMPTY。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifySupabaseApplicationAuthConfigRequestBody
    : public ModelBase
{
public:
    ModifySupabaseApplicationAuthConfigRequestBody();
    virtual ~ModifySupabaseApplicationAuthConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifySupabaseApplicationAuthConfigRequestBody members

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
    /// 逗号分隔URL，最多10个。
    /// </summary>

    std::string getAllowRedirectUrls() const;
    bool allowRedirectUrlsIsSet() const;
    void unsetallowRedirectUrls();
    void setAllowRedirectUrls(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseGitHubOAuthProviderReq getGithubOauthProvider() const;
    bool githubOauthProviderIsSet() const;
    void unsetgithubOauthProvider();
    void setGithubOauthProvider(const SupabaseGitHubOAuthProviderReq& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseEmailOAuthProviderReq getEmailOauthProvider() const;
    bool emailOauthProviderIsSet() const;
    void unsetemailOauthProvider();
    void setEmailOauthProvider(const SupabaseEmailOAuthProviderReq& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseEmailTemplateReq getEmailTemplateConfig() const;
    bool emailTemplateConfigIsSet() const;
    void unsetemailTemplateConfig();
    void setEmailTemplateConfig(const SupabaseEmailTemplateReq& value);


protected:
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
    SupabaseGitHubOAuthProviderReq githubOauthProvider_;
    bool githubOauthProviderIsSet_;
    SupabaseEmailOAuthProviderReq emailOauthProvider_;
    bool emailOauthProviderIsSet_;
    SupabaseEmailTemplateReq emailTemplateConfig_;
    bool emailTemplateConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationAuthConfigRequestBody_H_
