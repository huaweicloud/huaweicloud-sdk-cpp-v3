

#include "huaweicloud/cdn/v1/model/ShowResponseHeaderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowResponseHeaderResponse::ShowResponseHeaderResponse()
{
    headersIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
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

std::string ShowResponseHeaderResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowResponseHeaderResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowResponseHeaderResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowResponseHeaderResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


