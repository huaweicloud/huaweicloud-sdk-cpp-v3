

#include "huaweicloud/drs/v5/model/BatchStopJobsActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchStopJobsActionRequest::BatchStopJobsActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchStopJobsActionRequest::~BatchStopJobsActionRequest() = default;

void BatchStopJobsActionRequest::validate()
{
}

web::json::value BatchStopJobsActionRequest::toJson() const
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
bool BatchStopJobsActionRequest::fromJson(const web::json::value& val)
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
            BatchStopJobActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchStopJobsActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchStopJobsActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchStopJobsActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchStopJobsActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchStopJobActionReq BatchStopJobsActionRequest::getBody() const
{
    return body_;
}

void BatchStopJobsActionRequest::setBody(const BatchStopJobActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchStopJobsActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchStopJobsActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


