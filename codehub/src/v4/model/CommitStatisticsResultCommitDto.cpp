

#include "huaweicloud/codehub/v4/model/CommitStatisticsResultCommitDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitStatisticsResultCommitDto::CommitStatisticsResultCommitDto()
{
    authorName_ = "";
    authorNameIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    isMerge_ = false;
    isMergeIsSet_ = false;
}

CommitStatisticsResultCommitDto::~CommitStatisticsResultCommitDto() = default;

void CommitStatisticsResultCommitDto::validate()
{
}

web::json::value CommitStatisticsResultCommitDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
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
    if(isMergeIsSet_) {
        val[utility::conversions::to_string_t("is_merge")] = ModelBase::toJson(isMerge_);
    }

    return val;
}
bool CommitStatisticsResultCommitDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMerge(refVal);
        }
    }
    return ok;
}


std::string CommitStatisticsResultCommitDto::getAuthorName() const
{
    return authorName_;
}

void CommitStatisticsResultCommitDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CommitStatisticsResultCommitDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CommitStatisticsResultCommitDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CommitStatisticsResultCommitDto::getDate() const
{
    return date_;
}

void CommitStatisticsResultCommitDto::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool CommitStatisticsResultCommitDto::dateIsSet() const
{
    return dateIsSet_;
}

void CommitStatisticsResultCommitDto::unsetdate()
{
    dateIsSet_ = false;
}

std::string CommitStatisticsResultCommitDto::getNickName() const
{
    return nickName_;
}

void CommitStatisticsResultCommitDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool CommitStatisticsResultCommitDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void CommitStatisticsResultCommitDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string CommitStatisticsResultCommitDto::getTenantName() const
{
    return tenantName_;
}

void CommitStatisticsResultCommitDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool CommitStatisticsResultCommitDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void CommitStatisticsResultCommitDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string CommitStatisticsResultCommitDto::getUserName() const
{
    return userName_;
}

void CommitStatisticsResultCommitDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CommitStatisticsResultCommitDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void CommitStatisticsResultCommitDto::unsetuserName()
{
    userNameIsSet_ = false;
}

bool CommitStatisticsResultCommitDto::isIsMerge() const
{
    return isMerge_;
}

void CommitStatisticsResultCommitDto::setIsMerge(bool value)
{
    isMerge_ = value;
    isMergeIsSet_ = true;
}

bool CommitStatisticsResultCommitDto::isMergeIsSet() const
{
    return isMergeIsSet_;
}

void CommitStatisticsResultCommitDto::unsetisMerge()
{
    isMergeIsSet_ = false;
}

}
}
}
}
}


