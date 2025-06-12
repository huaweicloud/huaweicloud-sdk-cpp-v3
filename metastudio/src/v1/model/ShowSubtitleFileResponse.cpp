

#include "huaweicloud/metastudio/v1/model/ShowSubtitleFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSubtitleFileResponse::ShowSubtitleFileResponse()
{
    jobState_ = "";
    jobStateIsSet_ = false;
    subtitleFileInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowSubtitleFileResponse::~ShowSubtitleFileResponse() = default;

void ShowSubtitleFileResponse::validate()
{
}

web::json::value ShowSubtitleFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobStateIsSet_) {
        val[utility::conversions::to_string_t("job_state")] = ModelBase::toJson(jobState_);
    }
    if(subtitleFileInfoIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_info")] = ModelBase::toJson(subtitleFileInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowSubtitleFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_file_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_file_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SubtitleFileDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleFileInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowSubtitleFileResponse::getJobState() const
{
    return jobState_;
}

void ShowSubtitleFileResponse::setJobState(const std::string& value)
{
    jobState_ = value;
    jobStateIsSet_ = true;
}

bool ShowSubtitleFileResponse::jobStateIsSet() const
{
    return jobStateIsSet_;
}

void ShowSubtitleFileResponse::unsetjobState()
{
    jobStateIsSet_ = false;
}

std::vector<SubtitleFileDetail>& ShowSubtitleFileResponse::getSubtitleFileInfo()
{
    return subtitleFileInfo_;
}

void ShowSubtitleFileResponse::setSubtitleFileInfo(const std::vector<SubtitleFileDetail>& value)
{
    subtitleFileInfo_ = value;
    subtitleFileInfoIsSet_ = true;
}

bool ShowSubtitleFileResponse::subtitleFileInfoIsSet() const
{
    return subtitleFileInfoIsSet_;
}

void ShowSubtitleFileResponse::unsetsubtitleFileInfo()
{
    subtitleFileInfoIsSet_ = false;
}

std::string ShowSubtitleFileResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSubtitleFileResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSubtitleFileResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSubtitleFileResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


