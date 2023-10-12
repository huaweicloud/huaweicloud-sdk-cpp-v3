

#include "huaweicloud/gaussdbfornosql/v3/model/ApiVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApiVersionResponse::ApiVersionResponse()
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

ApiVersionResponse::~ApiVersionResponse() = default;

void ApiVersionResponse::validate()
{
}

web::json::value ApiVersionResponse::toJson() const
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
bool ApiVersionResponse::fromJson(const web::json::value& val)
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


std::string ApiVersionResponse::getId() const
{
    return id_;
}

void ApiVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApiVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void ApiVersionResponse::unsetid()
{
    idIsSet_ = false;
}

std::vector<Links>& ApiVersionResponse::getLinks()
{
    return links_;
}

void ApiVersionResponse::setLinks(const std::vector<Links>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ApiVersionResponse::linksIsSet() const
{
    return linksIsSet_;
}

void ApiVersionResponse::unsetlinks()
{
    linksIsSet_ = false;
}

std::string ApiVersionResponse::getStatus() const
{
    return status_;
}

void ApiVersionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApiVersionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ApiVersionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApiVersionResponse::getVersion() const
{
    return version_;
}

void ApiVersionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ApiVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ApiVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ApiVersionResponse::getMinVersion() const
{
    return minVersion_;
}

void ApiVersionResponse::setMinVersion(const std::string& value)
{
    minVersion_ = value;
    minVersionIsSet_ = true;
}

bool ApiVersionResponse::minVersionIsSet() const
{
    return minVersionIsSet_;
}

void ApiVersionResponse::unsetminVersion()
{
    minVersionIsSet_ = false;
}

std::string ApiVersionResponse::getUpdated() const
{
    return updated_;
}

void ApiVersionResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ApiVersionResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ApiVersionResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


