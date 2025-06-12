

#include "huaweicloud/metastudio/v1/model/ShowJobUploadingAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowJobUploadingAddressRequest::ShowJobUploadingAddressRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobUploadingAddressRequest::~ShowJobUploadingAddressRequest() = default;

void ShowJobUploadingAddressRequest::validate()
{
}

web::json::value ShowJobUploadingAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobUploadingAddressRequest::fromJson(const web::json::value& val)
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


std::string ShowJobUploadingAddressRequest::getJobId() const
{
    return jobId_;
}

void ShowJobUploadingAddressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobUploadingAddressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobUploadingAddressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


