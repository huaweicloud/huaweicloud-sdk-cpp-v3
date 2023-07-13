

#include "huaweicloud/vpc/v2/model/NeutronUpdateRouterOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateRouterOption::NeutronUpdateRouterOption()
{
    name_ = "";
    nameIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    externalGatewayInfoIsSet_ = false;
    routesIsSet_ = false;
}

NeutronUpdateRouterOption::~NeutronUpdateRouterOption() = default;

void NeutronUpdateRouterOption::validate()
{
}

web::json::value NeutronUpdateRouterOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(externalGatewayInfoIsSet_) {
        val[utility::conversions::to_string_t("external_gateway_info")] = ModelBase::toJson(externalGatewayInfo_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }

    return val;
}

bool NeutronUpdateRouterOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_gateway_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_gateway_info"));
        if(!fieldValue.is_null())
        {
            ExternalGatewayInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalGatewayInfo(refVal);
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
    return ok;
}

std::string NeutronUpdateRouterOption::getName() const
{
    return name_;
}

void NeutronUpdateRouterOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateRouterOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateRouterOption::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronUpdateRouterOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronUpdateRouterOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronUpdateRouterOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronUpdateRouterOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

ExternalGatewayInfoOption NeutronUpdateRouterOption::getExternalGatewayInfo() const
{
    return externalGatewayInfo_;
}

void NeutronUpdateRouterOption::setExternalGatewayInfo(const ExternalGatewayInfoOption& value)
{
    externalGatewayInfo_ = value;
    externalGatewayInfoIsSet_ = true;
}

bool NeutronUpdateRouterOption::externalGatewayInfoIsSet() const
{
    return externalGatewayInfoIsSet_;
}

void NeutronUpdateRouterOption::unsetexternalGatewayInfo()
{
    externalGatewayInfoIsSet_ = false;
}

std::vector<Route>& NeutronUpdateRouterOption::getRoutes()
{
    return routes_;
}

void NeutronUpdateRouterOption::setRoutes(const std::vector<Route>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool NeutronUpdateRouterOption::routesIsSet() const
{
    return routesIsSet_;
}

void NeutronUpdateRouterOption::unsetroutes()
{
    routesIsSet_ = false;
}

}
}
}
}
}


