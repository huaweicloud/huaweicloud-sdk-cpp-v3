

#include "huaweicloud/cfw/v1/model/Port.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Port::Port()
{
    portType_ = 0;
    portTypeIsSet_ = false;
    ports_ = "";
    portsIsSet_ = false;
}

Port::~Port() = default;

void Port::validate()
{
}

web::json::value Port::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portTypeIsSet_) {
        val[utility::conversions::to_string_t("port_type")] = ModelBase::toJson(portType_);
    }
    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }

    return val;
}
bool Port::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    return ok;
}


int32_t Port::getPortType() const
{
    return portType_;
}

void Port::setPortType(int32_t value)
{
    portType_ = value;
    portTypeIsSet_ = true;
}

bool Port::portTypeIsSet() const
{
    return portTypeIsSet_;
}

void Port::unsetportType()
{
    portTypeIsSet_ = false;
}

std::string Port::getPorts() const
{
    return ports_;
}

void Port::setPorts(const std::string& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool Port::portsIsSet() const
{
    return portsIsSet_;
}

void Port::unsetports()
{
    portsIsSet_ = false;
}

}
}
}
}
}


