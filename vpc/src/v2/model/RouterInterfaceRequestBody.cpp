

#include "huaweicloud/vpc/v2/model/RouterInterfaceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




RouterInterfaceRequestBody::RouterInterfaceRequestBody()
{
    portId_ = "";
    portIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

RouterInterfaceRequestBody::~RouterInterfaceRequestBody() = default;

void RouterInterfaceRequestBody::validate()
{
}

web::json::value RouterInterfaceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}

bool RouterInterfaceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}

std::string RouterInterfaceRequestBody::getPortId() const
{
    return portId_;
}

void RouterInterfaceRequestBody::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool RouterInterfaceRequestBody::portIdIsSet() const
{
    return portIdIsSet_;
}

void RouterInterfaceRequestBody::unsetportId()
{
    portIdIsSet_ = false;
}

std::string RouterInterfaceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void RouterInterfaceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool RouterInterfaceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void RouterInterfaceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


