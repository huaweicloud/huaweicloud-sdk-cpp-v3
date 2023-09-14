

#include "huaweicloud/smn/v2/model/PublishAppMessageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishAppMessageRequest::PublishAppMessageRequest()
{
    endpointUrn_ = "";
    endpointUrnIsSet_ = false;
    bodyIsSet_ = false;
}

PublishAppMessageRequest::~PublishAppMessageRequest() = default;

void PublishAppMessageRequest::validate()
{
}

web::json::value PublishAppMessageRequest::toJson() const
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

bool PublishAppMessageRequest::fromJson(const web::json::value& val)
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
            PublishAppMessageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string PublishAppMessageRequest::getEndpointUrn() const
{
    return endpointUrn_;
}

void PublishAppMessageRequest::setEndpointUrn(const std::string& value)
{
    endpointUrn_ = value;
    endpointUrnIsSet_ = true;
}

bool PublishAppMessageRequest::endpointUrnIsSet() const
{
    return endpointUrnIsSet_;
}

void PublishAppMessageRequest::unsetendpointUrn()
{
    endpointUrnIsSet_ = false;
}

PublishAppMessageRequestBody PublishAppMessageRequest::getBody() const
{
    return body_;
}

void PublishAppMessageRequest::setBody(const PublishAppMessageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishAppMessageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishAppMessageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


