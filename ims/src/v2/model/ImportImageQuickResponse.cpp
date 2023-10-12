

#include "huaweicloud/ims/v2/model/ImportImageQuickResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ImportImageQuickResponse::ImportImageQuickResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ImportImageQuickResponse::~ImportImageQuickResponse() = default;

void ImportImageQuickResponse::validate()
{
}

web::json::value ImportImageQuickResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ImportImageQuickResponse::fromJson(const web::json::value& val)
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


std::string ImportImageQuickResponse::getJobId() const
{
    return jobId_;
}

void ImportImageQuickResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ImportImageQuickResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ImportImageQuickResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


