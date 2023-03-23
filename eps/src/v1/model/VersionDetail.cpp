

#include "huaweicloud/eps/v1/model/VersionDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




VersionDetail::VersionDetail()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updated_ = utility::datetime();
    updatedIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
}

VersionDetail::~VersionDetail() = default;

void VersionDetail::validate()
{
}

web::json::value VersionDetail::toJson() const
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

bool VersionDetail::fromJson(const web::json::value& val)
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
            std::vector<Link> refVal;
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
            utility::datetime refVal;
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


std::string VersionDetail::getId() const
{
    return id_;
}

void VersionDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VersionDetail::idIsSet() const
{
    return idIsSet_;
}

void VersionDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& VersionDetail::getLinks()
{
    return links_;
}

void VersionDetail::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VersionDetail::linksIsSet() const
{
    return linksIsSet_;
}

void VersionDetail::unsetlinks()
{
    linksIsSet_ = false;
}

std::string VersionDetail::getVersion() const
{
    return version_;
}

void VersionDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool VersionDetail::versionIsSet() const
{
    return versionIsSet_;
}

void VersionDetail::unsetversion()
{
    versionIsSet_ = false;
}

std::string VersionDetail::getStatus() const
{
    return status_;
}

void VersionDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VersionDetail::statusIsSet() const
{
    return statusIsSet_;
}

void VersionDetail::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime VersionDetail::getUpdated() const
{
    return updated_;
}

void VersionDetail::setUpdated(const utility::datetime& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool VersionDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void VersionDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string VersionDetail::getMinVersion() const
{
    return minVersion_;
}

void VersionDetail::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool VersionDetail::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void VersionDetail::unsetminVersion()
{
    minVersionIsSet_ = false;
}

}
}
}
}
}


