

#include "huaweicloud/evs/v2/model/Versions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Versions::Versions()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    mediaTypesIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

Versions::~Versions() = default;

void Versions::validate()
{
}

web::json::value Versions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(mediaTypesIsSet_) {
        val[utility::conversions::to_string_t("media-types")] = ModelBase::toJson(mediaTypes_);
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
bool Versions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("media-types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media-types"));
        if(!fieldValue.is_null())
        {
            std::vector<MediaTypes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaTypes(refVal);
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


std::string Versions::getId() const
{
    return id_;
}

void Versions::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Versions::idIsSet() const
{
    return idIsSet_;
}

void Versions::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& Versions::getLinks()
{
    return links_;
}

void Versions::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool Versions::linksIsSet() const
{
    return linksIsSet_;
}

void Versions::unsetlinks()
{
    linksIsSet_ = false;
}

std::vector<MediaTypes>& Versions::getMediaTypes()
{
    return mediaTypes_;
}

void Versions::setMediaTypes(const std::vector<MediaTypes>& value)
{
    mediaTypes_ = value;
    mediaTypesIsSet_ = true;
}

bool Versions::mediaTypesIsSet() const
{
    return mediaTypesIsSet_;
}

void Versions::unsetmediaTypes()
{
    mediaTypesIsSet_ = false;
}

std::string Versions::getMinVersion() const
{
    return minVersion_;
}

void Versions::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool Versions::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void Versions::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string Versions::getStatus() const
{
    return status_;
}

void Versions::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Versions::statusIsSet() const
{
    return statusIsSet_;
}

void Versions::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Versions::getUpdated() const
{
    return updated_;
}

void Versions::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool Versions::updatedIsSet() const
{
    return updatedIsSet_;
}

void Versions::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string Versions::getVersion() const
{
    return version_;
}

void Versions::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Versions::versionIsSet() const
{
    return versionIsSet_;
}

void Versions::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


