

#include "huaweicloud/drs/v3/model/BatchDeleteJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchDeleteJobsRequest::BatchDeleteJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteJobsRequest::~BatchDeleteJobsRequest() = default;

void BatchDeleteJobsRequest::validate()
{
}

web::json::value BatchDeleteJobsRequest::toJson() const
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

bool BatchDeleteJobsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchDeleteJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchDeleteJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchDeleteJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchDeleteJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchDeleteJobReq BatchDeleteJobsRequest::getBody() const
{
    return body_;
}

void BatchDeleteJobsRequest::setBody(const BatchDeleteJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


