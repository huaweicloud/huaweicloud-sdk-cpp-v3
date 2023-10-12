

#include "huaweicloud/eip/v3/model/CountEipAvailableResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CountEipAvailableResourcesRequest::CountEipAvailableResourcesRequest()
{
    bodyIsSet_ = false;
}

CountEipAvailableResourcesRequest::~CountEipAvailableResourcesRequest() = default;

void CountEipAvailableResourcesRequest::validate()
{
}

web::json::value CountEipAvailableResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountEipAvailableResourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EipResourcesAvailableV3RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


EipResourcesAvailableV3RequestBody CountEipAvailableResourcesRequest::getBody() const
{
    return body_;
}

void CountEipAvailableResourcesRequest::setBody(const EipResourcesAvailableV3RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountEipAvailableResourcesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountEipAvailableResourcesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


