

#include "huaweicloud/rds/v3/model/ShowSupabaseApplicationAuthConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSupabaseApplicationAuthConfigResponse::ShowSupabaseApplicationAuthConfigResponse()
{
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
    enableAccountSignUp_ = false;
    enableAccountSignUpIsSet_ = false;
    enableAnonymousUsers_ = false;
    enableAnonymousUsersIsSet_ = false;
    apiExternalUrl_ = "";
    apiExternalUrlIsSet_ = false;
    siteUrl_ = "";
    siteUrlIsSet_ = false;
    allowRedirectUrls_ = "";
    allowRedirectUrlsIsSet_ = false;
    githubOauthProviderIsSet_ = false;
    emailOauthProviderIsSet_ = false;
    emailTemplateConfigIsSet_ = false;
}

ShowSupabaseApplicationAuthConfigResponse::~ShowSupabaseApplicationAuthConfigResponse() = default;

void ShowSupabaseApplicationAuthConfigResponse::validate()
{
}

web::json::value ShowSupabaseApplicationAuthConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(enableAccountSignUpIsSet_) {
        val[utility::conversions::to_string_t("enable_account_sign_up")] = ModelBase::toJson(enableAccountSignUp_);
    }
    if(enableAnonymousUsersIsSet_) {
        val[utility::conversions::to_string_t("enable_anonymous_users")] = ModelBase::toJson(enableAnonymousUsers_);
    }
    if(apiExternalUrlIsSet_) {
        val[utility::conversions::to_string_t("api_external_url")] = ModelBase::toJson(apiExternalUrl_);
    }
    if(siteUrlIsSet_) {
        val[utility::conversions::to_string_t("site_url")] = ModelBase::toJson(siteUrl_);
    }
    if(allowRedirectUrlsIsSet_) {
        val[utility::conversions::to_string_t("allow_redirect_urls")] = ModelBase::toJson(allowRedirectUrls_);
    }
    if(githubOauthProviderIsSet_) {
        val[utility::conversions::to_string_t("github_oauth_provider")] = ModelBase::toJson(githubOauthProvider_);
    }
    if(emailOauthProviderIsSet_) {
        val[utility::conversions::to_string_t("email_oauth_provider")] = ModelBase::toJson(emailOauthProvider_);
    }
    if(emailTemplateConfigIsSet_) {
        val[utility::conversions::to_string_t("email_template_config")] = ModelBase::toJson(emailTemplateConfig_);
    }

    return val;
}
bool ShowSupabaseApplicationAuthConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_account_sign_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_account_sign_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAccountSignUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_anonymous_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_anonymous_users"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAnonymousUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_external_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_external_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiExternalUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("site_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("site_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSiteUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_redirect_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_redirect_urls"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowRedirectUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("github_oauth_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("github_oauth_provider"));
        if(!fieldValue.is_null())
        {
            SupabaseApiGitHubOAuthProvider refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGithubOauthProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email_oauth_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email_oauth_provider"));
        if(!fieldValue.is_null())
        {
            SupabaseApiEmailOAuthProvider refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailOauthProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email_template_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email_template_config"));
        if(!fieldValue.is_null())
        {
            SupabaseApiEmailTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailTemplateConfig(refVal);
        }
    }
    return ok;
}


int64_t ShowSupabaseApplicationAuthConfigResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowSupabaseApplicationAuthConfigResponse::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

bool ShowSupabaseApplicationAuthConfigResponse::isEnableAccountSignUp() const
{
    return enableAccountSignUp_;
}

void ShowSupabaseApplicationAuthConfigResponse::setEnableAccountSignUp(bool value)
{
    enableAccountSignUp_ = value;
    enableAccountSignUpIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::enableAccountSignUpIsSet() const
{
    return enableAccountSignUpIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetenableAccountSignUp()
{
    enableAccountSignUpIsSet_ = false;
}

bool ShowSupabaseApplicationAuthConfigResponse::isEnableAnonymousUsers() const
{
    return enableAnonymousUsers_;
}

void ShowSupabaseApplicationAuthConfigResponse::setEnableAnonymousUsers(bool value)
{
    enableAnonymousUsers_ = value;
    enableAnonymousUsersIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::enableAnonymousUsersIsSet() const
{
    return enableAnonymousUsersIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetenableAnonymousUsers()
{
    enableAnonymousUsersIsSet_ = false;
}

std::string ShowSupabaseApplicationAuthConfigResponse::getApiExternalUrl() const
{
    return apiExternalUrl_;
}

void ShowSupabaseApplicationAuthConfigResponse::setApiExternalUrl(const std::string& value)
{
    apiExternalUrl_ = value;
    apiExternalUrlIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::apiExternalUrlIsSet() const
{
    return apiExternalUrlIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetapiExternalUrl()
{
    apiExternalUrlIsSet_ = false;
}

std::string ShowSupabaseApplicationAuthConfigResponse::getSiteUrl() const
{
    return siteUrl_;
}

void ShowSupabaseApplicationAuthConfigResponse::setSiteUrl(const std::string& value)
{
    siteUrl_ = value;
    siteUrlIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::siteUrlIsSet() const
{
    return siteUrlIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetsiteUrl()
{
    siteUrlIsSet_ = false;
}

std::string ShowSupabaseApplicationAuthConfigResponse::getAllowRedirectUrls() const
{
    return allowRedirectUrls_;
}

void ShowSupabaseApplicationAuthConfigResponse::setAllowRedirectUrls(const std::string& value)
{
    allowRedirectUrls_ = value;
    allowRedirectUrlsIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::allowRedirectUrlsIsSet() const
{
    return allowRedirectUrlsIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetallowRedirectUrls()
{
    allowRedirectUrlsIsSet_ = false;
}

SupabaseApiGitHubOAuthProvider ShowSupabaseApplicationAuthConfigResponse::getGithubOauthProvider() const
{
    return githubOauthProvider_;
}

void ShowSupabaseApplicationAuthConfigResponse::setGithubOauthProvider(const SupabaseApiGitHubOAuthProvider& value)
{
    githubOauthProvider_ = value;
    githubOauthProviderIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::githubOauthProviderIsSet() const
{
    return githubOauthProviderIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetgithubOauthProvider()
{
    githubOauthProviderIsSet_ = false;
}

SupabaseApiEmailOAuthProvider ShowSupabaseApplicationAuthConfigResponse::getEmailOauthProvider() const
{
    return emailOauthProvider_;
}

void ShowSupabaseApplicationAuthConfigResponse::setEmailOauthProvider(const SupabaseApiEmailOAuthProvider& value)
{
    emailOauthProvider_ = value;
    emailOauthProviderIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::emailOauthProviderIsSet() const
{
    return emailOauthProviderIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetemailOauthProvider()
{
    emailOauthProviderIsSet_ = false;
}

SupabaseApiEmailTemplate ShowSupabaseApplicationAuthConfigResponse::getEmailTemplateConfig() const
{
    return emailTemplateConfig_;
}

void ShowSupabaseApplicationAuthConfigResponse::setEmailTemplateConfig(const SupabaseApiEmailTemplate& value)
{
    emailTemplateConfig_ = value;
    emailTemplateConfigIsSet_ = true;
}

bool ShowSupabaseApplicationAuthConfigResponse::emailTemplateConfigIsSet() const
{
    return emailTemplateConfigIsSet_;
}

void ShowSupabaseApplicationAuthConfigResponse::unsetemailTemplateConfig()
{
    emailTemplateConfigIsSet_ = false;
}

}
}
}
}
}


