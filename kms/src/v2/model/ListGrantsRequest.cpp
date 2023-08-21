

#include "huaweicloud/kms/v2/model/ListGrantsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListGrantsRequest::ListGrantsRequest()
{
    bodyIsSet_ = false;
}

ListGrantsRequest::~ListGrantsRequest() = default;

void ListGrantsRequest::validate()
{
}

web::json::value ListGrantsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListGrantsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListGrantsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ListGrantsRequestBody ListGrantsRequest::getBody() const
{
    return body_;
}

void ListGrantsRequest::setBody(const ListGrantsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGrantsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGrantsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


