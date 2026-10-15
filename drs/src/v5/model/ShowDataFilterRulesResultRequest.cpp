

#include "huaweicloud/drs/v5/model/ShowDataFilterRulesResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataFilterRulesResultRequest::ShowDataFilterRulesResultRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowDataFilterRulesResultRequest::~ShowDataFilterRulesResultRequest() = default;

void ShowDataFilterRulesResultRequest::validate()
{
}

web::json::value ShowDataFilterRulesResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowDataFilterRulesResultRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
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
    return ok;
}


std::string ShowDataFilterRulesResultRequest::getJobId() const
{
    return jobId_;
}

void ShowDataFilterRulesResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDataFilterRulesResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDataFilterRulesResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDataFilterRulesResultRequest::getQueryId() const
{
    return queryId_;
}

void ShowDataFilterRulesResultRequest::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ShowDataFilterRulesResultRequest::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ShowDataFilterRulesResultRequest::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string ShowDataFilterRulesResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDataFilterRulesResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDataFilterRulesResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDataFilterRulesResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


