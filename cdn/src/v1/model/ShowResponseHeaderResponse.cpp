

#include "huaweicloud/cdn/v1/model/ShowResponseHeaderResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowResponseHeaderResponse::ShowResponseHeaderResponse()
{
    headersIsSet_ = false;
}

ShowResponseHeaderResponse::~ShowResponseHeaderResponse() = default;

void ShowResponseHeaderResponse::validate()
{
}

web::json::value ShowResponseHeaderResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(headersIsSet_) {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(headers_);
    }

    return val;
}

bool ShowResponseHeaderResponse::fromJson(const web::json::value& val)
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

HeaderMap ShowResponseHeaderResponse::getHeaders() const
{
    return headers_;
}

void ShowResponseHeaderResponse::setHeaders(const HeaderMap& value)
{
    headers_ = value;
    headersIsSet_ = true;
}

bool ShowResponseHeaderResponse::headersIsSet() const
{
    return headersIsSet_;
}

void ShowResponseHeaderResponse::unsetheaders()
{
    headersIsSet_ = false;
}

}
}
}
}
}


