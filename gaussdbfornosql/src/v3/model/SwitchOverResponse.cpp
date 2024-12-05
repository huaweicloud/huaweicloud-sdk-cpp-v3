

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchOverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchOverResponse::SwitchOverResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchOverResponse::~SwitchOverResponse() = default;

void SwitchOverResponse::validate()
{
}

web::json::value SwitchOverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchOverResponse::fromJson(const web::json::value& val)
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


std::string SwitchOverResponse::getJobId() const
{
    return jobId_;
}

void SwitchOverResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchOverResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchOverResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


