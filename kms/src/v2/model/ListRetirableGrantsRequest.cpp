

#include "huaweicloud/kms/v2/model/ListRetirableGrantsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListRetirableGrantsRequest::ListRetirableGrantsRequest()
{
    bodyIsSet_ = false;
}

ListRetirableGrantsRequest::~ListRetirableGrantsRequest() = default;

void ListRetirableGrantsRequest::validate()
{
}

web::json::value ListRetirableGrantsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRetirableGrantsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListRetirableGrantsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListRetirableGrantsRequestBody ListRetirableGrantsRequest::getBody() const
{
    return body_;
}

void ListRetirableGrantsRequest::setBody(const ListRetirableGrantsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRetirableGrantsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRetirableGrantsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


