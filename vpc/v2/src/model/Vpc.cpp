

#include "huaweicloud/vpc/model/Vpc.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




Vpc::Vpc()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    routesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

Vpc::~Vpc() = default;

void Vpc::validate()
{
}

web::json::value Vpc::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool Vpc::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routes"));
        if(!fieldValue.is_null())
        {
            std::vector<Route> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string Vpc::getId() const
{
    return id_;
}

void Vpc::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Vpc::idIsSet() const
{
    return idIsSet_;
}

void Vpc::unsetid()
{
    idIsSet_ = false;
}

std::string Vpc::getName() const
{
    return name_;
}

void Vpc::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Vpc::nameIsSet() const
{
    return nameIsSet_;
}

void Vpc::unsetname()
{
    nameIsSet_ = false;
}

std::string Vpc::getCidr() const
{
    return cidr_;
}

void Vpc::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool Vpc::cidrIsSet() const
{
    return cidrIsSet_;
}

void Vpc::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string Vpc::getDescription() const
{
    return description_;
}

void Vpc::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Vpc::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Vpc::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<Route>& Vpc::getRoutes()
{
    return routes_;
}

void Vpc::setRoutes(const std::vector<Route>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool Vpc::routesIsSet() const
{
    return routesIsSet_;
}

void Vpc::unsetroutes()
{
    routesIsSet_ = false;
}

std::string Vpc::getStatus() const
{
    return status_;
}

void Vpc::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Vpc::statusIsSet() const
{
    return statusIsSet_;
}

void Vpc::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Vpc::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Vpc::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Vpc::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Vpc::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


