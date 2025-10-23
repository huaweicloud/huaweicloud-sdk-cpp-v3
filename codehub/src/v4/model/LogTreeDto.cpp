

#include "huaweicloud/codehub/v4/model/LogTreeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




LogTreeDto::LogTreeDto()
{
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    commitIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
    submoduleUrl_ = "";
    submoduleUrlIsSet_ = false;
    isLimited_ = false;
    isLimitedIsSet_ = false;
    submoduleLink_ = "";
    submoduleLinkIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

LogTreeDto::~LogTreeDto() = default;

void LogTreeDto::validate()
{
}

web::json::value LogTreeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(submoduleUrlIsSet_) {
        val[utility::conversions::to_string_t("submodule_url")] = ModelBase::toJson(submoduleUrl_);
    }
    if(isLimitedIsSet_) {
        val[utility::conversions::to_string_t("is_limited")] = ModelBase::toJson(isLimited_);
    }
    if(submoduleLinkIsSet_) {
        val[utility::conversions::to_string_t("submodule_link")] = ModelBase::toJson(submoduleLink_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
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
bool LogTreeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            RepositoryCommitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submodule_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmoduleUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_limited"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLimited(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submodule_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmoduleLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
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


std::string LogTreeDto::getName() const
{
    return name_;
}

void LogTreeDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LogTreeDto::nameIsSet() const
{
    return nameIsSet_;
}

void LogTreeDto::unsetname()
{
    nameIsSet_ = false;
}

std::string LogTreeDto::getPath() const
{
    return path_;
}

void LogTreeDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool LogTreeDto::pathIsSet() const
{
    return pathIsSet_;
}

void LogTreeDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string LogTreeDto::getType() const
{
    return type_;
}

void LogTreeDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LogTreeDto::typeIsSet() const
{
    return typeIsSet_;
}

void LogTreeDto::unsettype()
{
    typeIsSet_ = false;
}

RepositoryCommitDto LogTreeDto::getCommit() const
{
    return commit_;
}

void LogTreeDto::setCommit(const RepositoryCommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool LogTreeDto::commitIsSet() const
{
    return commitIsSet_;
}

void LogTreeDto::unsetcommit()
{
    commitIsSet_ = false;
}

std::string LogTreeDto::getBlobId() const
{
    return blobId_;
}

void LogTreeDto::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool LogTreeDto::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void LogTreeDto::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string LogTreeDto::getSubmoduleUrl() const
{
    return submoduleUrl_;
}

void LogTreeDto::setSubmoduleUrl(const std::string& value)
{
    submoduleUrl_ = value;
    submoduleUrlIsSet_ = true;
}

bool LogTreeDto::submoduleUrlIsSet() const
{
    return submoduleUrlIsSet_;
}

void LogTreeDto::unsetsubmoduleUrl()
{
    submoduleUrlIsSet_ = false;
}

bool LogTreeDto::isIsLimited() const
{
    return isLimited_;
}

void LogTreeDto::setIsLimited(bool value)
{
    isLimited_ = value;
    isLimitedIsSet_ = true;
}

bool LogTreeDto::isLimitedIsSet() const
{
    return isLimitedIsSet_;
}

void LogTreeDto::unsetisLimited()
{
    isLimitedIsSet_ = false;
}

std::string LogTreeDto::getSubmoduleLink() const
{
    return submoduleLink_;
}

void LogTreeDto::setSubmoduleLink(const std::string& value)
{
    submoduleLink_ = value;
    submoduleLinkIsSet_ = true;
}

bool LogTreeDto::submoduleLinkIsSet() const
{
    return submoduleLinkIsSet_;
}

void LogTreeDto::unsetsubmoduleLink()
{
    submoduleLinkIsSet_ = false;
}

std::string LogTreeDto::getMd5() const
{
    return md5_;
}

void LogTreeDto::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool LogTreeDto::md5IsSet() const
{
    return md5IsSet_;
}

void LogTreeDto::unsetmd5()
{
    md5IsSet_ = false;
}

std::string LogTreeDto::getNickName() const
{
    return nickName_;
}

void LogTreeDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool LogTreeDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void LogTreeDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string LogTreeDto::getTenantName() const
{
    return tenantName_;
}

void LogTreeDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool LogTreeDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void LogTreeDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string LogTreeDto::getUserName() const
{
    return userName_;
}

void LogTreeDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool LogTreeDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void LogTreeDto::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


