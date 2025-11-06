

#include "huaweicloud/codeartsrepo/v3/model/DevstarRepoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DevstarRepoInfo::DevstarRepoInfo()
{
    uuid_ = "";
    uuidIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    sshUrl_ = "";
    sshUrlIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
}

DevstarRepoInfo::~DevstarRepoInfo() = default;

void DevstarRepoInfo::validate()
{
}

web::json::value DevstarRepoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(sshUrlIsSet_) {
        val[utility::conversions::to_string_t("ssh_url")] = ModelBase::toJson(sshUrl_);
    }
    if(codeUrlIsSet_) {
        val[utility::conversions::to_string_t("code_url")] = ModelBase::toJson(codeUrl_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }

    return val;
}
bool DevstarRepoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssh_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailUrl(refVal);
        }
    }
    return ok;
}


std::string DevstarRepoInfo::getUuid() const
{
    return uuid_;
}

void DevstarRepoInfo::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool DevstarRepoInfo::uuidIsSet() const
{
    return uuidIsSet_;
}

void DevstarRepoInfo::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string DevstarRepoInfo::getRepoId() const
{
    return repoId_;
}

void DevstarRepoInfo::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool DevstarRepoInfo::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void DevstarRepoInfo::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string DevstarRepoInfo::getRepoName() const
{
    return repoName_;
}

void DevstarRepoInfo::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool DevstarRepoInfo::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void DevstarRepoInfo::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string DevstarRepoInfo::getSshUrl() const
{
    return sshUrl_;
}

void DevstarRepoInfo::setSshUrl(const std::string& value)
{
    sshUrl_ = value;
    sshUrlIsSet_ = true;
}

bool DevstarRepoInfo::sshUrlIsSet() const
{
    return sshUrlIsSet_;
}

void DevstarRepoInfo::unsetsshUrl()
{
    sshUrlIsSet_ = false;
}

std::string DevstarRepoInfo::getCodeUrl() const
{
    return codeUrl_;
}

void DevstarRepoInfo::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool DevstarRepoInfo::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void DevstarRepoInfo::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string DevstarRepoInfo::getDetailUrl() const
{
    return detailUrl_;
}

void DevstarRepoInfo::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool DevstarRepoInfo::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void DevstarRepoInfo::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

}
}
}
}
}


