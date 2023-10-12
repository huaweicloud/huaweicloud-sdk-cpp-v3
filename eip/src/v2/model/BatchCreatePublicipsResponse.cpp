

#include "huaweicloud/eip/v2/model/BatchCreatePublicipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreatePublicipsResponse::BatchCreatePublicipsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchCreatePublicipsResponse::~BatchCreatePublicipsResponse() = default;

void BatchCreatePublicipsResponse::validate()
{
}

web::json::value BatchCreatePublicipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchCreatePublicipsResponse::fromJson(const web::json::value& val)
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


std::string BatchCreatePublicipsResponse::getJobId() const
{
    return jobId_;
}

void BatchCreatePublicipsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchCreatePublicipsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchCreatePublicipsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


