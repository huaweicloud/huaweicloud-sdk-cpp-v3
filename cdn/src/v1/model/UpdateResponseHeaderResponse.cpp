

#include "huaweicloud/cdn/v1/model/UpdateResponseHeaderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateResponseHeaderResponse::UpdateResponseHeaderResponse()
{
    headersIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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

std::string UpdateResponseHeaderResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateResponseHeaderResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateResponseHeaderResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateResponseHeaderResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


