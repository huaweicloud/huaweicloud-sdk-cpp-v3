

#include "huaweicloud/vpc/v2/model/NeutronCreateNetworkOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateNetworkOption::NeutronCreateNetworkOption()
{
    name_ = "";
    nameIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    shared_ = false;
    sharedIsSet_ = false;
    providerNetworkType_ = "";
    providerNetworkTypeIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
}

NeutronCreateNetworkOption::~NeutronCreateNetworkOption() = default;

void NeutronCreateNetworkOption::validate()
{
}

web::json::value NeutronCreateNetworkOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(sharedIsSet_) {
        val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(shared_);
    }
    if(providerNetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("provider:network_type")] = ModelBase::toJson(providerNetworkType_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }

    return val;
}
bool NeutronCreateNetworkOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("shared"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShared(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider:network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider:network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderNetworkType(refVal);
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


std::string NeutronCreateNetworkOption::getName() const
{
    return name_;
}

void NeutronCreateNetworkOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateNetworkOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateNetworkOption::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronCreateNetworkOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronCreateNetworkOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronCreateNetworkOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronCreateNetworkOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

bool NeutronCreateNetworkOption::isShared() const
{
    return shared_;
}

void NeutronCreateNetworkOption::setShared(bool value)
{
    shared_ = value;
    sharedIsSet_ = true;
}

bool NeutronCreateNetworkOption::sharedIsSet() const
{
    return sharedIsSet_;
}

void NeutronCreateNetworkOption::unsetshared()
{
    sharedIsSet_ = false;
}

std::string NeutronCreateNetworkOption::getProviderNetworkType() const
{
    return providerNetworkType_;
}

void NeutronCreateNetworkOption::setProviderNetworkType(const std::string& value)
{
    providerNetworkType_ = value;
    providerNetworkTypeIsSet_ = true;
}

bool NeutronCreateNetworkOption::providerNetworkTypeIsSet() const
{
    return providerNetworkTypeIsSet_;
}

void NeutronCreateNetworkOption::unsetproviderNetworkType()
{
    providerNetworkTypeIsSet_ = false;
}

bool NeutronCreateNetworkOption::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void NeutronCreateNetworkOption::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool NeutronCreateNetworkOption::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void NeutronCreateNetworkOption::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

}
}
}
}
}


