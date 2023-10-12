

#include "huaweicloud/drs/v3/model/BatchStopJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchStopJobsRequest::BatchStopJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchStopJobsRequest::~BatchStopJobsRequest() = default;

void BatchStopJobsRequest::validate()
{
}

web::json::value BatchStopJobsRequest::toJson() const
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
bool BatchStopJobsRequest::fromJson(const web::json::value& val)
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
            BatchPauseJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchStopJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchStopJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchStopJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchStopJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchPauseJobReq BatchStopJobsRequest::getBody() const
{
    return body_;
}

void BatchStopJobsRequest::setBody(const BatchPauseJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchStopJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchStopJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


