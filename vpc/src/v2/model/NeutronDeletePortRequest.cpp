

#include "huaweicloud/vpc/v2/model/NeutronDeletePortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeletePortRequest::NeutronDeletePortRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
}

NeutronDeletePortRequest::~NeutronDeletePortRequest() = default;

void NeutronDeletePortRequest::validate()
{
}

web::json::value NeutronDeletePortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}
bool NeutronDeletePortRequest::fromJson(const web::json::value& val)
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


std::string NeutronDeletePortRequest::getPortId() const
{
    return portId_;
}

void NeutronDeletePortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NeutronDeletePortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void NeutronDeletePortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


