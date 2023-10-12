

#include "huaweicloud/smn/v2/model/UpdateApplicationEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateApplicationEndpointRequest::UpdateApplicationEndpointRequest()
{
    endpointUrn_ = "";
    endpointUrnIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationEndpointRequest::~UpdateApplicationEndpointRequest() = default;

void UpdateApplicationEndpointRequest::validate()
{
}

web::json::value UpdateApplicationEndpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointUrnIsSet_) {
        val[utility::conversions::to_string_t("endpoint_urn")] = ModelBase::toJson(endpointUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateApplicationEndpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateApplicationEndpointRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationEndpointRequest::getEndpointUrn() const
{
    return endpointUrn_;
}

void UpdateApplicationEndpointRequest::setEndpointUrn(const std::string& value)
{
    endpointUrn_ = value;
    endpointUrnIsSet_ = true;
}

bool UpdateApplicationEndpointRequest::endpointUrnIsSet() const
{
    return endpointUrnIsSet_;
}

void UpdateApplicationEndpointRequest::unsetendpointUrn()
{
    endpointUrnIsSet_ = false;
}

UpdateApplicationEndpointRequestBody UpdateApplicationEndpointRequest::getBody() const
{
    return body_;
}

void UpdateApplicationEndpointRequest::setBody(const UpdateApplicationEndpointRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationEndpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationEndpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


