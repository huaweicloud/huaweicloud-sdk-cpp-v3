

#include "huaweicloud/drs/v5/model/CollectDataFilterRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectDataFilterRulesRequest::CollectDataFilterRulesRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CollectDataFilterRulesRequest::~CollectDataFilterRulesRequest() = default;

void CollectDataFilterRulesRequest::validate()
{
}

web::json::value CollectDataFilterRulesRequest::toJson() const
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
bool CollectDataFilterRulesRequest::fromJson(const web::json::value& val)
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
            QueryDataFilterRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectDataFilterRulesRequest::getJobId() const
{
    return jobId_;
}

void CollectDataFilterRulesRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectDataFilterRulesRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectDataFilterRulesRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectDataFilterRulesRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectDataFilterRulesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectDataFilterRulesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectDataFilterRulesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryDataFilterRuleReq CollectDataFilterRulesRequest::getBody() const
{
    return body_;
}

void CollectDataFilterRulesRequest::setBody(const QueryDataFilterRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectDataFilterRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectDataFilterRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


