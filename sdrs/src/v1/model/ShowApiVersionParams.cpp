

#include "huaweicloud/sdrs/v1/model/ShowApiVersionParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowApiVersionParams::ShowApiVersionParams()
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

ShowApiVersionParams::~ShowApiVersionParams() = default;

void ShowApiVersionParams::validate()
{
}

web::json::value ShowApiVersionParams::toJson() const
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

bool ShowApiVersionParams::fromJson(const web::json::value& val)
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
            std::vector<ShowApiVersionLinksParams> refVal;
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

std::string ShowApiVersionParams::getId() const
{
    return id_;
}

void ShowApiVersionParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowApiVersionParams::idIsSet() const
{
    return idIsSet_;
}

void ShowApiVersionParams::unsetid()
{
    idIsSet_ = false;
}

std::vector<ShowApiVersionLinksParams>& ShowApiVersionParams::getLinks()
{
    return links_;
}

void ShowApiVersionParams::setLinks(const std::vector<ShowApiVersionLinksParams>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ShowApiVersionParams::linksIsSet() const
{
    return linksIsSet_;
}

void ShowApiVersionParams::unsetlinks()
{
    linksIsSet_ = false;
}

std::string ShowApiVersionParams::getVersion() const
{
    return version_;
}

void ShowApiVersionParams::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowApiVersionParams::versionIsSet() const
{
    return versionIsSet_;
}

void ShowApiVersionParams::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowApiVersionParams::getStatus() const
{
    return status_;
}

void ShowApiVersionParams::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowApiVersionParams::statusIsSet() const
{
    return statusIsSet_;
}

void ShowApiVersionParams::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowApiVersionParams::getUpdated() const
{
    return updated_;
}

void ShowApiVersionParams::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowApiVersionParams::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowApiVersionParams::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ShowApiVersionParams::getMinVersion() const
{
    return minVersion_;
}

void ShowApiVersionParams::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool ShowApiVersionParams::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void ShowApiVersionParams::unsetminVersion()
{
    minVersionIsSet_ = false;
}

}
}
}
}
}


