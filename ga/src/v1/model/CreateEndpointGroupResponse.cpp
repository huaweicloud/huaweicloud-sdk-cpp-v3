

#include "huaweicloud/ga/v1/model/CreateEndpointGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointGroupResponse::CreateEndpointGroupResponse()
{
    endpointGroupIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreateEndpointGroupResponse::~CreateEndpointGroupResponse() = default;

void CreateEndpointGroupResponse::validate()
{
}

web::json::value CreateEndpointGroupResponse::toJson() const
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
bool CreateEndpointGroupResponse::fromJson(const web::json::value& val)
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


EndpointGroupDetail CreateEndpointGroupResponse::getEndpointGroup() const
{
    return endpointGroup_;
}

void CreateEndpointGroupResponse::setEndpointGroup(const EndpointGroupDetail& value)
{
    endpointGroup_ = value;
    endpointGroupIsSet_ = true;
}

bool CreateEndpointGroupResponse::endpointGroupIsSet() const
{
    return endpointGroupIsSet_;
}

void CreateEndpointGroupResponse::unsetendpointGroup()
{
    endpointGroupIsSet_ = false;
}

std::string CreateEndpointGroupResponse::getRequestId() const
{
    return requestId_;
}

void CreateEndpointGroupResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateEndpointGroupResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateEndpointGroupResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


