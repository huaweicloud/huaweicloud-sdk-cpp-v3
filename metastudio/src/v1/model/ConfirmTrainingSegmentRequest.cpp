

#include "huaweicloud/metastudio/v1/model/ConfirmTrainingSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmTrainingSegmentRequest::ConfirmTrainingSegmentRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    index_ = 0;
    indexIsSet_ = false;
}

ConfirmTrainingSegmentRequest::~ConfirmTrainingSegmentRequest() = default;

void ConfirmTrainingSegmentRequest::validate()
{
}

web::json::value ConfirmTrainingSegmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }

    return val;
}
bool ConfirmTrainingSegmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    return ok;
}


std::string ConfirmTrainingSegmentRequest::getJobId() const
{
    return jobId_;
}

void ConfirmTrainingSegmentRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ConfirmTrainingSegmentRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ConfirmTrainingSegmentRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ConfirmTrainingSegmentRequest::getIndex() const
{
    return index_;
}

void ConfirmTrainingSegmentRequest::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool ConfirmTrainingSegmentRequest::indexIsSet() const
{
    return indexIsSet_;
}

void ConfirmTrainingSegmentRequest::unsetindex()
{
    indexIsSet_ = false;
}

}
}
}
}
}


