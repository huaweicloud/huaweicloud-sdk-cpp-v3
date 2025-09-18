

#include "huaweicloud/ga/v1/model/CreateEndpointGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointGroupRequest::CreateEndpointGroupRequest()
{
    bodyIsSet_ = false;
}

CreateEndpointGroupRequest::~CreateEndpointGroupRequest() = default;

void CreateEndpointGroupRequest::validate()
{
}

web::json::value CreateEndpointGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateEndpointGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateEndpointGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateEndpointGroupRequestBody CreateEndpointGroupRequest::getBody() const
{
    return body_;
}

void CreateEndpointGroupRequest::setBody(const CreateEndpointGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEndpointGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEndpointGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


