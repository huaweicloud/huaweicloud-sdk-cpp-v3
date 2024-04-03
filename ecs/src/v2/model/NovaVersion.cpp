

#include "huaweicloud/ecs/v2/model/NovaVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaVersion::NovaVersion()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

NovaVersion::~NovaVersion() = default;

void NovaVersion::validate()
{
}

web::json::value NovaVersion::toJson() const
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
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }

    return val;
}
bool NovaVersion::fromJson(const web::json::value& val)
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
            std::vector<NovaLink> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    return ok;
}


std::string NovaVersion::getId() const
{
    return id_;
}

void NovaVersion::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaVersion::idIsSet() const
{
    return idIsSet_;
}

void NovaVersion::unsetid()
{
    idIsSet_ = false;
}

std::vector<NovaLink>& NovaVersion::getLinks()
{
    return links_;
}

void NovaVersion::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaVersion::linksIsSet() const
{
    return linksIsSet_;
}

void NovaVersion::unsetlinks()
{
    linksIsSet_ = false;
}

std::string NovaVersion::getMinVersion() const
{
    return minVersion_;
}

void NovaVersion::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool NovaVersion::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void NovaVersion::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string NovaVersion::getStatus() const
{
    return status_;
}

void NovaVersion::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NovaVersion::statusIsSet() const
{
    return statusIsSet_;
}

void NovaVersion::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NovaVersion::getVersion() const
{
    return version_;
}

void NovaVersion::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool NovaVersion::versionIsSet() const
{
    return versionIsSet_;
}

void NovaVersion::unsetversion()
{
    versionIsSet_ = false;
}

std::string NovaVersion::getUpdated() const
{
    return updated_;
}

void NovaVersion::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool NovaVersion::updatedIsSet() const
{
    return updatedIsSet_;
}

void NovaVersion::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


