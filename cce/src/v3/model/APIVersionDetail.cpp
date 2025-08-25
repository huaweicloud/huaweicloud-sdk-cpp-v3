

#include "huaweicloud/cce/v3/model/APIVersionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




APIVersionDetail::APIVersionDetail()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

APIVersionDetail::~APIVersionDetail() = default;

void APIVersionDetail::validate()
{
}

web::json::value APIVersionDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(minVersionIsSet_) {
        val[utility::conversions::to_string_t("min_version")] = ModelBase::toJson(minVersion_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool APIVersionDetail::fromJson(const web::json::value& val)
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
            std::vector<APIVersionLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string APIVersionDetail::getId() const
{
    return id_;
}

void APIVersionDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool APIVersionDetail::idIsSet() const
{
    return idIsSet_;
}

void APIVersionDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<APIVersionLink>& APIVersionDetail::getLinks()
{
    return links_;
}

void APIVersionDetail::setLinks(const std::vector<APIVersionLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool APIVersionDetail::linksIsSet() const
{
    return linksIsSet_;
}

void APIVersionDetail::unsetlinks()
{
    linksIsSet_ = false;
}

std::string APIVersionDetail::getMinVersion() const
{
    return minVersion_;
}

void APIVersionDetail::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool APIVersionDetail::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void APIVersionDetail::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string APIVersionDetail::getStatus() const
{
    return status_;
}

void APIVersionDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool APIVersionDetail::statusIsSet() const
{
    return statusIsSet_;
}

void APIVersionDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string APIVersionDetail::getUpdated() const
{
    return updated_;
}

void APIVersionDetail::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool APIVersionDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void APIVersionDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string APIVersionDetail::getVersion() const
{
    return version_;
}

void APIVersionDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool APIVersionDetail::versionIsSet() const
{
    return versionIsSet_;
}

void APIVersionDetail::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


