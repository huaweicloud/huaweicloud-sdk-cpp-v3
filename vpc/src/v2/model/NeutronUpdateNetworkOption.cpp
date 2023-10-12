

#include "huaweicloud/vpc/v2/model/NeutronUpdateNetworkOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateNetworkOption::NeutronUpdateNetworkOption()
{
    name_ = "";
    nameIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
}

NeutronUpdateNetworkOption::~NeutronUpdateNetworkOption() = default;

void NeutronUpdateNetworkOption::validate()
{
}

web::json::value NeutronUpdateNetworkOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }

    return val;
}
bool NeutronUpdateNetworkOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("port_security_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_security_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortSecurityEnabled(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateNetworkOption::getName() const
{
    return name_;
}

void NeutronUpdateNetworkOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateNetworkOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateNetworkOption::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronUpdateNetworkOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronUpdateNetworkOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronUpdateNetworkOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronUpdateNetworkOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

bool NeutronUpdateNetworkOption::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void NeutronUpdateNetworkOption::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool NeutronUpdateNetworkOption::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void NeutronUpdateNetworkOption::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

}
}
}
}
}


