

#include "huaweicloud/cdn/v1/model/HeaderBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HeaderBody::HeaderBody()
{
    headersIsSet_ = false;
}

HeaderBody::~HeaderBody() = default;

void HeaderBody::validate()
{
}

web::json::value HeaderBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(headersIsSet_) {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(headers_);
    }

    return val;
}

bool HeaderBody::fromJson(const web::json::value& val)
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

HeaderMap HeaderBody::getHeaders() const
{
    return headers_;
}

void HeaderBody::setHeaders(const HeaderMap& value)
{
    headers_ = value;
    headersIsSet_ = true;
}

bool HeaderBody::headersIsSet() const
{
    return headersIsSet_;
}

void HeaderBody::unsetheaders()
{
    headersIsSet_ = false;
}

}
}
}
}
}


