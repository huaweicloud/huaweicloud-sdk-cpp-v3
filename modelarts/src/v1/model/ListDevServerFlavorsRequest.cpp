

#include "huaweicloud/modelarts/v1/model/ListDevServerFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerFlavorsRequest::ListDevServerFlavorsRequest()
{
    serverType_ = "";
    serverTypeIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
}

ListDevServerFlavorsRequest::~ListDevServerFlavorsRequest() = default;

void ListDevServerFlavorsRequest::validate()
{
}

web::json::value ListDevServerFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }

    return val;
}
bool ListDevServerFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
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
    return ok;
}


std::string ListDevServerFlavorsRequest::getServerType() const
{
    return serverType_;
}

void ListDevServerFlavorsRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ListDevServerFlavorsRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ListDevServerFlavorsRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string ListDevServerFlavorsRequest::getArch() const
{
    return arch_;
}

void ListDevServerFlavorsRequest::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ListDevServerFlavorsRequest::archIsSet() const
{
    return archIsSet_;
}

void ListDevServerFlavorsRequest::unsetarch()
{
    archIsSet_ = false;
}

std::string ListDevServerFlavorsRequest::getChargingMode() const
{
    return chargingMode_;
}

void ListDevServerFlavorsRequest::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ListDevServerFlavorsRequest::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ListDevServerFlavorsRequest::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

}
}
}
}
}


