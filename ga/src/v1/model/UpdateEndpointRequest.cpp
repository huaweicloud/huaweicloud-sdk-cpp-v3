

#include "huaweicloud/ga/v1/model/UpdateEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointRequest::UpdateEndpointRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEndpointRequest::~UpdateEndpointRequest() = default;

void UpdateEndpointRequest::validate()
{
}

web::json::value UpdateEndpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateEndpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateEndpointRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEndpointRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void UpdateEndpointRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool UpdateEndpointRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void UpdateEndpointRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

std::string UpdateEndpointRequest::getEndpointId() const
{
    return endpointId_;
}

void UpdateEndpointRequest::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool UpdateEndpointRequest::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void UpdateEndpointRequest::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

UpdateEndpointRequestBody UpdateEndpointRequest::getBody() const
{
    return body_;
}

void UpdateEndpointRequest::setBody(const UpdateEndpointRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEndpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEndpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


