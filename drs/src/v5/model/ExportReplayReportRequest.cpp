

#include "huaweicloud/drs/v5/model/ExportReplayReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportReplayReportRequest::ExportReplayReportRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ExportReplayReportRequest::~ExportReplayReportRequest() = default;

void ExportReplayReportRequest::validate()
{
}

web::json::value ExportReplayReportRequest::toJson() const
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
bool ExportReplayReportRequest::fromJson(const web::json::value& val)
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
            ExportSqlDataReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportReplayReportRequest::getJobId() const
{
    return jobId_;
}

void ExportReplayReportRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExportReplayReportRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExportReplayReportRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExportReplayReportRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportReplayReportRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportReplayReportRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportReplayReportRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ExportSqlDataReq ExportReplayReportRequest::getBody() const
{
    return body_;
}

void ExportReplayReportRequest::setBody(const ExportSqlDataReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportReplayReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportReplayReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


