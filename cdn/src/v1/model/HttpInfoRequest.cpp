

#include "huaweicloud/cdn/v1/model/HttpInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HttpInfoRequest::HttpInfoRequest()
{
    httpsIsSet_ = false;
}

HttpInfoRequest::~HttpInfoRequest() = default;

void HttpInfoRequest::validate()
{
}

web::json::value HttpInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }

    return val;
}
bool HttpInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            HttpInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    return ok;
}


HttpInfoRequestBody HttpInfoRequest::getHttps() const
{
    return https_;
}

void HttpInfoRequest::setHttps(const HttpInfoRequestBody& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool HttpInfoRequest::httpsIsSet() const
{
    return httpsIsSet_;
}

void HttpInfoRequest::unsethttps()
{
    httpsIsSet_ = false;
}

}
}
}
}
}


