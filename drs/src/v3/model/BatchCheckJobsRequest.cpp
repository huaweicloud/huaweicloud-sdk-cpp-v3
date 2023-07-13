

#include "huaweicloud/drs/v3/model/BatchCheckJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchCheckJobsRequest::BatchCheckJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCheckJobsRequest::~BatchCheckJobsRequest() = default;

void BatchCheckJobsRequest::validate()
{
}

web::json::value BatchCheckJobsRequest::toJson() const
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

bool BatchCheckJobsRequest::fromJson(const web::json::value& val)
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
            BatchPrecheckReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchCheckJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchCheckJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchCheckJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchCheckJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchPrecheckReq BatchCheckJobsRequest::getBody() const
{
    return body_;
}

void BatchCheckJobsRequest::setBody(const BatchPrecheckReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCheckJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCheckJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


