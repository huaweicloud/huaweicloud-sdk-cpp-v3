

#include "huaweicloud/drs/v5/model/UpdateBatchAsyncJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateBatchAsyncJobsRequest::UpdateBatchAsyncJobsRequest()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBatchAsyncJobsRequest::~UpdateBatchAsyncJobsRequest() = default;

void UpdateBatchAsyncJobsRequest::validate()
{
}

web::json::value UpdateBatchAsyncJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBatchAsyncJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
        }
    }
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
            BatchAsyncUpdateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBatchAsyncJobsRequest::getAsyncJobId() const
{
    return asyncJobId_;
}

void UpdateBatchAsyncJobsRequest::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool UpdateBatchAsyncJobsRequest::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void UpdateBatchAsyncJobsRequest::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string UpdateBatchAsyncJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateBatchAsyncJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateBatchAsyncJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateBatchAsyncJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchAsyncUpdateJobReq UpdateBatchAsyncJobsRequest::getBody() const
{
    return body_;
}

void UpdateBatchAsyncJobsRequest::setBody(const BatchAsyncUpdateJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBatchAsyncJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBatchAsyncJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


