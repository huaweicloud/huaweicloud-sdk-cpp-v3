

#include "huaweicloud/drs/v5/model/DeleteDataFilterRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteDataFilterRulesRequest::DeleteDataFilterRulesRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDataFilterRulesRequest::~DeleteDataFilterRulesRequest() = default;

void DeleteDataFilterRulesRequest::validate()
{
}

web::json::value DeleteDataFilterRulesRequest::toJson() const
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
bool DeleteDataFilterRulesRequest::fromJson(const web::json::value& val)
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
            DeleteDataFilterRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteDataFilterRulesRequest::getJobId() const
{
    return jobId_;
}

void DeleteDataFilterRulesRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDataFilterRulesRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDataFilterRulesRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteDataFilterRulesRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteDataFilterRulesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteDataFilterRulesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteDataFilterRulesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteDataFilterRuleReq DeleteDataFilterRulesRequest::getBody() const
{
    return body_;
}

void DeleteDataFilterRulesRequest::setBody(const DeleteDataFilterRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDataFilterRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDataFilterRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


