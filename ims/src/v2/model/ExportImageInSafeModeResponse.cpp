

#include "huaweicloud/ims/v2/model/ExportImageInSafeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ExportImageInSafeModeResponse::ExportImageInSafeModeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExportImageInSafeModeResponse::~ExportImageInSafeModeResponse() = default;

void ExportImageInSafeModeResponse::validate()
{
}

web::json::value ExportImageInSafeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExportImageInSafeModeResponse::fromJson(const web::json::value& val)
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


std::string ExportImageInSafeModeResponse::getJobId() const
{
    return jobId_;
}

void ExportImageInSafeModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExportImageInSafeModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExportImageInSafeModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


