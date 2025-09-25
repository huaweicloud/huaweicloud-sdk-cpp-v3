

#include "huaweicloud/codeartsbuild/v3/model/ShowActionIInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowActionIInfoRequest::ShowActionIInfoRequest()
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
}

ShowActionIInfoRequest::~ShowActionIInfoRequest() = default;

void ShowActionIInfoRequest::validate()
{
}

web::json::value ShowActionIInfoRequest::toJson() const
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

    return val;
}
bool ShowActionIInfoRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowActionIInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowActionIInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowActionIInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowActionIInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowActionIInfoRequest::getBuildNo() const
{
    return buildNo_;
}

void ShowActionIInfoRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ShowActionIInfoRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ShowActionIInfoRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

int32_t ShowActionIInfoRequest::getStartOffset() const
{
    return startOffset_;
}

void ShowActionIInfoRequest::setStartOffset(int32_t value)
{
    startOffset_ = value;
    startOffsetIsSet_ = true;
}

bool ShowActionIInfoRequest::startOffsetIsSet() const
{
    return startOffsetIsSet_;
}

void ShowActionIInfoRequest::unsetstartOffset()
{
    startOffsetIsSet_ = false;
}

int32_t ShowActionIInfoRequest::getEndOffset() const
{
    return endOffset_;
}

void ShowActionIInfoRequest::setEndOffset(int32_t value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool ShowActionIInfoRequest::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void ShowActionIInfoRequest::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

std::string ShowActionIInfoRequest::getSort() const
{
    return sort_;
}

void ShowActionIInfoRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ShowActionIInfoRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ShowActionIInfoRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


