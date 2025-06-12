

#include "huaweicloud/codeartsbuild/v3/model/DownloadJunitCoverageZipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadJunitCoverageZipRequest::DownloadJunitCoverageZipRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
}

DownloadJunitCoverageZipRequest::~DownloadJunitCoverageZipRequest() = default;

void DownloadJunitCoverageZipRequest::validate()
{
}

web::json::value DownloadJunitCoverageZipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }

    return val;
}
bool DownloadJunitCoverageZipRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    return ok;
}


std::string DownloadJunitCoverageZipRequest::getJobId() const
{
    return jobId_;
}

void DownloadJunitCoverageZipRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DownloadJunitCoverageZipRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DownloadJunitCoverageZipRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t DownloadJunitCoverageZipRequest::getBuildNo() const
{
    return buildNo_;
}

void DownloadJunitCoverageZipRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool DownloadJunitCoverageZipRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void DownloadJunitCoverageZipRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string DownloadJunitCoverageZipRequest::getRootId() const
{
    return rootId_;
}

void DownloadJunitCoverageZipRequest::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool DownloadJunitCoverageZipRequest::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void DownloadJunitCoverageZipRequest::unsetrootId()
{
    rootIdIsSet_ = false;
}

}
}
}
}
}


