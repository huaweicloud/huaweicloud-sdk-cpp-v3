

#include "huaweicloud/ga/v1/model/UpdateEndpointGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointGroupRequest::UpdateEndpointGroupRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEndpointGroupRequest::~UpdateEndpointGroupRequest() = default;

void UpdateEndpointGroupRequest::validate()
{
}

web::json::value UpdateEndpointGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateEndpointGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateEndpointGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEndpointGroupRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void UpdateEndpointGroupRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool UpdateEndpointGroupRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void UpdateEndpointGroupRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

UpdateEndpointGroupRequestBody UpdateEndpointGroupRequest::getBody() const
{
    return body_;
}

void UpdateEndpointGroupRequest::setBody(const UpdateEndpointGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEndpointGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEndpointGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


