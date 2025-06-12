

#include "huaweicloud/metastudio/v1/model/ShowTrainingSegmentInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTrainingSegmentInfoRequest::ShowTrainingSegmentInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowTrainingSegmentInfoRequest::~ShowTrainingSegmentInfoRequest() = default;

void ShowTrainingSegmentInfoRequest::validate()
{
}

web::json::value ShowTrainingSegmentInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowTrainingSegmentInfoRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTrainingSegmentInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowTrainingSegmentInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTrainingSegmentInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTrainingSegmentInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


