

#include "huaweicloud/rds/v3/model/SupabaseApiGitHubOAuthProvider.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseApiGitHubOAuthProvider::SupabaseApiGitHubOAuthProvider()
{
    enableGithub_ = false;
    enableGithubIsSet_ = false;
    oauthClientId_ = "";
    oauthClientIdIsSet_ = false;
    redirectUri_ = "";
    redirectUriIsSet_ = false;
}

SupabaseApiGitHubOAuthProvider::~SupabaseApiGitHubOAuthProvider() = default;

void SupabaseApiGitHubOAuthProvider::validate()
{
}

web::json::value SupabaseApiGitHubOAuthProvider::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableGithubIsSet_) {
        val[utility::conversions::to_string_t("enable_github")] = ModelBase::toJson(enableGithub_);
    }
    if(oauthClientIdIsSet_) {
        val[utility::conversions::to_string_t("oauth_client_id")] = ModelBase::toJson(oauthClientId_);
    }
    if(redirectUriIsSet_) {
        val[utility::conversions::to_string_t("redirect_uri")] = ModelBase::toJson(redirectUri_);
    }

    return val;
}
bool SupabaseApiGitHubOAuthProvider::fromJson(const web::json::value& val)
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


bool SupabaseApiGitHubOAuthProvider::isEnableGithub() const
{
    return enableGithub_;
}

void SupabaseApiGitHubOAuthProvider::setEnableGithub(bool value)
{
    enableGithub_ = value;
    enableGithubIsSet_ = true;
}

bool SupabaseApiGitHubOAuthProvider::enableGithubIsSet() const
{
    return enableGithubIsSet_;
}

void SupabaseApiGitHubOAuthProvider::unsetenableGithub()
{
    enableGithubIsSet_ = false;
}

std::string SupabaseApiGitHubOAuthProvider::getOauthClientId() const
{
    return oauthClientId_;
}

void SupabaseApiGitHubOAuthProvider::setOauthClientId(const std::string& value)
{
    oauthClientId_ = value;
    oauthClientIdIsSet_ = true;
}

bool SupabaseApiGitHubOAuthProvider::oauthClientIdIsSet() const
{
    return oauthClientIdIsSet_;
}

void SupabaseApiGitHubOAuthProvider::unsetoauthClientId()
{
    oauthClientIdIsSet_ = false;
}

std::string SupabaseApiGitHubOAuthProvider::getRedirectUri() const
{
    return redirectUri_;
}

void SupabaseApiGitHubOAuthProvider::setRedirectUri(const std::string& value)
{
    redirectUri_ = value;
    redirectUriIsSet_ = true;
}

bool SupabaseApiGitHubOAuthProvider::redirectUriIsSet() const
{
    return redirectUriIsSet_;
}

void SupabaseApiGitHubOAuthProvider::unsetredirectUri()
{
    redirectUriIsSet_ = false;
}

}
}
}
}
}


