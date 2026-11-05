

#include "huaweicloud/rds/v3/model/SupabaseGitHubOAuthProviderReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseGitHubOAuthProviderReq::SupabaseGitHubOAuthProviderReq()
{
    enableGithub_ = false;
    enableGithubIsSet_ = false;
    oauthClientId_ = "";
    oauthClientIdIsSet_ = false;
    oauthClientSecret_ = "";
    oauthClientSecretIsSet_ = false;
    redirectUri_ = "";
    redirectUriIsSet_ = false;
}

SupabaseGitHubOAuthProviderReq::~SupabaseGitHubOAuthProviderReq() = default;

void SupabaseGitHubOAuthProviderReq::validate()
{
}

web::json::value SupabaseGitHubOAuthProviderReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableGithubIsSet_) {
        val[utility::conversions::to_string_t("enable_github")] = ModelBase::toJson(enableGithub_);
    }
    if(oauthClientIdIsSet_) {
        val[utility::conversions::to_string_t("oauth_client_id")] = ModelBase::toJson(oauthClientId_);
    }
    if(oauthClientSecretIsSet_) {
        val[utility::conversions::to_string_t("oauth_client_secret")] = ModelBase::toJson(oauthClientSecret_);
    }
    if(redirectUriIsSet_) {
        val[utility::conversions::to_string_t("redirect_uri")] = ModelBase::toJson(redirectUri_);
    }

    return val;
}
bool SupabaseGitHubOAuthProviderReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_github"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_github"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableGithub(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth_client_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oauth_client_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOauthClientId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth_client_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oauth_client_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOauthClientSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redirect_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectUri(refVal);
        }
    }
    return ok;
}


bool SupabaseGitHubOAuthProviderReq::isEnableGithub() const
{
    return enableGithub_;
}

void SupabaseGitHubOAuthProviderReq::setEnableGithub(bool value)
{
    enableGithub_ = value;
    enableGithubIsSet_ = true;
}

bool SupabaseGitHubOAuthProviderReq::enableGithubIsSet() const
{
    return enableGithubIsSet_;
}

void SupabaseGitHubOAuthProviderReq::unsetenableGithub()
{
    enableGithubIsSet_ = false;
}

std::string SupabaseGitHubOAuthProviderReq::getOauthClientId() const
{
    return oauthClientId_;
}

void SupabaseGitHubOAuthProviderReq::setOauthClientId(const std::string& value)
{
    oauthClientId_ = value;
    oauthClientIdIsSet_ = true;
}

bool SupabaseGitHubOAuthProviderReq::oauthClientIdIsSet() const
{
    return oauthClientIdIsSet_;
}

void SupabaseGitHubOAuthProviderReq::unsetoauthClientId()
{
    oauthClientIdIsSet_ = false;
}

std::string SupabaseGitHubOAuthProviderReq::getOauthClientSecret() const
{
    return oauthClientSecret_;
}

void SupabaseGitHubOAuthProviderReq::setOauthClientSecret(const std::string& value)
{
    oauthClientSecret_ = value;
    oauthClientSecretIsSet_ = true;
}

bool SupabaseGitHubOAuthProviderReq::oauthClientSecretIsSet() const
{
    return oauthClientSecretIsSet_;
}

void SupabaseGitHubOAuthProviderReq::unsetoauthClientSecret()
{
    oauthClientSecretIsSet_ = false;
}

std::string SupabaseGitHubOAuthProviderReq::getRedirectUri() const
{
    return redirectUri_;
}

void SupabaseGitHubOAuthProviderReq::setRedirectUri(const std::string& value)
{
    redirectUri_ = value;
    redirectUriIsSet_ = true;
}

bool SupabaseGitHubOAuthProviderReq::redirectUriIsSet() const
{
    return redirectUriIsSet_;
}

void SupabaseGitHubOAuthProviderReq::unsetredirectUri()
{
    redirectUriIsSet_ = false;
}

}
}
}
}
}


