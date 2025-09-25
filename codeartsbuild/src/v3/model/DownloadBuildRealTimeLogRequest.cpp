

#include "huaweicloud/codeartsbuild/v3/model/DownloadBuildRealTimeLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadBuildRealTimeLogRequest::DownloadBuildRealTimeLogRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    startOffset_ = 0;
    startOffsetIsSet_ = false;
    endOffset_ = 0;
    endOffsetIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

DownloadBuildRealTimeLogRequest::~DownloadBuildRealTimeLogRequest() = default;

void DownloadBuildRealTimeLogRequest::validate()
{
}

web::json::value DownloadBuildRealTimeLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(startOffsetIsSet_) {
        val[utility::conversions::to_string_t("start_offset")] = ModelBase::toJson(startOffset_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool DownloadBuildRealTimeLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string DownloadBuildRealTimeLogRequest::getJobId() const
{
    return jobId_;
}

void DownloadBuildRealTimeLogRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DownloadBuildRealTimeLogRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DownloadBuildRealTimeLogRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t DownloadBuildRealTimeLogRequest::getBuildNo() const
{
    return buildNo_;
}

void DownloadBuildRealTimeLogRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool DownloadBuildRealTimeLogRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void DownloadBuildRealTimeLogRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

int32_t DownloadBuildRealTimeLogRequest::getStartOffset() const
{
    return startOffset_;
}

void DownloadBuildRealTimeLogRequest::setStartOffset(int32_t value)
{
    startOffset_ = value;
    startOffsetIsSet_ = true;
}

bool DownloadBuildRealTimeLogRequest::startOffsetIsSet() const
{
    return startOffsetIsSet_;
}

void DownloadBuildRealTimeLogRequest::unsetstartOffset()
{
    startOffsetIsSet_ = false;
}

int32_t DownloadBuildRealTimeLogRequest::getEndOffset() const
{
    return endOffset_;
}

void DownloadBuildRealTimeLogRequest::setEndOffset(int32_t value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool DownloadBuildRealTimeLogRequest::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void DownloadBuildRealTimeLogRequest::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

std::string DownloadBuildRealTimeLogRequest::getSort() const
{
    return sort_;
}

void DownloadBuildRealTimeLogRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool DownloadBuildRealTimeLogRequest::sortIsSet() const
{
    return sortIsSet_;
}

void DownloadBuildRealTimeLogRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string DownloadBuildRealTimeLogRequest::getSize() const
{
    return size_;
}

void DownloadBuildRealTimeLogRequest::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DownloadBuildRealTimeLogRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void DownloadBuildRealTimeLogRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


