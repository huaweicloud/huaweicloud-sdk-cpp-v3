

#include "huaweicloud/ims/v2/model/ImportImageQuickInSafeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ImportImageQuickInSafeModeResponse::ImportImageQuickInSafeModeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ImportImageQuickInSafeModeResponse::~ImportImageQuickInSafeModeResponse() = default;

void ImportImageQuickInSafeModeResponse::validate()
{
}

web::json::value ImportImageQuickInSafeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ImportImageQuickInSafeModeResponse::fromJson(const web::json::value& val)
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


std::string ImportImageQuickInSafeModeResponse::getJobId() const
{
    return jobId_;
}

void ImportImageQuickInSafeModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ImportImageQuickInSafeModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ImportImageQuickInSafeModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


