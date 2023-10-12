

#include "huaweicloud/kms/v2/model/ApiVersionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ApiVersionDetail::ApiVersionDetail()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
}

ApiVersionDetail::~ApiVersionDetail() = default;

void ApiVersionDetail::validate()
{
}

web::json::value ApiVersionDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(minVersionIsSet_) {
        val[utility::conversions::to_string_t("min_version")] = ModelBase::toJson(minVersion_);
    }

    return val;
}
bool ApiVersionDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVersion(refVal);
        }
    }
    return ok;
}


std::string ApiVersionDetail::getId() const
{
    return id_;
}

void ApiVersionDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApiVersionDetail::idIsSet() const
{
    return idIsSet_;
}

void ApiVersionDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<ApiLink>& ApiVersionDetail::getLinks()
{
    return links_;
}

void ApiVersionDetail::setLinks(const std::vector<ApiLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ApiVersionDetail::linksIsSet() const
{
    return linksIsSet_;
}

void ApiVersionDetail::unsetlinks()
{
    linksIsSet_ = false;
}

std::string ApiVersionDetail::getVersion() const
{
    return version_;
}

void ApiVersionDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ApiVersionDetail::versionIsSet() const
{
    return versionIsSet_;
}

void ApiVersionDetail::unsetversion()
{
    versionIsSet_ = false;
}

std::string ApiVersionDetail::getStatus() const
{
    return status_;
}

void ApiVersionDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApiVersionDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ApiVersionDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApiVersionDetail::getUpdated() const
{
    return updated_;
}

void ApiVersionDetail::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ApiVersionDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void ApiVersionDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ApiVersionDetail::getMinVersion() const
{
    return minVersion_;
}

void ApiVersionDetail::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool ApiVersionDetail::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void ApiVersionDetail::unsetminVersion()
{
    minVersionIsSet_ = false;
}

}
}
}
}
}


