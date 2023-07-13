

#include "huaweicloud/vpc/v2/model/NeutronUpdatePortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdatePortRequest::NeutronUpdatePortRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdatePortRequest::~NeutronUpdatePortRequest() = default;

void NeutronUpdatePortRequest::validate()
{
}

web::json::value NeutronUpdatePortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronUpdatePortRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdatePortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NeutronUpdatePortRequest::getPortId() const
{
    return portId_;
}

void NeutronUpdatePortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NeutronUpdatePortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void NeutronUpdatePortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

NeutronUpdatePortRequestBody NeutronUpdatePortRequest::getBody() const
{
    return body_;
}

void NeutronUpdatePortRequest::setBody(const NeutronUpdatePortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdatePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdatePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


