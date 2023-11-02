

#include "huaweicloud/drs/v5/model/CollectPositionAsyncRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectPositionAsyncRequest::CollectPositionAsyncRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CollectPositionAsyncRequest::~CollectPositionAsyncRequest() = default;

void CollectPositionAsyncRequest::validate()
{
}

web::json::value CollectPositionAsyncRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CollectPositionAsyncRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
            QueryDbPositionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectPositionAsyncRequest::getJobId() const
{
    return jobId_;
}

void CollectPositionAsyncRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectPositionAsyncRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectPositionAsyncRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectPositionAsyncRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectPositionAsyncRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectPositionAsyncRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectPositionAsyncRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryDbPositionReq CollectPositionAsyncRequest::getBody() const
{
    return body_;
}

void CollectPositionAsyncRequest::setBody(const QueryDbPositionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectPositionAsyncRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectPositionAsyncRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


