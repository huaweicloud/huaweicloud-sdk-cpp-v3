

#include "huaweicloud/codeartsrepo/v3/model/ShowRepositoryArchiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowRepositoryArchiveRequest::ShowRepositoryArchiveRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
}

ShowRepositoryArchiveRequest::~ShowRepositoryArchiveRequest() = default;

void ShowRepositoryArchiveRequest::validate()
{
}

web::json::value ShowRepositoryArchiveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }

    return val;
}
bool ShowRepositoryArchiveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryArchiveRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShowRepositoryArchiveRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShowRepositoryArchiveRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShowRepositoryArchiveRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

std::string ShowRepositoryArchiveRequest::getSha() const
{
    return sha_;
}

void ShowRepositoryArchiveRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowRepositoryArchiveRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowRepositoryArchiveRequest::unsetsha()
{
    shaIsSet_ = false;
}

std::string ShowRepositoryArchiveRequest::getFormat() const
{
    return format_;
}

void ShowRepositoryArchiveRequest::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ShowRepositoryArchiveRequest::formatIsSet() const
{
    return formatIsSet_;
}

void ShowRepositoryArchiveRequest::unsetformat()
{
    formatIsSet_ = false;
}

}
}
}
}
}


