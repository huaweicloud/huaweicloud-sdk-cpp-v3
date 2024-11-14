

#include "huaweicloud/gaussdbfornosql/v3/model/CancelInstanceScheduleWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CancelInstanceScheduleWindowRequest::CancelInstanceScheduleWindowRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CancelInstanceScheduleWindowRequest::~CancelInstanceScheduleWindowRequest() = default;

void CancelInstanceScheduleWindowRequest::validate()
{
}

web::json::value CancelInstanceScheduleWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CancelInstanceScheduleWindowRequest::fromJson(const web::json::value& val)
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


std::string CancelInstanceScheduleWindowRequest::getJobId() const
{
    return jobId_;
}

void CancelInstanceScheduleWindowRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CancelInstanceScheduleWindowRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CancelInstanceScheduleWindowRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


