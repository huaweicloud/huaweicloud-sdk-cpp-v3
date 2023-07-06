

#include "huaweicloud/ims/v2/model/OsVersionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




OsVersionResponse::OsVersionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
}

OsVersionResponse::~OsVersionResponse() = default;

void OsVersionResponse::validate()
{
}

web::json::value OsVersionResponse::toJson() const
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

bool OsVersionResponse::fromJson(const web::json::value& val)
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
            std::vector<Links> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}

std::string OsVersionResponse::getStatus() const
{
    return status_;
}

void OsVersionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OsVersionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void OsVersionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string OsVersionResponse::getId() const
{
    return id_;
}

void OsVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OsVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void OsVersionResponse::unsetid()
{
    idIsSet_ = false;
}

std::vector<Links>& OsVersionResponse::getLinks()
{
    return links_;
}

void OsVersionResponse::setLinks(const std::vector<Links>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool OsVersionResponse::linksIsSet() const
{
    return linksIsSet_;
}

void OsVersionResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


