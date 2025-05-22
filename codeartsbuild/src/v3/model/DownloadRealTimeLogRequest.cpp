

#include "huaweicloud/codeartsbuild/v3/model/DownloadRealTimeLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadRealTimeLogRequest::DownloadRealTimeLogRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    length_ = 0;
    lengthIsSet_ = false;
}

DownloadRealTimeLogRequest::~DownloadRealTimeLogRequest() = default;

void DownloadRealTimeLogRequest::validate()
{
}

web::json::value DownloadRealTimeLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(lengthIsSet_) {
        val[utility::conversions::to_string_t("length")] = ModelBase::toJson(length_);
    }

    return val;
}
bool DownloadRealTimeLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLength(refVal);
        }
    }
    return ok;
}


std::string DownloadRealTimeLogRequest::getJobId() const
{
    return jobId_;
}

void DownloadRealTimeLogRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DownloadRealTimeLogRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DownloadRealTimeLogRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t DownloadRealTimeLogRequest::getBuildNo() const
{
    return buildNo_;
}

void DownloadRealTimeLogRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool DownloadRealTimeLogRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void DownloadRealTimeLogRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

int32_t DownloadRealTimeLogRequest::getOffset() const
{
    return offset_;
}

void DownloadRealTimeLogRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool DownloadRealTimeLogRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void DownloadRealTimeLogRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t DownloadRealTimeLogRequest::getLength() const
{
    return length_;
}

void DownloadRealTimeLogRequest::setLength(int32_t value)
{
    length_ = value;
    lengthIsSet_ = true;
}

bool DownloadRealTimeLogRequest::lengthIsSet() const
{
    return lengthIsSet_;
}

void DownloadRealTimeLogRequest::unsetlength()
{
    lengthIsSet_ = false;
}

}
}
}
}
}


