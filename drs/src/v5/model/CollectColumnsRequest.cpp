

#include "huaweicloud/drs/v5/model/CollectColumnsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectColumnsRequest::CollectColumnsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CollectColumnsRequest::~CollectColumnsRequest() = default;

void CollectColumnsRequest::validate()
{
}

web::json::value CollectColumnsRequest::toJson() const
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
bool CollectColumnsRequest::fromJson(const web::json::value& val)
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
            QueryColumnReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectColumnsRequest::getJobId() const
{
    return jobId_;
}

void CollectColumnsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectColumnsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectColumnsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectColumnsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectColumnsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectColumnsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectColumnsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryColumnReq CollectColumnsRequest::getBody() const
{
    return body_;
}

void CollectColumnsRequest::setBody(const QueryColumnReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectColumnsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectColumnsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


