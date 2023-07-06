

#include "huaweicloud/drs/v3/model/BatchStartJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchStartJobsRequest::BatchStartJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchStartJobsRequest::~BatchStartJobsRequest() = default;

void BatchStartJobsRequest::validate()
{
}

web::json::value BatchStartJobsRequest::toJson() const
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

bool BatchStartJobsRequest::fromJson(const web::json::value& val)
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
            BatchStartJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchStartJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchStartJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchStartJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchStartJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchStartJobReq BatchStartJobsRequest::getBody() const
{
    return body_;
}

void BatchStartJobsRequest::setBody(const BatchStartJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchStartJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchStartJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


