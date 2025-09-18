

#include "huaweicloud/codeartscheck/v2/model/RunRequestV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RunRequestV2::RunRequestV2()
{
    username_ = "";
    usernameIsSet_ = false;
    accessToken_ = "";
    accessTokenIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    gitBranch_ = "";
    gitBranchIsSet_ = false;
}

RunRequestV2::~RunRequestV2() = default;

void RunRequestV2::validate()
{
}

web::json::value RunRequestV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(accessTokenIsSet_) {
        val[utility::conversions::to_string_t("access_token")] = ModelBase::toJson(accessToken_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(gitBranchIsSet_) {
        val[utility::conversions::to_string_t("git_branch")] = ModelBase::toJson(gitBranch_);
    }

    return val;
}
bool RunRequestV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitBranch(refVal);
        }
    }
    return ok;
}


std::string RunRequestV2::getUsername() const
{
    return username_;
}

void RunRequestV2::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RunRequestV2::usernameIsSet() const
{
    return usernameIsSet_;
}

void RunRequestV2::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RunRequestV2::getAccessToken() const
{
    return accessToken_;
}

void RunRequestV2::setAccessToken(const std::string& value)
{
    accessToken_ = value;
    accessTokenIsSet_ = true;
}

bool RunRequestV2::accessTokenIsSet() const
{
    return accessTokenIsSet_;
}

void RunRequestV2::unsetaccessToken()
{
    accessTokenIsSet_ = false;
}

std::string RunRequestV2::getGitUrl() const
{
    return gitUrl_;
}

void RunRequestV2::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool RunRequestV2::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void RunRequestV2::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string RunRequestV2::getGitBranch() const
{
    return gitBranch_;
}

void RunRequestV2::setGitBranch(const std::string& value)
{
    gitBranch_ = value;
    gitBranchIsSet_ = true;
}

bool RunRequestV2::gitBranchIsSet() const
{
    return gitBranchIsSet_;
}

void RunRequestV2::unsetgitBranch()
{
    gitBranchIsSet_ = false;
}

}
}
}
}
}


