

#include "huaweicloud/modelarts/v1/model/ServerStartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerStartRequest::ServerStartRequest()
{
    arch_ = "";
    archIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
}

ServerStartRequest::~ServerStartRequest() = default;

void ServerStartRequest::validate()
{
}

web::json::value ServerStartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }

    return val;
}
bool ServerStartRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    return ok;
}


std::string ServerStartRequest::getArch() const
{
    return arch_;
}

void ServerStartRequest::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ServerStartRequest::archIsSet() const
{
    return archIsSet_;
}

void ServerStartRequest::unsetarch()
{
    archIsSet_ = false;
}

std::string ServerStartRequest::getChargingMode() const
{
    return chargingMode_;
}

void ServerStartRequest::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ServerStartRequest::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ServerStartRequest::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ServerStartRequest::getServerType() const
{
    return serverType_;
}

void ServerStartRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ServerStartRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ServerStartRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

}
}
}
}
}


