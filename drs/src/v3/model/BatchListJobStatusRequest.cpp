

#include "huaweicloud/drs/v3/model/BatchListJobStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListJobStatusRequest::BatchListJobStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchListJobStatusRequest::~BatchListJobStatusRequest() = default;

void BatchListJobStatusRequest::validate()
{
}

web::json::value BatchListJobStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchListJobStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchQueryJobReqPage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchListJobStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchListJobStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchListJobStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchListJobStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryJobReqPage BatchListJobStatusRequest::getBody() const
{
    return body_;
}

void BatchListJobStatusRequest::setBody(const BatchQueryJobReqPage& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchListJobStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchListJobStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


