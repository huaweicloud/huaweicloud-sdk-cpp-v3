

#include "huaweicloud/ims/v2/model/ExportImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ExportImageResponse::ExportImageResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExportImageResponse::~ExportImageResponse() = default;

void ExportImageResponse::validate()
{
}

web::json::value ExportImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ExportImageResponse::fromJson(const web::json::value& val)
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


std::string ExportImageResponse::getJobId() const
{
    return jobId_;
}

void ExportImageResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExportImageResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExportImageResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


