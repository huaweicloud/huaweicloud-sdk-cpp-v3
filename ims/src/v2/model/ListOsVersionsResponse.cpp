

#include "huaweicloud/ims/v2/model/ListOsVersionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListOsVersionsResponse::ListOsVersionsResponse()
{
    bodyIsSet_ = false;
}

ListOsVersionsResponse::~ListOsVersionsResponse() = default;

void ListOsVersionsResponse::validate()
{
}

web::json::value ListOsVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListOsVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ListOsVersionsResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::vector<ListOsVersionsResponseBody>& ListOsVersionsResponse::getBody()
{
    return body_;
}

void ListOsVersionsResponse::setBody(const std::vector<ListOsVersionsResponseBody>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListOsVersionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListOsVersionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


