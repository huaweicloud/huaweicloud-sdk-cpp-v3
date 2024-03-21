

#include "huaweicloud/live/v1/model/ModifyOttChannelEndPointsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelEndPointsReq::ModifyOttChannelEndPointsReq()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    endpointsIsSet_ = false;
}

ModifyOttChannelEndPointsReq::~ModifyOttChannelEndPointsReq() = default;

void ModifyOttChannelEndPointsReq::validate()
{
}

web::json::value ModifyOttChannelEndPointsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }

    return val;
}
bool ModifyOttChannelEndPointsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelEndPointsReq::getDomain() const
{
    return domain_;
}

void ModifyOttChannelEndPointsReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelEndPointsReq::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelEndPointsReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelEndPointsReq::getAppName() const
{
    return appName_;
}

void ModifyOttChannelEndPointsReq::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelEndPointsReq::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelEndPointsReq::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelEndPointsReq::getId() const
{
    return id_;
}

void ModifyOttChannelEndPointsReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelEndPointsReq::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelEndPointsReq::unsetid()
{
    idIsSet_ = false;
}

std::vector<EndpointItem>& ModifyOttChannelEndPointsReq::getEndpoints()
{
    return endpoints_;
}

void ModifyOttChannelEndPointsReq::setEndpoints(const std::vector<EndpointItem>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ModifyOttChannelEndPointsReq::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ModifyOttChannelEndPointsReq::unsetendpoints()
{
    endpointsIsSet_ = false;
}

}
}
}
}
}


