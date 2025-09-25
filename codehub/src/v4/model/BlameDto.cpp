

#include "huaweicloud/codehub/v4/model/BlameDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BlameDto::BlameDto()
{
    commitIsSet_ = false;
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    linesIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

BlameDto::~BlameDto() = default;

void BlameDto::validate()
{
}

web::json::value BlameDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(linesIsSet_) {
        val[utility::conversions::to_string_t("lines")] = ModelBase::toJson(lines_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool BlameDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            RepositoryCommitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines"));
        if(!fieldValue.is_null())
        {
            std::vector<LineContentDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


RepositoryCommitDto BlameDto::getCommit() const
{
    return commit_;
}

void BlameDto::setCommit(const RepositoryCommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool BlameDto::commitIsSet() const
{
    return commitIsSet_;
}

void BlameDto::unsetcommit()
{
    commitIsSet_ = false;
}

std::string BlameDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void BlameDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool BlameDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void BlameDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::vector<LineContentDto>& BlameDto::getLines()
{
    return lines_;
}

void BlameDto::setLines(const std::vector<LineContentDto>& value)
{
    lines_ = value;
    linesIsSet_ = true;
}

bool BlameDto::linesIsSet() const
{
    return linesIsSet_;
}

void BlameDto::unsetlines()
{
    linesIsSet_ = false;
}

std::string BlameDto::getNickName() const
{
    return nickName_;
}

void BlameDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool BlameDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void BlameDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string BlameDto::getTenantName() const
{
    return tenantName_;
}

void BlameDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool BlameDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void BlameDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string BlameDto::getUserName() const
{
    return userName_;
}

void BlameDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool BlameDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void BlameDto::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


