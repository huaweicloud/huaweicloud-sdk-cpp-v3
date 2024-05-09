

#include "huaweicloud/drs/v3/model/DownloadCompareResultFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DownloadCompareResultFileRequest::DownloadCompareResultFileRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareType_ = "";
    compareTypeIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    bodyIsSet_ = false;
}

DownloadCompareResultFileRequest::~DownloadCompareResultFileRequest() = default;

void DownloadCompareResultFileRequest::validate()
{
}

web::json::value DownloadCompareResultFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("Region")] = ModelBase::toJson(region_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DownloadCompareResultFileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportCompareResultReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DownloadCompareResultFileRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadCompareResultFileRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadCompareResultFileRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadCompareResultFileRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadCompareResultFileRequest::getJobId() const
{
    return jobId_;
}

void DownloadCompareResultFileRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DownloadCompareResultFileRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DownloadCompareResultFileRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DownloadCompareResultFileRequest::getCompareType() const
{
    return compareType_;
}

void DownloadCompareResultFileRequest::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool DownloadCompareResultFileRequest::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void DownloadCompareResultFileRequest::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string DownloadCompareResultFileRequest::getCompareJobId() const
{
    return compareJobId_;
}

void DownloadCompareResultFileRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool DownloadCompareResultFileRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void DownloadCompareResultFileRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string DownloadCompareResultFileRequest::getRegion() const
{
    return region_;
}

void DownloadCompareResultFileRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DownloadCompareResultFileRequest::regionIsSet() const
{
    return regionIsSet_;
}

void DownloadCompareResultFileRequest::unsetregion()
{
    regionIsSet_ = false;
}

ExportCompareResultReq DownloadCompareResultFileRequest::getBody() const
{
    return body_;
}

void DownloadCompareResultFileRequest::setBody(const ExportCompareResultReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadCompareResultFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadCompareResultFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


