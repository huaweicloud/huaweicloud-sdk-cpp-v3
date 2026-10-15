

#include "huaweicloud/drs/v5/model/ShowReportFileObsUrisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReportFileObsUrisRequest::ShowReportFileObsUrisRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    reportType_ = "";
    reportTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowReportFileObsUrisRequest::~ShowReportFileObsUrisRequest() = default;

void ShowReportFileObsUrisRequest::validate()
{
}

web::json::value ShowReportFileObsUrisRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(reportTypeIsSet_) {
        val[utility::conversions::to_string_t("report_type")] = ModelBase::toJson(reportType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowReportFileObsUrisRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("report_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportType(refVal);
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


std::string ShowReportFileObsUrisRequest::getJobId() const
{
    return jobId_;
}

void ShowReportFileObsUrisRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReportFileObsUrisRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReportFileObsUrisRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReportFileObsUrisRequest::getReportType() const
{
    return reportType_;
}

void ShowReportFileObsUrisRequest::setReportType(const std::string& value)
{
    reportType_ = value;
    reportTypeIsSet_ = true;
}

bool ShowReportFileObsUrisRequest::reportTypeIsSet() const
{
    return reportTypeIsSet_;
}

void ShowReportFileObsUrisRequest::unsetreportType()
{
    reportTypeIsSet_ = false;
}

std::string ShowReportFileObsUrisRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReportFileObsUrisRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReportFileObsUrisRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReportFileObsUrisRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


