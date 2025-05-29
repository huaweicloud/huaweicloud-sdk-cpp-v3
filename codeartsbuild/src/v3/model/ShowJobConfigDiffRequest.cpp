

#include "huaweicloud/codeartsbuild/v3/model/ShowJobConfigDiffRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobConfigDiffRequest::ShowJobConfigDiffRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    revisedlNo_ = "";
    revisedlNoIsSet_ = false;
    originalNo_ = "";
    originalNoIsSet_ = false;
}

ShowJobConfigDiffRequest::~ShowJobConfigDiffRequest() = default;

void ShowJobConfigDiffRequest::validate()
{
}

web::json::value ShowJobConfigDiffRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(revisedlNoIsSet_) {
        val[utility::conversions::to_string_t("revisedl_no")] = ModelBase::toJson(revisedlNo_);
    }
    if(originalNoIsSet_) {
        val[utility::conversions::to_string_t("original_no")] = ModelBase::toJson(originalNo_);
    }

    return val;
}
bool ShowJobConfigDiffRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("revisedl_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revisedl_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevisedlNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalNo(refVal);
        }
    }
    return ok;
}


std::string ShowJobConfigDiffRequest::getJobId() const
{
    return jobId_;
}

void ShowJobConfigDiffRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobConfigDiffRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobConfigDiffRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobConfigDiffRequest::getRevisedlNo() const
{
    return revisedlNo_;
}

void ShowJobConfigDiffRequest::setRevisedlNo(const std::string& value)
{
    revisedlNo_ = value;
    revisedlNoIsSet_ = true;
}

bool ShowJobConfigDiffRequest::revisedlNoIsSet() const
{
    return revisedlNoIsSet_;
}

void ShowJobConfigDiffRequest::unsetrevisedlNo()
{
    revisedlNoIsSet_ = false;
}

std::string ShowJobConfigDiffRequest::getOriginalNo() const
{
    return originalNo_;
}

void ShowJobConfigDiffRequest::setOriginalNo(const std::string& value)
{
    originalNo_ = value;
    originalNoIsSet_ = true;
}

bool ShowJobConfigDiffRequest::originalNoIsSet() const
{
    return originalNoIsSet_;
}

void ShowJobConfigDiffRequest::unsetoriginalNo()
{
    originalNoIsSet_ = false;
}

}
}
}
}
}


