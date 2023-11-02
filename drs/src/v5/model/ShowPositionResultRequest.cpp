

#include "huaweicloud/drs/v5/model/ShowPositionResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowPositionResultRequest::ShowPositionResultRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
}

ShowPositionResultRequest::~ShowPositionResultRequest() = default;

void ShowPositionResultRequest::validate()
{
}

web::json::value ShowPositionResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }

    return val;
}
bool ShowPositionResultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
    return ok;
}


std::string ShowPositionResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowPositionResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowPositionResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowPositionResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowPositionResultRequest::getJobId() const
{
    return jobId_;
}

void ShowPositionResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPositionResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPositionResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPositionResultRequest::getQueryId() const
{
    return queryId_;
}

void ShowPositionResultRequest::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ShowPositionResultRequest::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ShowPositionResultRequest::unsetqueryId()
{
    queryIdIsSet_ = false;
}

}
}
}
}
}


