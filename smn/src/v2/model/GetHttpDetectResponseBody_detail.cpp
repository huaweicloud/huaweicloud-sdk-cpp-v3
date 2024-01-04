

#include "huaweicloud/smn/v2/model/GetHttpDetectResponseBody_detail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




GetHttpDetectResponseBody_detail::GetHttpDetectResponseBody_detail()
{
    httpCode_ = 0;
    httpCodeIsSet_ = false;
    httpResponse_ = "";
    httpResponseIsSet_ = false;
}

GetHttpDetectResponseBody_detail::~GetHttpDetectResponseBody_detail() = default;

void GetHttpDetectResponseBody_detail::validate()
{
}

web::json::value GetHttpDetectResponseBody_detail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpCodeIsSet_) {
        val[utility::conversions::to_string_t("httpCode")] = ModelBase::toJson(httpCode_);
    }
    if(httpResponseIsSet_) {
        val[utility::conversions::to_string_t("httpResponse")] = ModelBase::toJson(httpResponse_);
    }

    return val;
}
bool GetHttpDetectResponseBody_detail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("httpCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("httpResponse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpResponse"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpResponse(refVal);
        }
    }
    return ok;
}


int32_t GetHttpDetectResponseBody_detail::getHttpCode() const
{
    return httpCode_;
}

void GetHttpDetectResponseBody_detail::setHttpCode(int32_t value)
{
    httpCode_ = value;
    httpCodeIsSet_ = true;
}

bool GetHttpDetectResponseBody_detail::httpCodeIsSet() const
{
    return httpCodeIsSet_;
}

void GetHttpDetectResponseBody_detail::unsethttpCode()
{
    httpCodeIsSet_ = false;
}

std::string GetHttpDetectResponseBody_detail::getHttpResponse() const
{
    return httpResponse_;
}

void GetHttpDetectResponseBody_detail::setHttpResponse(const std::string& value)
{
    httpResponse_ = value;
    httpResponseIsSet_ = true;
}

bool GetHttpDetectResponseBody_detail::httpResponseIsSet() const
{
    return httpResponseIsSet_;
}

void GetHttpDetectResponseBody_detail::unsethttpResponse()
{
    httpResponseIsSet_ = false;
}

}
}
}
}
}


