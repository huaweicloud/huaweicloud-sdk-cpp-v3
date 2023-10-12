

#include "huaweicloud/vpc/v2/model/VersionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




VersionResult::VersionResult()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
}

VersionResult::~VersionResult() = default;

void VersionResult::validate()
{
}

web::json::value VersionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool VersionResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}


std::string VersionResult::getStatus() const
{
    return status_;
}

void VersionResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VersionResult::statusIsSet() const
{
    return statusIsSet_;
}

void VersionResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string VersionResult::getId() const
{
    return id_;
}

void VersionResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VersionResult::idIsSet() const
{
    return idIsSet_;
}

void VersionResult::unsetid()
{
    idIsSet_ = false;
}

std::vector<NeutronPageLink>& VersionResult::getLinks()
{
    return links_;
}

void VersionResult::setLinks(const std::vector<NeutronPageLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VersionResult::linksIsSet() const
{
    return linksIsSet_;
}

void VersionResult::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


