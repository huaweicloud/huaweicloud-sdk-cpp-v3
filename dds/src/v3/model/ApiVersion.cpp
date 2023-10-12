

#include "huaweicloud/dds/v3/model/ApiVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ApiVersion::ApiVersion()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    minVersion_ = "";
    minVersionIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

ApiVersion::~ApiVersion() = default;

void ApiVersion::validate()
{
}

web::json::value ApiVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(minVersionIsSet_) {
        val[utility::conversions::to_string_t("min_version")] = ModelBase::toJson(minVersion_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }

    return val;
}
bool ApiVersion::fromJson(const web::json::value& val)
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
            std::vector<Links> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVersion(refVal);
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


std::string ApiVersion::getId() const
{
    return id_;
}

void ApiVersion::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApiVersion::idIsSet() const
{
    return idIsSet_;
}

void ApiVersion::unsetid()
{
    idIsSet_ = false;
}

std::vector<Links>& ApiVersion::getLinks()
{
    return links_;
}

void ApiVersion::setLinks(const std::vector<Links>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ApiVersion::linksIsSet() const
{
    return linksIsSet_;
}

void ApiVersion::unsetlinks()
{
    linksIsSet_ = false;
}

std::string ApiVersion::getStatus() const
{
    return status_;
}

void ApiVersion::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApiVersion::statusIsSet() const
{
    return statusIsSet_;
}

void ApiVersion::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApiVersion::getVersion() const
{
    return version_;
}

void ApiVersion::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ApiVersion::versionIsSet() const
{
    return versionIsSet_;
}

void ApiVersion::unsetversion()
{
    versionIsSet_ = false;
}

std::string ApiVersion::getMinVersion() const
{
    return minVersion_;
}

void ApiVersion::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool ApiVersion::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void ApiVersion::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string ApiVersion::getUpdated() const
{
    return updated_;
}

void ApiVersion::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ApiVersion::updatedIsSet() const
{
    return updatedIsSet_;
}

void ApiVersion::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


