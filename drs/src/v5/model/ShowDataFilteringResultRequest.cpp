

#include "huaweicloud/drs/v5/model/ShowDataFilteringResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataFilteringResultRequest::ShowDataFilteringResultRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
}

ShowDataFilteringResultRequest::~ShowDataFilteringResultRequest() = default;

void ShowDataFilteringResultRequest::validate()
{
}

web::json::value ShowDataFilteringResultRequest::toJson() const
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
bool ShowDataFilteringResultRequest::fromJson(const web::json::value& val)
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


std::string ShowDataFilteringResultRequest::getJobId() const
{
    return jobId_;
}

void ShowDataFilteringResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDataFilteringResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDataFilteringResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDataFilteringResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDataFilteringResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDataFilteringResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDataFilteringResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDataFilteringResultRequest::getQueryId() const
{
    return queryId_;
}

void ShowDataFilteringResultRequest::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ShowDataFilteringResultRequest::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ShowDataFilteringResultRequest::unsetqueryId()
{
    queryIdIsSet_ = false;
}

}
}
}
}
}


