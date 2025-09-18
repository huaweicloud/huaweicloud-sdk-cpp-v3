

#include "huaweicloud/ga/v1/model/UpdateEndpointGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointGroupResponse::UpdateEndpointGroupResponse()
{
    endpointGroupIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateEndpointGroupResponse::~UpdateEndpointGroupResponse() = default;

void UpdateEndpointGroupResponse::validate()
{
}

web::json::value UpdateEndpointGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group")] = ModelBase::toJson(endpointGroup_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateEndpointGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group"));
        if(!fieldValue.is_null())
        {
            EndpointGroupDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


EndpointGroupDetail UpdateEndpointGroupResponse::getEndpointGroup() const
{
    return endpointGroup_;
}

void UpdateEndpointGroupResponse::setEndpointGroup(const EndpointGroupDetail& value)
{
    endpointGroup_ = value;
    endpointGroupIsSet_ = true;
}

bool UpdateEndpointGroupResponse::endpointGroupIsSet() const
{
    return endpointGroupIsSet_;
}

void UpdateEndpointGroupResponse::unsetendpointGroup()
{
    endpointGroupIsSet_ = false;
}

std::string UpdateEndpointGroupResponse::getRequestId() const
{
    return requestId_;
}

void UpdateEndpointGroupResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateEndpointGroupResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateEndpointGroupResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


