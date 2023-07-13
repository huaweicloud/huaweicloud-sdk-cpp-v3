

#include "huaweicloud/vpc/v2/model/UpdatePortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdatePortRequest::UpdatePortRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePortRequest::~UpdatePortRequest() = default;

void UpdatePortRequest::validate()
{
}

web::json::value UpdatePortRequest::toJson() const
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

bool UpdatePortRequest::fromJson(const web::json::value& val)
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
            UpdatePortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdatePortRequest::getPortId() const
{
    return portId_;
}

void UpdatePortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool UpdatePortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void UpdatePortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

UpdatePortRequestBody UpdatePortRequest::getBody() const
{
    return body_;
}

void UpdatePortRequest::setBody(const UpdatePortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


