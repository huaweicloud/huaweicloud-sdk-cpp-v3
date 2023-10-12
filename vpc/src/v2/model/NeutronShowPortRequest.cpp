

#include "huaweicloud/vpc/v2/model/NeutronShowPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowPortRequest::NeutronShowPortRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
}

NeutronShowPortRequest::~NeutronShowPortRequest() = default;

void NeutronShowPortRequest::validate()
{
}

web::json::value NeutronShowPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}
bool NeutronShowPortRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NeutronShowPortRequest::getPortId() const
{
    return portId_;
}

void NeutronShowPortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NeutronShowPortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void NeutronShowPortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


