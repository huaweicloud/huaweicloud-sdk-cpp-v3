

#include "huaweicloud/drs/v3/model/BatchCreateJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchCreateJobsRequest::BatchCreateJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateJobsRequest::~BatchCreateJobsRequest() = default;

void BatchCreateJobsRequest::validate()
{
}

web::json::value BatchCreateJobsRequest::toJson() const
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

bool BatchCreateJobsRequest::fromJson(const web::json::value& val)
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
            BatchCreateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchCreateJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchCreateJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchCreateJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchCreateJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchCreateJobReq BatchCreateJobsRequest::getBody() const
{
    return body_;
}

void BatchCreateJobsRequest::setBody(const BatchCreateJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


