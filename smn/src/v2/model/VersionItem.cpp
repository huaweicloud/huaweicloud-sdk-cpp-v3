

#include "huaweicloud/smn/v2/model/VersionItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




VersionItem::VersionItem()
{
    id_ = "";
    idIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    linksIsSet_ = false;
}

VersionItem::~VersionItem() = default;

void VersionItem::validate()
{
}

web::json::value VersionItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool VersionItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<LinksItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}


std::string VersionItem::getId() const
{
    return id_;
}

void VersionItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VersionItem::idIsSet() const
{
    return idIsSet_;
}

void VersionItem::unsetid()
{
    idIsSet_ = false;
}

std::string VersionItem::getMinVersion() const
{
    return minVersion_;
}

void VersionItem::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool VersionItem::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void VersionItem::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string VersionItem::getStatus() const
{
    return status_;
}

void VersionItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VersionItem::statusIsSet() const
{
    return statusIsSet_;
}

void VersionItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string VersionItem::getUpdated() const
{
    return updated_;
}

void VersionItem::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool VersionItem::updatedIsSet() const
{
    return updatedIsSet_;
}

void VersionItem::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string VersionItem::getVersion() const
{
    return version_;
}

void VersionItem::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool VersionItem::versionIsSet() const
{
    return versionIsSet_;
}

void VersionItem::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<LinksItem>& VersionItem::getLinks()
{
    return links_;
}

void VersionItem::setLinks(const std::vector<LinksItem>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VersionItem::linksIsSet() const
{
    return linksIsSet_;
}

void VersionItem::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


