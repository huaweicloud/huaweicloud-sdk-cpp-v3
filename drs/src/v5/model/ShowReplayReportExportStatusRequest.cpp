

#include "huaweicloud/drs/v5/model/ShowReplayReportExportStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayReportExportStatusRequest::ShowReplayReportExportStatusRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

ShowReplayReportExportStatusRequest::~ShowReplayReportExportStatusRequest() = default;

void ShowReplayReportExportStatusRequest::validate()
{
}

web::json::value ShowReplayReportExportStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}
bool ShowReplayReportExportStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    return ok;
}


std::string ShowReplayReportExportStatusRequest::getJobId() const
{
    return jobId_;
}

void ShowReplayReportExportStatusRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReplayReportExportStatusRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReplayReportExportStatusRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReplayReportExportStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReplayReportExportStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReplayReportExportStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReplayReportExportStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowReplayReportExportStatusRequest::getFileType() const
{
    return fileType_;
}

void ShowReplayReportExportStatusRequest::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowReplayReportExportStatusRequest::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowReplayReportExportStatusRequest::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


