

#include "huaweicloud/ga/v1/model/ShowEndpointGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowEndpointGroupResponse::ShowEndpointGroupResponse()
{
    endpointGroupIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowEndpointGroupResponse::~ShowEndpointGroupResponse() = default;

void ShowEndpointGroupResponse::validate()
{
}

web::json::value ShowEndpointGroupResponse::toJson() const
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
bool ShowEndpointGroupResponse::fromJson(const web::json::value& val)
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


EndpointGroupDetail ShowEndpointGroupResponse::getEndpointGroup() const
{
    return endpointGroup_;
}

void ShowEndpointGroupResponse::setEndpointGroup(const EndpointGroupDetail& value)
{
    endpointGroup_ = value;
    endpointGroupIsSet_ = true;
}

bool ShowEndpointGroupResponse::endpointGroupIsSet() const
{
    return endpointGroupIsSet_;
}

void ShowEndpointGroupResponse::unsetendpointGroup()
{
    endpointGroupIsSet_ = false;
}

std::string ShowEndpointGroupResponse::getRequestId() const
{
    return requestId_;
}

void ShowEndpointGroupResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowEndpointGroupResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowEndpointGroupResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


