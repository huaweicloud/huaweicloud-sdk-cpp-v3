

#include "huaweicloud/drs/v5/model/CheckDataFilterRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CheckDataFilterRulesRequest::CheckDataFilterRulesRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckDataFilterRulesRequest::~CheckDataFilterRulesRequest() = default;

void CheckDataFilterRulesRequest::validate()
{
}

web::json::value CheckDataFilterRulesRequest::toJson() const
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
bool CheckDataFilterRulesRequest::fromJson(const web::json::value& val)
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
            DataFilterRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckDataFilterRulesRequest::getJobId() const
{
    return jobId_;
}

void CheckDataFilterRulesRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CheckDataFilterRulesRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CheckDataFilterRulesRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CheckDataFilterRulesRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckDataFilterRulesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckDataFilterRulesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckDataFilterRulesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DataFilterRuleReq CheckDataFilterRulesRequest::getBody() const
{
    return body_;
}

void CheckDataFilterRulesRequest::setBody(const DataFilterRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckDataFilterRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckDataFilterRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


