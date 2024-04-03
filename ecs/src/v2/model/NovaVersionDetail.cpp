

#include "huaweicloud/ecs/v2/model/NovaVersionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaVersionDetail::NovaVersionDetail()
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

NovaVersionDetail::~NovaVersionDetail() = default;

void NovaVersionDetail::validate()
{
}

web::json::value NovaVersionDetail::toJson() const
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
bool NovaVersionDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("media-types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media-types"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaVersionMediaType> refVal;
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


std::string NovaVersionDetail::getId() const
{
    return id_;
}

void NovaVersionDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaVersionDetail::idIsSet() const
{
    return idIsSet_;
}

void NovaVersionDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<NovaLink>& NovaVersionDetail::getLinks()
{
    return links_;
}

void NovaVersionDetail::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaVersionDetail::linksIsSet() const
{
    return linksIsSet_;
}

void NovaVersionDetail::unsetlinks()
{
    linksIsSet_ = false;
}

std::vector<NovaVersionMediaType>& NovaVersionDetail::getMediaTypes()
{
    return mediaTypes_;
}

void NovaVersionDetail::setMediaTypes(const std::vector<NovaVersionMediaType>& value)
{
    mediaTypes_ = value;
    mediaTypesIsSet_ = true;
}

bool NovaVersionDetail::mediaTypesIsSet() const
{
    return mediaTypesIsSet_;
}

void NovaVersionDetail::unsetmediaTypes()
{
    mediaTypesIsSet_ = false;
}

std::string NovaVersionDetail::getMinVersion() const
{
    return minVersion_;
}

void NovaVersionDetail::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool NovaVersionDetail::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void NovaVersionDetail::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string NovaVersionDetail::getStatus() const
{
    return status_;
}

void NovaVersionDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NovaVersionDetail::statusIsSet() const
{
    return statusIsSet_;
}

void NovaVersionDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NovaVersionDetail::getUpdated() const
{
    return updated_;
}

void NovaVersionDetail::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool NovaVersionDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void NovaVersionDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string NovaVersionDetail::getVersion() const
{
    return version_;
}

void NovaVersionDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool NovaVersionDetail::versionIsSet() const
{
    return versionIsSet_;
}

void NovaVersionDetail::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


