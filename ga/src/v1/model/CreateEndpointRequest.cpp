

#include "huaweicloud/ga/v1/model/CreateEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointRequest::CreateEndpointRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateEndpointRequest::~CreateEndpointRequest() = default;

void CreateEndpointRequest::validate()
{
}

web::json::value CreateEndpointRequest::toJson() const
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
bool CreateEndpointRequest::fromJson(const web::json::value& val)
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
            CreateEndpointRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateEndpointRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void CreateEndpointRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool CreateEndpointRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void CreateEndpointRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

CreateEndpointRequestBody CreateEndpointRequest::getBody() const
{
    return body_;
}

void CreateEndpointRequest::setBody(const CreateEndpointRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEndpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEndpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


