

#include "huaweicloud/drs/v5/model/SaveDataFilterRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SaveDataFilterRulesRequest::SaveDataFilterRulesRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SaveDataFilterRulesRequest::~SaveDataFilterRulesRequest() = default;

void SaveDataFilterRulesRequest::validate()
{
}

web::json::value SaveDataFilterRulesRequest::toJson() const
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
bool SaveDataFilterRulesRequest::fromJson(const web::json::value& val)
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


std::string SaveDataFilterRulesRequest::getJobId() const
{
    return jobId_;
}

void SaveDataFilterRulesRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SaveDataFilterRulesRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SaveDataFilterRulesRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SaveDataFilterRulesRequest::getXLanguage() const
{
    return xLanguage_;
}

void SaveDataFilterRulesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SaveDataFilterRulesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SaveDataFilterRulesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DataFilterRuleReq SaveDataFilterRulesRequest::getBody() const
{
    return body_;
}

void SaveDataFilterRulesRequest::setBody(const DataFilterRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveDataFilterRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveDataFilterRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


