

#include "huaweicloud/cdn/v1/model/UpdateResponseHeaderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateResponseHeaderResponse::UpdateResponseHeaderResponse()
{
    headersIsSet_ = false;
}

UpdateResponseHeaderResponse::~UpdateResponseHeaderResponse() = default;

void UpdateResponseHeaderResponse::validate()
{
}

web::json::value UpdateResponseHeaderResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(headersIsSet_) {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(headers_);
    }

    return val;
}
bool UpdateResponseHeaderResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headers"));
        if(!fieldValue.is_null())
        {
            HeaderMap refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaders(refVal);
        }
    }
    return ok;
}


HeaderMap UpdateResponseHeaderResponse::getHeaders() const
{
    return headers_;
}

void UpdateResponseHeaderResponse::setHeaders(const HeaderMap& value)
{
    headers_ = value;
    headersIsSet_ = true;
}

bool UpdateResponseHeaderResponse::headersIsSet() const
{
    return headersIsSet_;
}

void UpdateResponseHeaderResponse::unsetheaders()
{
    headersIsSet_ = false;
}

}
}
}
}
}


