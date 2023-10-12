

#include "huaweicloud/drs/v5/model/CollectDbObjectsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectDbObjectsInfoRequest::CollectDbObjectsInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CollectDbObjectsInfoRequest::~CollectDbObjectsInfoRequest() = default;

void CollectDbObjectsInfoRequest::validate()
{
}

web::json::value CollectDbObjectsInfoRequest::toJson() const
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
bool CollectDbObjectsInfoRequest::fromJson(const web::json::value& val)
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
            QuerySelectObjectInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectDbObjectsInfoRequest::getJobId() const
{
    return jobId_;
}

void CollectDbObjectsInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectDbObjectsInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectDbObjectsInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectDbObjectsInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectDbObjectsInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectDbObjectsInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectDbObjectsInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QuerySelectObjectInfoReq CollectDbObjectsInfoRequest::getBody() const
{
    return body_;
}

void CollectDbObjectsInfoRequest::setBody(const QuerySelectObjectInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectDbObjectsInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectDbObjectsInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


