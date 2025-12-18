

#include "huaweicloud/cce/v5/model/SubscribePackageProductsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




SubscribePackageProductsRequest::SubscribePackageProductsRequest()
{
    bodyIsSet_ = false;
}

SubscribePackageProductsRequest::~SubscribePackageProductsRequest() = default;

void SubscribePackageProductsRequest::validate()
{
}

web::json::value SubscribePackageProductsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SubscribePackageProductsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SubscribePackageProductsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SubscribePackageProductsRequestBody SubscribePackageProductsRequest::getBody() const
{
    return body_;
}

void SubscribePackageProductsRequest::setBody(const SubscribePackageProductsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SubscribePackageProductsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SubscribePackageProductsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


