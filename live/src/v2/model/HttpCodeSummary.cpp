

#include "huaweicloud/live/v2/model/HttpCodeSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




HttpCodeSummary::HttpCodeSummary()
{
    httpCodesIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

HttpCodeSummary::~HttpCodeSummary() = default;

void HttpCodeSummary::validate()
{
}

web::json::value HttpCodeSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpCodesIsSet_) {
        val[utility::conversions::to_string_t("http_codes")] = ModelBase::toJson(httpCodes_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}

bool HttpCodeSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpCode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}

std::vector<HttpCode>& HttpCodeSummary::getHttpCodes()
{
    return httpCodes_;
}

void HttpCodeSummary::setHttpCodes(const std::vector<HttpCode>& value)
{
    httpCodes_ = value;
    httpCodesIsSet_ = true;
}

bool HttpCodeSummary::httpCodesIsSet() const
{
    return httpCodesIsSet_;
}

void HttpCodeSummary::unsethttpCodes()
{
    httpCodesIsSet_ = false;
}

std::string HttpCodeSummary::getTime() const
{
    return time_;
}

void HttpCodeSummary::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool HttpCodeSummary::timeIsSet() const
{
    return timeIsSet_;
}

void HttpCodeSummary::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


