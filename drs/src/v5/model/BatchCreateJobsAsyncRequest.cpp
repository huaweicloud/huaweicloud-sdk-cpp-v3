

#include "huaweicloud/drs/v5/model/BatchCreateJobsAsyncRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchCreateJobsAsyncRequest::BatchCreateJobsAsyncRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateJobsAsyncRequest::~BatchCreateJobsAsyncRequest() = default;

void BatchCreateJobsAsyncRequest::validate()
{
}

web::json::value BatchCreateJobsAsyncRequest::toJson() const
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
bool BatchCreateJobsAsyncRequest::fromJson(const web::json::value& val)
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
            BatchAsyncCreateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateJobsAsyncRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchCreateJobsAsyncRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchCreateJobsAsyncRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchCreateJobsAsyncRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchAsyncCreateJobReq BatchCreateJobsAsyncRequest::getBody() const
{
    return body_;
}

void BatchCreateJobsAsyncRequest::setBody(const BatchAsyncCreateJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateJobsAsyncRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateJobsAsyncRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


