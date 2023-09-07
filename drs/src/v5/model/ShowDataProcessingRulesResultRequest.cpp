

#include "huaweicloud/drs/v5/model/ShowDataProcessingRulesResultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataProcessingRulesResultRequest::ShowDataProcessingRulesResultRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
}

ShowDataProcessingRulesResultRequest::~ShowDataProcessingRulesResultRequest() = default;

void ShowDataProcessingRulesResultRequest::validate()
{
}

web::json::value ShowDataProcessingRulesResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }

    return val;
}

bool ShowDataProcessingRulesResultRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    return ok;
}

std::string ShowDataProcessingRulesResultRequest::getJobId() const
{
    return jobId_;
}

void ShowDataProcessingRulesResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDataProcessingRulesResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDataProcessingRulesResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDataProcessingRulesResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDataProcessingRulesResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDataProcessingRulesResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDataProcessingRulesResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDataProcessingRulesResultRequest::getQueryId() const
{
    return queryId_;
}

void ShowDataProcessingRulesResultRequest::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ShowDataProcessingRulesResultRequest::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ShowDataProcessingRulesResultRequest::unsetqueryId()
{
    queryIdIsSet_ = false;
}

}
}
}
}
}


