

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationAuthConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationAuthConfigRequestBody::ModifySupabaseApplicationAuthConfigRequestBody()
{
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

ModifySupabaseApplicationAuthConfigRequestBody::~ModifySupabaseApplicationAuthConfigRequestBody() = default;

void ModifySupabaseApplicationAuthConfigRequestBody::validate()
{
}

web::json::value ModifySupabaseApplicationAuthConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ModifySupabaseApplicationAuthConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            SupabaseGitHubOAuthProviderReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGithubOauthProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email_oauth_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email_oauth_provider"));
        if(!fieldValue.is_null())
        {
            SupabaseEmailOAuthProviderReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailOauthProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email_template_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email_template_config"));
        if(!fieldValue.is_null())
        {
            SupabaseEmailTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailTemplateConfig(refVal);
        }
    }
    return ok;
}


bool ModifySupabaseApplicationAuthConfigRequestBody::isEnableAccountSignUp() const
{
    return enableAccountSignUp_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setEnableAccountSignUp(bool value)
{
    enableAccountSignUp_ = value;
    enableAccountSignUpIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::enableAccountSignUpIsSet() const
{
    return enableAccountSignUpIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetenableAccountSignUp()
{
    enableAccountSignUpIsSet_ = false;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::isEnableAnonymousUsers() const
{
    return enableAnonymousUsers_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setEnableAnonymousUsers(bool value)
{
    enableAnonymousUsers_ = value;
    enableAnonymousUsersIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::enableAnonymousUsersIsSet() const
{
    return enableAnonymousUsersIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetenableAnonymousUsers()
{
    enableAnonymousUsersIsSet_ = false;
}

std::string ModifySupabaseApplicationAuthConfigRequestBody::getApiExternalUrl() const
{
    return apiExternalUrl_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setApiExternalUrl(const std::string& value)
{
    apiExternalUrl_ = value;
    apiExternalUrlIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::apiExternalUrlIsSet() const
{
    return apiExternalUrlIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetapiExternalUrl()
{
    apiExternalUrlIsSet_ = false;
}

std::string ModifySupabaseApplicationAuthConfigRequestBody::getSiteUrl() const
{
    return siteUrl_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setSiteUrl(const std::string& value)
{
    siteUrl_ = value;
    siteUrlIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::siteUrlIsSet() const
{
    return siteUrlIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetsiteUrl()
{
    siteUrlIsSet_ = false;
}

std::string ModifySupabaseApplicationAuthConfigRequestBody::getAllowRedirectUrls() const
{
    return allowRedirectUrls_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setAllowRedirectUrls(const std::string& value)
{
    allowRedirectUrls_ = value;
    allowRedirectUrlsIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::allowRedirectUrlsIsSet() const
{
    return allowRedirectUrlsIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetallowRedirectUrls()
{
    allowRedirectUrlsIsSet_ = false;
}

SupabaseGitHubOAuthProviderReq ModifySupabaseApplicationAuthConfigRequestBody::getGithubOauthProvider() const
{
    return githubOauthProvider_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setGithubOauthProvider(const SupabaseGitHubOAuthProviderReq& value)
{
    githubOauthProvider_ = value;
    githubOauthProviderIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::githubOauthProviderIsSet() const
{
    return githubOauthProviderIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetgithubOauthProvider()
{
    githubOauthProviderIsSet_ = false;
}

SupabaseEmailOAuthProviderReq ModifySupabaseApplicationAuthConfigRequestBody::getEmailOauthProvider() const
{
    return emailOauthProvider_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setEmailOauthProvider(const SupabaseEmailOAuthProviderReq& value)
{
    emailOauthProvider_ = value;
    emailOauthProviderIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::emailOauthProviderIsSet() const
{
    return emailOauthProviderIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetemailOauthProvider()
{
    emailOauthProviderIsSet_ = false;
}

SupabaseEmailTemplateReq ModifySupabaseApplicationAuthConfigRequestBody::getEmailTemplateConfig() const
{
    return emailTemplateConfig_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::setEmailTemplateConfig(const SupabaseEmailTemplateReq& value)
{
    emailTemplateConfig_ = value;
    emailTemplateConfigIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigRequestBody::emailTemplateConfigIsSet() const
{
    return emailTemplateConfigIsSet_;
}

void ModifySupabaseApplicationAuthConfigRequestBody::unsetemailTemplateConfig()
{
    emailTemplateConfigIsSet_ = false;
}

}
}
}
}
}


