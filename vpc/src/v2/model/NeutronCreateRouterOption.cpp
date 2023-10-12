

#include "huaweicloud/vpc/v2/model/NeutronCreateRouterOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateRouterOption::NeutronCreateRouterOption()
{
    name_ = "";
    nameIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    externalGatewayInfoIsSet_ = false;
}

NeutronCreateRouterOption::~NeutronCreateRouterOption() = default;

void NeutronCreateRouterOption::validate()
{
}

web::json::value NeutronCreateRouterOption::toJson() const
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

    return val;
}
bool NeutronCreateRouterOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NeutronCreateRouterOption::getName() const
{
    return name_;
}

void NeutronCreateRouterOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateRouterOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateRouterOption::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronCreateRouterOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronCreateRouterOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronCreateRouterOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronCreateRouterOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

ExternalGatewayInfoOption NeutronCreateRouterOption::getExternalGatewayInfo() const
{
    return externalGatewayInfo_;
}

void NeutronCreateRouterOption::setExternalGatewayInfo(const ExternalGatewayInfoOption& value)
{
    externalGatewayInfo_ = value;
    externalGatewayInfoIsSet_ = true;
}

bool NeutronCreateRouterOption::externalGatewayInfoIsSet() const
{
    return externalGatewayInfoIsSet_;
}

void NeutronCreateRouterOption::unsetexternalGatewayInfo()
{
    externalGatewayInfoIsSet_ = false;
}

}
}
}
}
}


