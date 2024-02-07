

#include "huaweicloud/geip/v3/model/ShowJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowJobsRequest::ShowJobsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    fieldsIsSet_ = false;
}

ShowJobsRequest::~ShowJobsRequest() = default;

void ShowJobsRequest::validate()
{
}

web::json::value ShowJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::string ShowJobsRequest::getJobId() const
{
    return jobId_;
}

void ShowJobsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<std::string>& ShowJobsRequest::getFields()
{
    return fields_;
}

void ShowJobsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowJobsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowJobsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


